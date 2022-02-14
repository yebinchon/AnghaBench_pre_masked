
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int SR2; } ;
typedef TYPE_1__ I2C_TypeDef ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

uint8_t FUNC_2(I2C_TypeDef* VAR_0)
{

  FUNC_1(FUNC_0(VAR_0));

  return ((VAR_0->SR2) >> 8);
}
