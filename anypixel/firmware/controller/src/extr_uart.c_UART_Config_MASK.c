
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int USART_Mode; int USART_HardwareFlowControl; int USART_Parity; int USART_StopBits; int USART_WordLength; int USART_BaudRate; } ;
typedef TYPE_1__ USART_InitTypeDef ;
struct TYPE_9__ {int configured; scalar_t__ frame_available; int USARTx; int baud; int IRQn; int num_pins; int pins; int apb2; int apb1; int ahb1; int rx_buf_size; int rx_buf; int rx_fifo; } ;
struct TYPE_8__ {int NVIC_IRQChannelCmd; scalar_t__ NVIC_IRQChannelSubPriority; scalar_t__ NVIC_IRQChannelPreemptionPriority; int NVIC_IRQChannel; } ;
typedef TYPE_2__ NVIC_InitTypeDef ;
typedef TYPE_3__ CONFIG_USART_ConfigState ;


 int FUNC_0 (int ,int ) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (int ) ;
 int VAR_1 ;
 int FUNC_8 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_9 (int ,TYPE_1__*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;

void FUNC_10(CONFIG_USART_ConfigState *VAR_9) {
 USART_InitTypeDef VAR_10;
 NVIC_InitTypeDef VAR_11;

 FUNC_1(VAR_9->rx_fifo, VAR_9->rx_buf, VAR_9->rx_buf_size);


 FUNC_3(VAR_9->ahb1, VAR_0);
 FUNC_4(VAR_9->apb1, VAR_0);
 FUNC_5(VAR_9->apb2, VAR_0);


 FUNC_0(VAR_9->pins, VAR_9->num_pins);


 VAR_11.NVIC_IRQChannel = VAR_9->IRQn;
 VAR_11.NVIC_IRQChannelPreemptionPriority = 0;
 VAR_11.NVIC_IRQChannelSubPriority = 0;
 VAR_11.NVIC_IRQChannelCmd = VAR_0;
 FUNC_2(&VAR_11);


 FUNC_7(VAR_9->USARTx);
 VAR_10.USART_BaudRate = VAR_9->baud;
    VAR_10.USART_WordLength = VAR_8;
    VAR_10.USART_StopBits = VAR_7;
    VAR_10.USART_Parity = VAR_6;
    VAR_10.USART_HardwareFlowControl = VAR_1;
    VAR_10.USART_Mode = VAR_4 | VAR_5;
 FUNC_9(VAR_9->USARTx, &VAR_10);


 FUNC_8(VAR_9->USARTx, VAR_3, VAR_0);
    FUNC_8(VAR_9->USARTx, VAR_2, VAR_0);


 FUNC_6(VAR_9->USARTx, VAR_0);
 VAR_9->configured = 1;
 VAR_9->frame_available = 0;
}
