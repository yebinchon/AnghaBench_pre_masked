
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rtc_time {int tm_year; int tm_mday; scalar_t__ tm_sec; scalar_t__ tm_min; scalar_t__ tm_hour; scalar_t__ tm_mon; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__,int) ;

int FUNC_1(struct rtc_time *VAR_1)
{
 if (VAR_1->tm_year < 70
  || ((unsigned)VAR_1->tm_mon) >= 12
  || VAR_1->tm_mday < 1
  || VAR_1->tm_mday > FUNC_0(VAR_1->tm_mon, VAR_1->tm_year + 1900)
  || ((unsigned)VAR_1->tm_hour) >= 24
  || ((unsigned)VAR_1->tm_min) >= 60
  || ((unsigned)VAR_1->tm_sec) >= 60)
  return -VAR_0;

 return 0;
}
