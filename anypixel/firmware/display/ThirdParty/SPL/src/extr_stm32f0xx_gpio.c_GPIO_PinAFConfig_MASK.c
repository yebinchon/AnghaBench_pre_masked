
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_4__ {int* AFR; } ;
typedef TYPE_1__ GPIO_TypeDef ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;

void FUNC_4(GPIO_TypeDef* VAR_0, uint16_t VAR_1, uint8_t VAR_2)
{
  uint32_t VAR_3 = 0x00;
  uint32_t VAR_4 = 0x00;


  FUNC_3(FUNC_1(VAR_0));
  FUNC_3(FUNC_2(VAR_1));
  FUNC_3(FUNC_0(VAR_2));

  VAR_3 = ((uint32_t)(VAR_2) << ((uint32_t)((uint32_t)VAR_1 & (uint32_t)0x07) * 4));
  VAR_0->AFR[VAR_1 >> 0x03] &= ~((uint32_t)0xF << ((uint32_t)((uint32_t)VAR_1 & (uint32_t)0x07) * 4));
  VAR_4 = VAR_0->AFR[VAR_1 >> 0x03] | VAR_3;
  VAR_0->AFR[VAR_1 >> 0x03] = VAR_4;
}
