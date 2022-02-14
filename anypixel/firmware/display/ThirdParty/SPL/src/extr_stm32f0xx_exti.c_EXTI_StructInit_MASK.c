
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int EXTI_LineCmd; int EXTI_Trigger; int EXTI_Mode; int EXTI_Line; } ;
typedef TYPE_1__ EXTI_InitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(EXTI_InitTypeDef* VAR_4)
{
  VAR_4->EXTI_Line = VAR_1;
  VAR_4->EXTI_Mode = VAR_2;
  VAR_4->EXTI_Trigger = VAR_3;
  VAR_4->EXTI_LineCmd = VAR_0;
}
