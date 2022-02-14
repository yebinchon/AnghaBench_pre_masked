
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_4__ {scalar_t__ TXDR; } ;
typedef TYPE_1__ I2C_TypeDef ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void FUNC_2(I2C_TypeDef* VAR_0, uint8_t VAR_1)
{

  FUNC_1(FUNC_0(VAR_0));


  VAR_0->TXDR = (uint8_t)VAR_1;
}
