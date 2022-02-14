
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int TIM_DeadTime; int TIM_AutomaticOutput; int TIM_BreakPolarity; int TIM_Break; int TIM_LOCKLevel; int TIM_OSSIState; int TIM_OSSRState; } ;
typedef TYPE_1__ TIM_BDTRInitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_0(TIM_BDTRInitTypeDef* VAR_6)
{

  VAR_6->TIM_OSSRState = VAR_5;
  VAR_6->TIM_OSSIState = VAR_4;
  VAR_6->TIM_LOCKLevel = VAR_3;
  VAR_6->TIM_DeadTime = 0x00;
  VAR_6->TIM_Break = VAR_2;
  VAR_6->TIM_BreakPolarity = VAR_1;
  VAR_6->TIM_AutomaticOutput = VAR_0;
}
