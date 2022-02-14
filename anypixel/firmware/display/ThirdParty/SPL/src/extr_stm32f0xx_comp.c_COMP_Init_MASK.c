
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int CSR; } ;
struct TYPE_4__ {int COMP_InvertingInput; int COMP_Output; int COMP_OutputPol; int COMP_Hysteresis; int COMP_Mode; } ;
typedef TYPE_1__ COMP_InitTypeDef ;


 TYPE_3__* VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 (int) ;
 int FUNC_6 (int ) ;

void FUNC_7(uint32_t VAR_2, COMP_InitTypeDef* VAR_3)
{
  uint32_t VAR_4 = 0;


  FUNC_6(FUNC_0(VAR_2));
  FUNC_6(FUNC_2(VAR_3->COMP_InvertingInput));
  FUNC_6(FUNC_4(VAR_3->COMP_Output));
  FUNC_6(FUNC_5(VAR_3->COMP_OutputPol));
  FUNC_6(FUNC_1(VAR_3->COMP_Hysteresis));
  FUNC_6(FUNC_3(VAR_3->COMP_Mode));


  VAR_4 = VAR_0->CSR;


  VAR_4 &= (uint32_t) ~(VAR_1<<VAR_2);







  VAR_4 |= (uint32_t)((VAR_3->COMP_InvertingInput | VAR_3->COMP_Output |
                       VAR_3->COMP_OutputPol | VAR_3->COMP_Hysteresis |
                       VAR_3->COMP_Mode)<<VAR_2);


  VAR_0->CSR = VAR_4;
}
