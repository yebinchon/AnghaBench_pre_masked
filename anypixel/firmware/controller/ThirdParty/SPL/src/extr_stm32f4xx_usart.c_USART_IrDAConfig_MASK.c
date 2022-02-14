
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {scalar_t__ CR3; } ;
typedef TYPE_1__ USART_TypeDef ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 int FUNC_2 (int ) ;

void FUNC_3(USART_TypeDef* VAR_1, uint16_t VAR_2)
{

  FUNC_2(FUNC_0(VAR_1));
  FUNC_2(FUNC_1(VAR_2));

  VAR_1->CR3 &= (uint16_t)~((uint16_t)VAR_0);
  VAR_1->CR3 |= VAR_2;
}
