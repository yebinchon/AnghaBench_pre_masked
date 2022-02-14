
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int USART_LastBit; int USART_CPHA; int USART_CPOL; int USART_Clock; } ;
typedef TYPE_1__ USART_ClockInitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void FUNC_0(USART_ClockInitTypeDef* VAR_4)
{

  VAR_4->USART_Clock = VAR_2;
  VAR_4->USART_CPOL = VAR_1;
  VAR_4->USART_CPHA = VAR_0;
  VAR_4->USART_LastBit = VAR_3;
}
