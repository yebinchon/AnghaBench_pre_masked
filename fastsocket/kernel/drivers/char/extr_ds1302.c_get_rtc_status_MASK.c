
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_hour; int tm_min; int tm_sec; int tm_year; int tm_mon; int tm_mday; } ;


 int FUNC_0 (struct rtc_time*) ;
 int FUNC_1 (char*,char*,int,int,int,int,int,int) ;

int
FUNC_2(char *VAR_0)
{
 char *VAR_1;
 struct rtc_time VAR_2;

 VAR_1 = VAR_0;

 FUNC_0(&VAR_2);






 VAR_1 += FUNC_1(VAR_1,
  "rtc_time\t: %02d:%02d:%02d\n"
  "rtc_date\t: %04d-%02d-%02d\n",
  VAR_2.tm_hour, VAR_2.tm_min, VAR_2.tm_sec,
  VAR_2.tm_year + 1900, VAR_2.tm_mon + 1, VAR_2.tm_mday);

 return VAR_1 - VAR_0;
}
