
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rtc_time {int tm_wday; scalar_t__ tm_year; int tm_mday; int tm_mon; scalar_t__ tm_sec; int tm_min; int tm_hour; } ;
struct intersil_dt {int weekday; scalar_t__ year; int day; int month; scalar_t__ second; int minute; int hour; scalar_t__ csec; } ;
struct TYPE_2__ {int cmd_reg; int counter; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_0 (unsigned long) ;
 int FUNC_1 (unsigned long) ;

int FUNC_2(int VAR_3, struct rtc_time *VAR_4)
{
 volatile struct intersil_dt *VAR_5;
 unsigned long VAR_6;

        VAR_5 = (struct intersil_dt *) &VAR_2->counter;

 FUNC_1(VAR_6);

 VAR_2->cmd_reg = VAR_1;


 if(VAR_3) {
  VAR_5->csec = 0;
  VAR_5->hour = VAR_4->tm_hour;
  VAR_5->minute = VAR_4->tm_min;
  VAR_5->second = VAR_4->tm_sec;
  VAR_5->month = VAR_4->tm_mon;
  VAR_5->day = VAR_4->tm_mday;
  VAR_5->year = VAR_4->tm_year - 68;
  VAR_5->weekday = VAR_4->tm_wday;
 } else {

  VAR_4->tm_sec = VAR_5->csec;
  VAR_4->tm_hour = VAR_5->hour;
  VAR_4->tm_min = VAR_5->minute;
  VAR_4->tm_sec = VAR_5->second;
  VAR_4->tm_mon = VAR_5->month;
  VAR_4->tm_mday = VAR_5->day;
  VAR_4->tm_year = VAR_5->year + 68;
  VAR_4->tm_wday = VAR_5->weekday;
 }

 VAR_2->cmd_reg = VAR_0;

 FUNC_0(VAR_6);

 return 0;

}
