
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_4__ {int RDR; } ;
typedef TYPE_1__ USART_TypeDef ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int ) ;

uint16_t FUNC_2(USART_TypeDef* VAR_0)
{

  FUNC_1(FUNC_0(VAR_0));


  return (uint16_t)(VAR_0->RDR & (uint16_t)0x01FF);
}
