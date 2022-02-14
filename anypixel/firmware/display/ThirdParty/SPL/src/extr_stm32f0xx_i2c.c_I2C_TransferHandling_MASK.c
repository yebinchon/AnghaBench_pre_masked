
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
struct TYPE_4__ {int CR2; } ;
typedef TYPE_1__ I2C_TypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ) ;

void FUNC_5(I2C_TypeDef* VAR_7, uint16_t VAR_8, uint8_t VAR_9, uint32_t VAR_10, uint32_t VAR_11)
{
  uint32_t VAR_12 = 0;


  FUNC_4(FUNC_0(VAR_7));
  FUNC_4(FUNC_1(VAR_8));
  FUNC_4(FUNC_2(VAR_10));
  FUNC_4(FUNC_3(VAR_11));


  VAR_12 = VAR_7->CR2;


  VAR_12 &= (uint32_t)~((uint32_t)(VAR_4 | VAR_1 | VAR_3 | VAR_0 | VAR_2 | VAR_5 | VAR_6));


  VAR_12 |= (uint32_t)(((uint32_t)VAR_8 & VAR_4) | (((uint32_t)VAR_9 << 16 ) & VAR_1) | (uint32_t)VAR_10 | (uint32_t)VAR_11);



  VAR_7->CR2 = VAR_12;
}
