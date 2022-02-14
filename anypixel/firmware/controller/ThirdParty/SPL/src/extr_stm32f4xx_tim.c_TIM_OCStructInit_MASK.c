
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int TIM_Pulse; int TIM_OCNIdleState; int TIM_OCIdleState; void* TIM_OCNPolarity; void* TIM_OCPolarity; int TIM_OutputNState; int TIM_OutputState; int TIM_OCMode; } ;
typedef TYPE_1__ TIM_OCInitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 void* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_0(TIM_OCInitTypeDef* VAR_6)
{

  VAR_6->TIM_OCMode = VAR_1;
  VAR_6->TIM_OutputState = VAR_5;
  VAR_6->TIM_OutputNState = VAR_4;
  VAR_6->TIM_Pulse = 0x00000000;
  VAR_6->TIM_OCPolarity = VAR_3;
  VAR_6->TIM_OCNPolarity = VAR_3;
  VAR_6->TIM_OCIdleState = VAR_0;
  VAR_6->TIM_OCNIdleState = VAR_2;
}
