
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_14__ {int TIM_RepetitionCounter; int TIM_Prescaler; int TIM_Period; scalar_t__ TIM_ClockDivision; scalar_t__ TIM_CounterMode; } ;
struct TYPE_13__ {int EGR; int RCR; int PSC; int ARR; scalar_t__ CR1; } ;
typedef TYPE_1__ TIM_TypeDef ;
typedef TYPE_2__ TIM_TimeBaseInitTypeDef ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 TYPE_1__* VAR_0 ;
 TYPE_1__* VAR_1 ;
 TYPE_1__* VAR_2 ;
 TYPE_1__* VAR_3 ;
 TYPE_1__* VAR_4 ;
 TYPE_1__* VAR_5 ;
 TYPE_1__* VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ) ;

void FUNC_4(TIM_TypeDef* VAR_11, TIM_TimeBaseInitTypeDef* VAR_12)
{
  uint16_t VAR_13 = 0;


  FUNC_3(FUNC_0(VAR_11));
  FUNC_3(FUNC_2(VAR_12->TIM_CounterMode));
  FUNC_3(FUNC_1(VAR_12->TIM_ClockDivision));

  VAR_13 = VAR_11->CR1;

  if((VAR_11 == VAR_0) || (VAR_11 == VAR_4) || (VAR_11 == VAR_5))
  {

    VAR_13 &= (uint16_t)(~((uint16_t)(VAR_9 | VAR_8)));
    VAR_13 |= (uint32_t)VAR_12->TIM_CounterMode;
  }

  if(VAR_11 != VAR_6)
  {

    VAR_13 &= (uint16_t)(~((uint16_t)VAR_7));
    VAR_13 |= (uint32_t)VAR_12->TIM_ClockDivision;
  }

  VAR_11->CR1 = VAR_13;


  VAR_11->ARR = VAR_12->TIM_Period ;


  VAR_11->PSC = VAR_12->TIM_Prescaler;

  if ((VAR_11 == VAR_0) || (VAR_11 == VAR_1)|| (VAR_11 == VAR_2) || (VAR_11 == VAR_3))
  {

    VAR_11->RCR = VAR_12->TIM_RepetitionCounter;
  }



  VAR_11->EGR = VAR_10;
}
