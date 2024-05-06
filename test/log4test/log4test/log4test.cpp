// log4test.cpp : 定义控制台应用程序的入口点。
//

#include "stdafx.h"
//
//int main()
//{
//    return 0;
//}


#include <log4cplus/logger.h>
#include <log4cplus/fileappender.h>
#include <log4cplus/layout.h>
#include <log4cplus/ndc.h>
#include <log4cplus/helpers/loglog.h>
#include <log4cplus/loggingmacros.h>
#include <log4cplus/consoleappender.h>
#include <log4cplus/loggingmacros.h>
#include <log4cplus/configurator.h>

using namespace log4cplus;

int main()
{
	log4cplus::initialize();

	//	// 从配置文件加载配置
	PropertyConfigurator::doConfigure("log4cplus.properties");

	//helpers::LogLog::getLogLog()->setInternalDebugging(true);
	//SharedAppenderPtr append_1(
	//	new RollingFileAppender(LOG4CPLUS_TEXT("Test.log"), 5 * 1024, 5));
	//append_1->setName(LOG4CPLUS_TEXT("First"));
	//append_1->setLayout(std::auto_ptr<Layout>(new TTCCLayout()));
	//Logger::getRoot().addAppender(append_1);


	log4cplus::Logger logger = log4cplus::Logger::getInstance(LOG4CPLUS_TEXT("example"));

	LOG4CPLUS_DEBUG(logger,"Entering loop #" );


	return 0;
}


//#include <log4cplus/logger.h>
//#include <log4cplus/fileappender.h>
//#include <log4cplus/layout.h>
//#include <log4cplus/ndc.h>
//#include <log4cplus/helpers/loglog.h>
//#include <log4cplus/loggingmacros.h>
//#include <log4cplus/consoleappender.h>
//#include <log4cplus/loggingmacros.h>
//
//
//using namespace log4cplus;
//
//const int LOOP_COUNT = 20000;


//int
//main()
//{
//	log4cplus::initialize();
//	helpers::LogLog::getLogLog()->setInternalDebugging(true);
//	SharedAppenderPtr append_1(
//		new RollingFileAppender(LOG4CPLUS_TEXT("Test.log"), 5 * 1024, 5));
//	append_1->setName(LOG4CPLUS_TEXT("First"));
//	append_1->setLayout(std::auto_ptr<Layout>(new TTCCLayout()));
//	Logger::getRoot().addAppender(append_1);
//
//	Logger root = Logger::getRoot();
//	Logger test = Logger::getInstance(LOG4CPLUS_TEXT("test"));
//	Logger subTest = Logger::getInstance(LOG4CPLUS_TEXT("test.subtest"));
//
//	NDCContextCreator _context(LOG4CPLUS_TEXT("loop"));
//
//
//	for (int i = 0; i<LOOP_COUNT; ++i) {
//		NDCContextCreator _context(LOG4CPLUS_TEXT("loop"));
//		LOG4CPLUS_DEBUG(subTest, "Entering loop #" << i);
//	}
//
//	NDCContextCreator _context(LOG4CPLUS_TEXT("loop"));
//	LOG4CPLUS_DEBUG(subTest ,"Entering loop #" );
//
//
//	return 0;
//}


//#include <log4cplus/logger.h>
//#include <log4cplus/configurator.h>
//
//
//using namespace log4cplus;
//
//int main() {
//	// 从配置文件加载配置
//	log4cplus::PropertyConfigurator::doConfigure("log4cplus.properties");
//
//	// 获取一个 logger
//	log4cplus::Logger logger = log4cplus::Logger::getInstance(LOG4CPLUS_TEXT("example"));
//
//	// 记录不同级别的日志消息
//	LOG4CPLUS_DEBUG(logger, "This is a debug message");
//	LOG4CPLUS_INFO(logger, "This is an info message");
//	LOG4CPLUS_WARN(logger, "This is a warning message");
//	LOG4CPLUS_ERROR(logger, "This is an error message");
//	LOG4CPLUS_FATAL(logger, "This is a fatal message");
//
//	return 0;
//}
