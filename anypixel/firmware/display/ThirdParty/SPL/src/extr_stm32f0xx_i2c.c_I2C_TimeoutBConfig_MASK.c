
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_4__ {int TIMEOUTR; } ;
typedef TYPE_1__ I2C_TypeDef ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ) ;

void FUNC_3(I2C_TypeDef* VAR_1, uint16_t VAR_2)
{
  uint32_t VAR_3 = 0;


  FUNC_2(FUNC_0(VAR_1));
  FUNC_2(FUNC_1(VAR_2));


  VAR_3 = VAR_1->TIMEOUTR;


  VAR_3 &= (uint32_t)~((uint32_t)VAR_0);


  VAR_3 |= (uint32_t)(((uint32_t)VAR_2 << 16) & VAR_0) ;


  VAR_1->TIMEOUTR = VAR_3;
}
