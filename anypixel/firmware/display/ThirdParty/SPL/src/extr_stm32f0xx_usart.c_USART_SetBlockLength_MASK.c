
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint32_t ;
struct TYPE_4__ {int RTOR; } ;
typedef TYPE_1__ USART_TypeDef ;


 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (int ) ;

void FUNC_2(USART_TypeDef* VAR_1, uint8_t VAR_2)
{

  FUNC_1(FUNC_0(VAR_1));


  VAR_1->RTOR &= (uint32_t)~((uint32_t)VAR_0);

  VAR_1->RTOR |= (uint32_t)((uint32_t)VAR_2 << 0x18);
}
