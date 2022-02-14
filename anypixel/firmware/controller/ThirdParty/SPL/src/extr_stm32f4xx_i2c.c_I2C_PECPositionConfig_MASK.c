
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int CR1; } ;
typedef TYPE_1__ I2C_TypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;

void FUNC_3(I2C_TypeDef* VAR_2, uint16_t VAR_3)
{

  FUNC_2(FUNC_0(VAR_2));
  FUNC_2(FUNC_1(VAR_3));
  if (VAR_3 == VAR_1)
  {

    VAR_2->CR1 |= VAR_1;
  }
  else
  {

    VAR_2->CR1 &= VAR_0;
  }
}
