
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ CFGR2; } ;
typedef TYPE_1__ ADC_TypeDef ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

void FUNC_3(ADC_TypeDef* VAR_0, uint32_t VAR_1)
{

  FUNC_2(FUNC_0(VAR_0));
  FUNC_2(FUNC_1(VAR_1));


    VAR_0->CFGR2 = (uint32_t)VAR_1;

}
