
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int TIM_Period; int TIM_Prescaler; int TIM_RepetitionCounter; int TIM_CounterMode; int TIM_ClockDivision; } ;
typedef TYPE_1__ TIM_TimeBaseInitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;

void FUNC_0(TIM_TimeBaseInitTypeDef* VAR_2)
{

  VAR_2->TIM_Period = 0xFFFFFFFF;
  VAR_2->TIM_Prescaler = 0x0000;
  VAR_2->TIM_ClockDivision = VAR_0;
  VAR_2->TIM_CounterMode = VAR_1;
  VAR_2->TIM_RepetitionCounter = 0x0000;
}
