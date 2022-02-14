
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_4__ {scalar_t__ CR; scalar_t__ DR; } ;
typedef TYPE_1__ ADC_TypeDef ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;

uint32_t FUNC_2(ADC_TypeDef* VAR_3)
{
  uint32_t VAR_4 = 0, VAR_5 = 0, VAR_6 = 0;


  FUNC_1(FUNC_0(VAR_3));


  VAR_3->CR |= (uint32_t)VAR_0;


  do
  {
    VAR_6 = VAR_3->CR & VAR_0;
    VAR_5++;
  } while((VAR_5 != VAR_1) && (VAR_6 != 0x00));

  if((uint32_t)(VAR_3->CR & VAR_0) == VAR_2)
  {

    VAR_4 = VAR_3->DR;
  }
  else
  {

    VAR_4 = 0x00000000;
  }
  return VAR_4;
}
