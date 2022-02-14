
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {unsigned int tm_min; unsigned int tm_hour; int tm_mday; int tm_mon; int tm_year; int tm_wday; int tm_yday; int tm_isdst; int tm_sec; } ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 int FUNC_0 (struct rtc_time*) ;

__attribute__((used)) static int FUNC_1(unsigned int VAR_2, unsigned int VAR_3, unsigned int VAR_4)
{
 unsigned int VAR_5 = VAR_2 + VAR_1*(VAR_3 + VAR_0*VAR_4);


 static struct rtc_time VAR_6 = {
  .tm_sec = 0,
  .tm_min = 0,
  .tm_hour = 0,
  .tm_mday = 7,
  .tm_mon = 5,
  .tm_year = 106,
  .tm_wday = 3,
  .tm_yday = 160,
  .tm_isdst = 1
 };

 VAR_6.tm_year = (VAR_5 % 100);
 VAR_5 /= 100;
 VAR_6.tm_mon = (VAR_5 % 12);
 VAR_5 /= 12;
 VAR_6.tm_mday = (VAR_5 % 28) + 1;
 VAR_5 /= 28;
 VAR_6.tm_hour = (VAR_5 % 24);
 VAR_5 /= 24;
 VAR_6.tm_min = (VAR_5 % 20) * 3;
 VAR_5 /= 20;
 FUNC_0(&VAR_6);
 return VAR_5 ? -1 : 0;
}
