
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_3__ {void* RTC_SynchPrediv; void* RTC_AsynchPrediv; int RTC_HourFormat; } ;
typedef TYPE_1__ RTC_InitTypeDef ;


 int VAR_0 ;

void FUNC_0(RTC_InitTypeDef* VAR_1)
{

  VAR_1->RTC_HourFormat = VAR_0;


  VAR_1->RTC_AsynchPrediv = (uint32_t)0x7F;


  VAR_1->RTC_SynchPrediv = (uint32_t)0xFF;
}
