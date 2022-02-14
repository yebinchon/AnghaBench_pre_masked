
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int uint32_t ;
struct TYPE_5__ {int TR; } ;
struct TYPE_4__ {void* RTC_Seconds; void* RTC_Minutes; void* RTC_Hours; void* RTC_H12; } ;
typedef TYPE_1__ RTC_TimeTypeDef ;


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

void FUNC_3(uint32_t VAR_10, RTC_TimeTypeDef* VAR_11)
{
  uint32_t VAR_12 = 0;


  FUNC_2(FUNC_0(VAR_10));


  VAR_12 = (uint32_t)(VAR_0->TR & VAR_7);


  VAR_11->RTC_Hours = (uint8_t)((VAR_12 & (VAR_2 | VAR_3)) >> 16);
  VAR_11->RTC_Minutes = (uint8_t)((VAR_12 & (VAR_4 | VAR_5)) >>8);
  VAR_11->RTC_Seconds = (uint8_t)(VAR_12 & (VAR_8 | VAR_9));
  VAR_11->RTC_H12 = (uint8_t)((VAR_12 & (VAR_6)) >> 16);


  if (VAR_10 == VAR_1)
  {

    VAR_11->RTC_Hours = (uint8_t)FUNC_1(VAR_11->RTC_Hours);
    VAR_11->RTC_Minutes = (uint8_t)FUNC_1(VAR_11->RTC_Minutes);
    VAR_11->RTC_Seconds = (uint8_t)FUNC_1(VAR_11->RTC_Seconds);
  }
}
