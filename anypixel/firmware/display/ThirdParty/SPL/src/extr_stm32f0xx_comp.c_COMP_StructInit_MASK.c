
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int COMP_Mode; int COMP_Hysteresis; int COMP_OutputPol; int COMP_Output; int COMP_InvertingInput; } ;
typedef TYPE_1__ COMP_InitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

void FUNC_0(COMP_InitTypeDef* VAR_5)
{
  VAR_5->COMP_InvertingInput = VAR_1;
  VAR_5->COMP_Output = VAR_4;
  VAR_5->COMP_OutputPol = VAR_3;
  VAR_5->COMP_Hysteresis = VAR_0;
  VAR_5->COMP_Mode = VAR_2;
}
