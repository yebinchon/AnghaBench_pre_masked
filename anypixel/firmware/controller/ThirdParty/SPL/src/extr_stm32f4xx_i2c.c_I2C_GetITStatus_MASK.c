
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int CR2; int SR1; } ;
typedef scalar_t__ ITStatus ;
typedef TYPE_1__ I2C_TypeDef ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ) ;

ITStatus FUNC_3(I2C_TypeDef* VAR_4, uint32_t VAR_5)
{
  ITStatus VAR_6 = VAR_2;
  uint32_t VAR_7 = 0;


  FUNC_2(FUNC_0(VAR_4));
  FUNC_2(FUNC_1(VAR_5));


  VAR_7 = (uint32_t)(((VAR_5 & VAR_1) >> 16) & (VAR_4->CR2)) ;


  VAR_5 &= VAR_0;


  if (((VAR_4->SR1 & VAR_5) != (uint32_t)VAR_2) && VAR_7)
  {

    VAR_6 = VAR_3;
  }
  else
  {

    VAR_6 = VAR_2;
  }

  return VAR_6;
}
