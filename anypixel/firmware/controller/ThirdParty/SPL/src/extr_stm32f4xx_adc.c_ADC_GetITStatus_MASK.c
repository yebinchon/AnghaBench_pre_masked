
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {int CR1; int SR; } ;
typedef scalar_t__ ITStatus ;
typedef TYPE_1__ ADC_TypeDef ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;

ITStatus FUNC_3(ADC_TypeDef* VAR_2, uint16_t VAR_3)
{
  ITStatus VAR_4 = VAR_0;
  uint32_t VAR_5 = 0, VAR_6 = 0;


  FUNC_2(FUNC_0(VAR_2));
  FUNC_2(FUNC_1(VAR_3));


  VAR_5 = VAR_3 >> 8;


  VAR_6 = (VAR_2->CR1 & ((uint32_t)0x01 << (uint8_t)VAR_3)) ;


  if (((VAR_2->SR & VAR_5) != (uint32_t)VAR_0) && VAR_6)
  {

    VAR_4 = VAR_1;
  }
  else
  {

    VAR_4 = VAR_0;
  }

  return VAR_4;
}
