
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {int TSTR; int TSDR; } ;
struct TYPE_7__ {void* RTC_WeekDay; void* RTC_Date; void* RTC_Month; scalar_t__ RTC_Year; } ;
struct TYPE_6__ {void* RTC_Seconds; void* RTC_Minutes; void* RTC_Hours; void* RTC_H12; } ;
typedef TYPE_1__ RTC_TimeTypeDef ;
typedef TYPE_2__ RTC_DateTypeDef ;


 int FUNC_0 (int) ;
 TYPE_5__* VAR_0 ;
 scalar_t__ FUNC_1 (void*) ;
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
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_2 (int ) ;

void FUNC_3(uint32_t VAR_16, RTC_TimeTypeDef* VAR_17,
                                      RTC_DateTypeDef* VAR_18)
{
  uint32_t VAR_19 = 0, VAR_20 = 0;


  FUNC_2(FUNC_0(VAR_16));


  VAR_19 = (uint32_t)(VAR_0->TSTR & VAR_13);
  VAR_20 = (uint32_t)(VAR_0->TSDR & VAR_5);


  VAR_17->RTC_Hours = (uint8_t)((VAR_19 & (VAR_8 | VAR_9)) >> 16);
  VAR_17->RTC_Minutes = (uint8_t)((VAR_19 & (VAR_10 | VAR_11)) >> 8);
  VAR_17->RTC_Seconds = (uint8_t)(VAR_19 & (VAR_14 | VAR_15));
  VAR_17->RTC_H12 = (uint8_t)((VAR_19 & (VAR_12)) >> 16);


  VAR_18->RTC_Year = 0;
  VAR_18->RTC_Month = (uint8_t)((VAR_20 & (VAR_3 | VAR_4)) >> 8);
  VAR_18->RTC_Date = (uint8_t)(VAR_20 & (VAR_1 | VAR_2));
  VAR_18->RTC_WeekDay = (uint8_t)((VAR_20 & (VAR_6)) >> 13);


  if (VAR_16 == VAR_7)
  {

    VAR_17->RTC_Hours = (uint8_t)FUNC_1(VAR_17->RTC_Hours);
    VAR_17->RTC_Minutes = (uint8_t)FUNC_1(VAR_17->RTC_Minutes);
    VAR_17->RTC_Seconds = (uint8_t)FUNC_1(VAR_17->RTC_Seconds);


    VAR_18->RTC_Month = (uint8_t)FUNC_1(VAR_18->RTC_Month);
    VAR_18->RTC_Date = (uint8_t)FUNC_1(VAR_18->RTC_Date);
    VAR_18->RTC_WeekDay = (uint8_t)FUNC_1(VAR_18->RTC_WeekDay);
  }
}
