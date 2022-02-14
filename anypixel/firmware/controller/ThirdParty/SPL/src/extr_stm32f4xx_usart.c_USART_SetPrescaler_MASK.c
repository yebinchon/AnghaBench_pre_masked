
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_4__ {int GTPR; } ;
typedef TYPE_1__ USART_TypeDef ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;

void FUNC_2(USART_TypeDef* VAR_1, uint8_t VAR_2)
{

  FUNC_1(FUNC_0(VAR_1));


  VAR_1->GTPR &= VAR_0;

  VAR_1->GTPR |= VAR_2;
}
