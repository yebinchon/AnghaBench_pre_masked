
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ RTC_Seconds; scalar_t__ RTC_Minutes; scalar_t__ RTC_Hours; int RTC_H12; } ;
struct TYPE_5__ {int RTC_AlarmDateWeekDay; int RTC_AlarmMask; int RTC_AlarmDateWeekDaySel; TYPE_1__ RTC_AlarmTime; } ;
typedef TYPE_2__ RTC_AlarmTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(RTC_AlarmTypeDef* VAR_3)
{

  VAR_3->RTC_AlarmTime.RTC_H12 = VAR_2;
  VAR_3->RTC_AlarmTime.RTC_Hours = 0;
  VAR_3->RTC_AlarmTime.RTC_Minutes = 0;
  VAR_3->RTC_AlarmTime.RTC_Seconds = 0;


  VAR_3->RTC_AlarmDateWeekDaySel = VAR_0;
  VAR_3->RTC_AlarmDateWeekDay = 1;


  VAR_3->RTC_AlarmMask = VAR_1;
}
