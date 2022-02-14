
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_4__ {int CR1; } ;
typedef scalar_t__ FunctionalState ;
typedef TYPE_1__ ADC_TypeDef ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;

void FUNC_4(ADC_TypeDef* VAR_1, uint16_t VAR_2, FunctionalState VAR_3)
{
  uint32_t VAR_4 = 0;

  FUNC_3(FUNC_0(VAR_1));
  FUNC_3(FUNC_2(VAR_3));
  FUNC_3(FUNC_1(VAR_2));


  VAR_4 = (uint8_t)VAR_2;
  VAR_4 = (uint32_t)0x01 << VAR_4;

  if (VAR_3 != VAR_0)
  {

    VAR_1->CR1 |= VAR_4;
  }
  else
  {

    VAR_1->CR1 &= (~(uint32_t)VAR_4);
  }
}
