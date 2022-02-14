
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int RTC_Date; scalar_t__ RTC_Year; int RTC_Month; int RTC_WeekDay; } ;
typedef TYPE_1__ RTC_DateTypeDef ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(RTC_DateTypeDef* VAR_2)
{

  VAR_2->RTC_WeekDay = VAR_1;
  VAR_2->RTC_Date = 1;
  VAR_2->RTC_Month = VAR_0;
  VAR_2->RTC_Year = 0;
}
