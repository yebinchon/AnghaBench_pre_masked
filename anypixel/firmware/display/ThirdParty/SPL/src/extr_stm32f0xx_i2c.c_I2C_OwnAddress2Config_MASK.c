
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_4__ {int OAR2; } ;
typedef TYPE_1__ I2C_TypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ) ;

void FUNC_4(I2C_TypeDef* VAR_2, uint16_t VAR_3, uint8_t VAR_4)
{
  uint32_t VAR_5 = 0;


  FUNC_3(FUNC_0(VAR_2));
  FUNC_3(FUNC_1(VAR_3));
  FUNC_3(FUNC_2(VAR_4));


  VAR_5 = VAR_2->OAR2;


  VAR_5 &= (uint32_t)~((uint32_t)(VAR_0 | VAR_1));


  VAR_5 |= (uint32_t)(((uint32_t)VAR_3 & VAR_0) | (((uint32_t)VAR_4 << 8) & VAR_1)) ;



  VAR_2->OAR2 = VAR_5;
}
