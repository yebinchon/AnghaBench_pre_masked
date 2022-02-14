
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int WPR; int PRER; int CR; } ;
struct TYPE_4__ {int RTC_AsynchPrediv; scalar_t__ RTC_SynchPrediv; scalar_t__ RTC_HourFormat; } ;
typedef TYPE_1__ RTC_InitTypeDef ;
typedef scalar_t__ ErrorStatus ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_3__* VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_3 () ;
 int FUNC_4 () ;
 scalar_t__ VAR_3 ;
 int FUNC_5 (int ) ;

ErrorStatus FUNC_6(RTC_InitTypeDef* VAR_4)
{
  ErrorStatus VAR_5 = VAR_0;


  FUNC_5(FUNC_1(VAR_4->RTC_HourFormat));
  FUNC_5(FUNC_0(VAR_4->RTC_AsynchPrediv));
  FUNC_5(FUNC_2(VAR_4->RTC_SynchPrediv));


  VAR_1->WPR = 0xCA;
  VAR_1->WPR = 0x53;


  if (FUNC_3() == VAR_0)
  {
    VAR_5 = VAR_0;
  }
  else
  {

    VAR_1->CR &= ((uint32_t)~(VAR_2));

    VAR_1->CR |= ((uint32_t)(VAR_4->RTC_HourFormat));


    VAR_1->PRER = (uint32_t)(VAR_4->RTC_SynchPrediv);
    VAR_1->PRER |= (uint32_t)(VAR_4->RTC_AsynchPrediv << 16);


    FUNC_4();

    VAR_5 = VAR_3;
  }

  VAR_1->WPR = 0xFF;

  return VAR_5;
}
