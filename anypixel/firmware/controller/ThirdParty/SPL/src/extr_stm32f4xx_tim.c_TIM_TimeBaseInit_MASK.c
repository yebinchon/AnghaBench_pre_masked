
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_15__ {int TIM_RepetitionCounter; int TIM_Prescaler; int TIM_Period; scalar_t__ TIM_ClockDivision; scalar_t__ TIM_CounterMode; } ;
struct TYPE_14__ {int EGR; int RCR; int PSC; int ARR; int CR1; } ;
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
 TYPE_1__* VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ) ;

void FUNC_4(TIM_TypeDef* VAR_12, TIM_TimeBaseInitTypeDef* VAR_13)
{
  uint16_t VAR_14 = 0;


  FUNC_3(FUNC_0(VAR_12));
  FUNC_3(FUNC_2(VAR_13->TIM_CounterMode));
  FUNC_3(FUNC_1(VAR_13->TIM_ClockDivision));

  VAR_14 = VAR_12->CR1;

  if((VAR_12 == VAR_0) || (VAR_12 == VAR_7)||
     (VAR_12 == VAR_1) || (VAR_12 == VAR_2)||
     (VAR_12 == VAR_3) || (VAR_12 == VAR_4))
  {

    VAR_14 &= (uint16_t)(~(VAR_10 | VAR_9));
    VAR_14 |= (uint32_t)VAR_13->TIM_CounterMode;
  }

  if((VAR_12 != VAR_5) && (VAR_12 != VAR_6))
  {

    VAR_14 &= (uint16_t)(~VAR_8);
    VAR_14 |= (uint32_t)VAR_13->TIM_ClockDivision;
  }

  VAR_12->CR1 = VAR_14;


  VAR_12->ARR = VAR_13->TIM_Period ;


  VAR_12->PSC = VAR_13->TIM_Prescaler;

  if ((VAR_12 == VAR_0) || (VAR_12 == VAR_7))
  {

    VAR_12->RCR = VAR_13->TIM_RepetitionCounter;
  }



  VAR_12->EGR = VAR_11;
}
