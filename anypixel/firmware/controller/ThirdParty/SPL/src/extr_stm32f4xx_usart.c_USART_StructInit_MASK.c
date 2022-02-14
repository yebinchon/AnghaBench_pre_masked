
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int USART_BaudRate; int USART_Mode; int USART_HardwareFlowControl; int USART_Parity; int USART_StopBits; int USART_WordLength; } ;
typedef TYPE_1__ USART_InitTypeDef ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

void FUNC_0(USART_InitTypeDef* VAR_6)
{

  VAR_6->USART_BaudRate = 9600;
  VAR_6->USART_WordLength = VAR_5;
  VAR_6->USART_StopBits = VAR_4;
  VAR_6->USART_Parity = VAR_3 ;
  VAR_6->USART_Mode = VAR_1 | VAR_2;
  VAR_6->USART_HardwareFlowControl = VAR_0;
}
