
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_year; int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_wday; } ;
struct device {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct device*,int,int) ;

__attribute__((used)) static int FUNC_2(struct device *VAR_0, struct rtc_time *VAR_1)
{
 VAR_1->tm_year = VAR_1->tm_year + 1900;


 FUNC_1(VAR_0, 0xF, 0);

 FUNC_1(VAR_0, 0x01, FUNC_0(VAR_1->tm_sec));
 FUNC_1(VAR_0, 0x03, FUNC_0(VAR_1->tm_min));
 FUNC_1(VAR_0, 0x05, FUNC_0(VAR_1->tm_hour));

 FUNC_1(VAR_0, 0x07, FUNC_0(VAR_1->tm_mday));
 FUNC_1(VAR_0, 0x09, FUNC_0(VAR_1->tm_mon + 1));
 FUNC_1(VAR_0, 0x0B, FUNC_0(VAR_1->tm_wday));
 FUNC_1(VAR_0, 0x0D, FUNC_0(VAR_1->tm_year % 100));
 FUNC_1(VAR_0, 0x13, FUNC_0(VAR_1->tm_year / 100));






 FUNC_1(VAR_0, 0xF, 0x80);

 return 0;
}
