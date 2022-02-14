
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int CR1; } ;
typedef TYPE_1__ ADC_TypeDef ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(ADC_TypeDef* VAR_1, uint32_t VAR_2)
{
  uint32_t VAR_3 = 0;

  FUNC_2(FUNC_0(VAR_1));
  FUNC_2(FUNC_1(VAR_2));


  VAR_3 = VAR_1->CR1;


  VAR_3 &= VAR_0;


  VAR_3 |= VAR_2;


  VAR_1->CR1 = VAR_3;
}
