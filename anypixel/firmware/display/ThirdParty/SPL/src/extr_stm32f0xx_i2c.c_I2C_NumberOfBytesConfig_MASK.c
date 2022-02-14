
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int CR2; } ;
typedef TYPE_1__ I2C_TypeDef ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

void FUNC_2(I2C_TypeDef* VAR_1, uint8_t VAR_2)
{
  uint32_t VAR_3 = 0;


  FUNC_1(FUNC_0(VAR_1));


  VAR_3 = VAR_1->CR2;


  VAR_3 &= (uint32_t)~((uint32_t)VAR_0);


  VAR_3 |= (uint32_t)(((uint32_t)VAR_2 << 16 ) & VAR_0);


  VAR_1->CR2 = VAR_3;
}
