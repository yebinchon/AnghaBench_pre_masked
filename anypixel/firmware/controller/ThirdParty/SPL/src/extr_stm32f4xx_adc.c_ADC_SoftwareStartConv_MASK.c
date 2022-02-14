
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int CR2; } ;
typedef TYPE_1__ ADC_TypeDef ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void FUNC_2(ADC_TypeDef* VAR_1)
{

  FUNC_1(FUNC_0(VAR_1));


  VAR_1->CR2 |= (uint32_t)VAR_0;
}
