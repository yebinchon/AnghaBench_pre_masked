
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {scalar_t__ ALRMAR; } ;
struct TYPE_5__ {int RTC_Hours; int RTC_Minutes; int RTC_Seconds; int RTC_H12; } ;
struct TYPE_6__ {int RTC_AlarmDateWeekDay; int RTC_AlarmDateWeekDaySel; int RTC_AlarmMask; TYPE_1__ RTC_AlarmTime; } ;
typedef TYPE_2__ RTC_AlarmTypeDef ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 TYPE_4__* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* FUNC_2 (int) ;
 int VAR_12 ;
 int FUNC_3 (int ) ;

void FUNC_4(uint32_t VAR_13, uint32_t VAR_14, RTC_AlarmTypeDef* VAR_15)
{
  uint32_t VAR_16 = 0;


  FUNC_3(FUNC_1(VAR_13));
  FUNC_3(FUNC_0(VAR_14));


  VAR_16 = (uint32_t)(VAR_0->ALRMAR);


  VAR_15->RTC_AlarmTime.RTC_Hours = (uint32_t)((VAR_16 & (VAR_3 | VAR_4)) >> 16);

  VAR_15->RTC_AlarmTime.RTC_Minutes = (uint32_t)((VAR_16 & (VAR_5 | VAR_6)) >> 8);

  VAR_15->RTC_AlarmTime.RTC_Seconds = (uint32_t)(VAR_16 & (VAR_8 | VAR_9));

  VAR_15->RTC_AlarmTime.RTC_H12 = (uint32_t)((VAR_16 & VAR_7) >> 16);
  VAR_15->RTC_AlarmDateWeekDay = (uint32_t)((VAR_16 & (VAR_1 | VAR_2)) >> 24);
  VAR_15->RTC_AlarmDateWeekDaySel = (uint32_t)(VAR_16 & VAR_10);
  VAR_15->RTC_AlarmMask = (uint32_t)(VAR_16 & VAR_11);

  if (VAR_13 == VAR_12)
  {
    VAR_15->RTC_AlarmTime.RTC_Hours = FUNC_2(VAR_15-> RTC_AlarmTime.RTC_Hours);

    VAR_15->RTC_AlarmTime.RTC_Minutes = FUNC_2(VAR_15-> RTC_AlarmTime.RTC_Minutes);

    VAR_15->RTC_AlarmTime.RTC_Seconds = FUNC_2(VAR_15-> RTC_AlarmTime.RTC_Seconds);

    VAR_15->RTC_AlarmDateWeekDay = FUNC_2(VAR_15->RTC_AlarmDateWeekDay);
  }
}
