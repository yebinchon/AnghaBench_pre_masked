
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_7__ {scalar_t__ ALRMBR; scalar_t__ ALRMAR; } ;
struct TYPE_5__ {void* RTC_Seconds; void* RTC_Minutes; void* RTC_Hours; scalar_t__ RTC_H12; } ;
struct TYPE_6__ {void* RTC_AlarmDateWeekDay; TYPE_1__ RTC_AlarmTime; scalar_t__ RTC_AlarmMask; scalar_t__ RTC_AlarmDateWeekDaySel; } ;
typedef TYPE_2__ RTC_AlarmTypeDef ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 TYPE_4__* VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 void* FUNC_2 (void*) ;
 scalar_t__ VAR_13 ;
 int FUNC_3 (int ) ;

void FUNC_4(uint32_t VAR_14, uint32_t VAR_15, RTC_AlarmTypeDef* VAR_16)
{
  uint32_t VAR_17 = 0;


  FUNC_3(FUNC_1(VAR_14));
  FUNC_3(FUNC_0(VAR_15));


  if (VAR_15 == VAR_12)
  {
    VAR_17 = (uint32_t)(VAR_0->ALRMAR);
  }
  else
  {
    VAR_17 = (uint32_t)(VAR_0->ALRMBR);
  }


  VAR_16->RTC_AlarmTime.RTC_Hours = (uint32_t)((VAR_17 & (VAR_3 | VAR_4)) >> 16);

  VAR_16->RTC_AlarmTime.RTC_Minutes = (uint32_t)((VAR_17 & (VAR_5 | VAR_6)) >> 8);

  VAR_16->RTC_AlarmTime.RTC_Seconds = (uint32_t)(VAR_17 & (VAR_8 | VAR_9));

  VAR_16->RTC_AlarmTime.RTC_H12 = (uint32_t)((VAR_17 & VAR_7) >> 16);
  VAR_16->RTC_AlarmDateWeekDay = (uint32_t)((VAR_17 & (VAR_1 | VAR_2)) >> 24);
  VAR_16->RTC_AlarmDateWeekDaySel = (uint32_t)(VAR_17 & VAR_10);
  VAR_16->RTC_AlarmMask = (uint32_t)(VAR_17 & VAR_11);

  if (VAR_14 == VAR_13)
  {
    VAR_16->RTC_AlarmTime.RTC_Hours = FUNC_2(VAR_16-> RTC_AlarmTime.RTC_Hours);

    VAR_16->RTC_AlarmTime.RTC_Minutes = FUNC_2(VAR_16-> RTC_AlarmTime.RTC_Minutes);

    VAR_16->RTC_AlarmTime.RTC_Seconds = FUNC_2(VAR_16-> RTC_AlarmTime.RTC_Seconds);

    VAR_16->RTC_AlarmDateWeekDay = FUNC_2(VAR_16->RTC_AlarmDateWeekDay);
  }
}
