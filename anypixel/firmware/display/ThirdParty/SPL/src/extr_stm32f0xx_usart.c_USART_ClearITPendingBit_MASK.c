
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int ICR; } ;
typedef TYPE_1__ USART_TypeDef ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int ) ;

void FUNC_3(USART_TypeDef* VAR_0, uint32_t VAR_1)
{
  uint32_t VAR_2 = 0, VAR_3 = 0;

  FUNC_2(FUNC_0(VAR_0));
  FUNC_2(FUNC_1(VAR_1));

  VAR_2 = VAR_1 >> 0x10;
  VAR_3 = ((uint32_t)0x01 << (uint32_t)VAR_2);
  VAR_0->ICR = (uint32_t)VAR_3;
}
