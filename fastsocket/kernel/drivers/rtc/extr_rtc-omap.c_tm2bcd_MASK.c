
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_sec; int tm_min; int tm_hour; int tm_mday; int tm_mon; int tm_year; } ;


 int VAR_0 ;
 void* FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct rtc_time*) ;

__attribute__((used)) static int FUNC_2(struct rtc_time *VAR_1)
{
 if (FUNC_1(VAR_1) != 0)
  return -VAR_0;

 VAR_1->tm_sec = FUNC_0(VAR_1->tm_sec);
 VAR_1->tm_min = FUNC_0(VAR_1->tm_min);
 VAR_1->tm_hour = FUNC_0(VAR_1->tm_hour);
 VAR_1->tm_mday = FUNC_0(VAR_1->tm_mday);

 VAR_1->tm_mon = FUNC_0(VAR_1->tm_mon + 1);


 if (VAR_1->tm_year < 100 || VAR_1->tm_year > 199)
  return -VAR_0;
 VAR_1->tm_year = FUNC_0(VAR_1->tm_year - 100);

 return 0;
}
