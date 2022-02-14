
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int USART_Mode; int USART_HardwareFlowControl; int USART_Parity; int USART_StopBits; int USART_WordLength; int USART_BaudRate; } ;
typedef TYPE_1__ USART_InitTypeDef ;
struct TYPE_6__ {int configured; int USARTx; int baud; int num_pins; int pins; int apb2; int apb1; int ahb1; int rx_buf_size; int rx_buf; int rx_fifo; } ;
typedef TYPE_2__ CONFIG_USART_ConfigState ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;
 int VAR_1 ;
 int FUNC_7 (int ,TYPE_1__*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;

void FUNC_8(CONFIG_USART_ConfigState *VAR_7) {
 USART_InitTypeDef VAR_8;

 FUNC_1(VAR_7->rx_fifo, VAR_7->rx_buf, VAR_7->rx_buf_size);


 FUNC_2(VAR_7->ahb1, VAR_0);
 FUNC_3(VAR_7->apb1, VAR_0);
 FUNC_4(VAR_7->apb2, VAR_0);


 FUNC_0(VAR_7->pins, VAR_7->num_pins);


 FUNC_6(VAR_7->USARTx);
 VAR_8.USART_BaudRate = VAR_7->baud;
    VAR_8.USART_WordLength = VAR_6;
    VAR_8.USART_StopBits = VAR_5;
    VAR_8.USART_Parity = VAR_4;
    VAR_8.USART_HardwareFlowControl = VAR_1;
    VAR_8.USART_Mode = VAR_2 | VAR_3;
 FUNC_7(VAR_7->USARTx, &VAR_8);





 FUNC_5(VAR_7->USARTx, VAR_0);
 VAR_7->configured = 1;
 VAR_7->configured = 1;
 VAR_7->configured = 1;
 VAR_7->configured = 1;
}
