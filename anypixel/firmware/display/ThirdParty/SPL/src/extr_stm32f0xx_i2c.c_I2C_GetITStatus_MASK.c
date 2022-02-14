
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int ISR; int CR1; } ;
typedef int ITStatus ;
typedef TYPE_1__ I2C_TypeDef ;
typedef scalar_t__ I2C_IT ;
typedef scalar_t__ I2C_CR1_TCIE ;
typedef scalar_t__ I2C_CR1_ERRIE ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (int ) ;

ITStatus FUNC_3(I2C_TypeDef* VAR_4, uint32_t VAR_5)
{
  uint32_t VAR_6 = 0;
  ITStatus VAR_7 = VAR_1;
  uint32_t VAR_8 = 0;


  FUNC_2(FUNC_0(VAR_4));
  FUNC_2(FUNC_1(VAR_5));



  if ((uint32_t)(VAR_5 & VAR_0))
  {
    VAR_8 = (uint32_t)((I2C_CR1_ERRIE) & (VAR_4->CR1));
  }

  else if ((uint32_t)(VAR_5 & VAR_3))
  {
    VAR_8 = (uint32_t)((I2C_CR1_TCIE) & (VAR_4->CR1));
  }
  else
  {
    VAR_8 = (uint32_t)((VAR_5) & (VAR_4->CR1));
  }


  VAR_6 = VAR_4->ISR;


  VAR_6 &= VAR_5;


  if((VAR_6 != VAR_1) && VAR_8)
  {

    VAR_7 = VAR_2;
  }
  else
  {

    VAR_7 = VAR_1;
  }


  return VAR_7;
}
