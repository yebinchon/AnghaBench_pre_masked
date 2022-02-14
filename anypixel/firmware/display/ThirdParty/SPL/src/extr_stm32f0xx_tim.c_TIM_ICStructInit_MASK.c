
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int TIM_ICFilter; int TIM_ICPrescaler; int TIM_ICSelection; int TIM_ICPolarity; int TIM_Channel; } ;
typedef TYPE_1__ TIM_ICInitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(TIM_ICInitTypeDef* VAR_4)
{

  VAR_4->TIM_Channel = VAR_0;
  VAR_4->TIM_ICPolarity = VAR_2;
  VAR_4->TIM_ICSelection = VAR_3;
  VAR_4->TIM_ICPrescaler = VAR_1;
  VAR_4->TIM_ICFilter = 0x00;
}
