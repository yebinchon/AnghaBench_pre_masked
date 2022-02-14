
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ RTC_Seconds; scalar_t__ RTC_Minutes; scalar_t__ RTC_Hours; int RTC_H12; } ;
typedef TYPE_1__ RTC_TimeTypeDef ;


 int VAR_0 ;

void FUNC_0(RTC_TimeTypeDef* VAR_1)
{

  VAR_1->RTC_H12 = VAR_0;
  VAR_1->RTC_Hours = 0;
  VAR_1->RTC_Minutes = 0;
  VAR_1->RTC_Seconds = 0;
}
