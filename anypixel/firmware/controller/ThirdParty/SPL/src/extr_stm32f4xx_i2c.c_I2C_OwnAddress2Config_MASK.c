
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint16_t ;
struct TYPE_4__ {int OAR2; } ;
typedef TYPE_1__ I2C_TypeDef ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void FUNC_2(I2C_TypeDef* VAR_1, uint8_t VAR_2)
{
  uint16_t VAR_3 = 0;


  FUNC_1(FUNC_0(VAR_1));


  VAR_3 = VAR_1->OAR2;


  VAR_3 &= (uint16_t)~((uint16_t)VAR_0);


  VAR_3 |= (uint16_t)((uint16_t)VAR_2 & (uint16_t)0x00FE);


  VAR_1->OAR2 = VAR_3;
}
