
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {int DR; } ;
struct TYPE_4__ {void* RTC_Date; void* RTC_Month; void* RTC_Year; void* RTC_WeekDay; } ;
typedef TYPE_1__ RTC_DateTypeDef ;


 int FUNC_0 (int) ;
 TYPE_3__* VAR_0 ;
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
 int FUNC_2 (int ) ;

void FUNC_3(uint32_t VAR_10, RTC_DateTypeDef* VAR_11)
{
  uint32_t VAR_12 = 0;


  FUNC_2(FUNC_0(VAR_10));


  VAR_12 = (uint32_t)(VAR_0->DR & VAR_5);


  VAR_11->RTC_Year = (uint8_t)((VAR_12 & (VAR_7 | VAR_8)) >> 16);
  VAR_11->RTC_Month = (uint8_t)((VAR_12 & (VAR_3 | VAR_4)) >> 8);
  VAR_11->RTC_Date = (uint8_t)(VAR_12 & (VAR_1 | VAR_2));
  VAR_11->RTC_WeekDay = (uint8_t)((VAR_12 & (VAR_6)) >> 13);


  if (VAR_10 == VAR_9)
  {

    VAR_11->RTC_Year = (uint8_t)FUNC_1(VAR_11->RTC_Year);
    VAR_11->RTC_Month = (uint8_t)FUNC_1(VAR_11->RTC_Month);
    VAR_11->RTC_Date = (uint8_t)FUNC_1(VAR_11->RTC_Date);
  }
}
