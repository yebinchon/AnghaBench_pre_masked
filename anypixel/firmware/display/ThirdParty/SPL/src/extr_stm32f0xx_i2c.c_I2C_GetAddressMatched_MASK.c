
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ ISR; } ;
typedef TYPE_1__ I2C_TypeDef ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

uint8_t FUNC_2(I2C_TypeDef* VAR_1)
{

  FUNC_1(FUNC_0(VAR_1));


  return (uint8_t)(((uint32_t)VAR_1->ISR & VAR_0) >> 16) ;
}
