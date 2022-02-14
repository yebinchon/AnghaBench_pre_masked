
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint16_t ;
struct TYPE_7__ {int SR; int DR; } ;
struct TYPE_6__ {int configured; int TX_active; TYPE_2__* USARTx; int rx_fifo; int frame_available; int DMA_stream; } ;
typedef TYPE_1__ CONFIG_USART_ConfigState ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_0 ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;
 int FUNC_7 (TYPE_2__*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_8 (TYPE_2__*,int ,int ) ;
 int VAR_5 ;
 int FUNC_9 (TYPE_2__*) ;
 int FUNC_10 (int) ;

void FUNC_11(CONFIG_USART_ConfigState *VAR_6) {
 uint8_t VAR_7;
 uint16_t VAR_8 = VAR_6->USARTx->SR;

 FUNC_10(VAR_6->configured == 1);
    FUNC_1(3);
 if(VAR_8 & VAR_3) {
        FUNC_2(4);


  VAR_7 = VAR_6->USARTx->DR;

  FUNC_6(VAR_6->rx_fifo, VAR_7);
 }
 if( (VAR_6->TX_active) && (VAR_8 & VAR_4) ) {
        FUNC_2(5);

  FUNC_8(VAR_6->USARTx, VAR_5, VAR_0);


  FUNC_3(VAR_6->DMA_stream, VAR_0);
  FUNC_4(VAR_6->DMA_stream);
  FUNC_7(VAR_6->USARTx, VAR_1, VAR_0);
  VAR_6->TX_active = 0;
 }
    if(VAR_8 & VAR_2) {
        FUNC_2(6);

        VAR_6->frame_available = FUNC_5(VAR_6->rx_fifo);

        VAR_7 = FUNC_9(VAR_6->USARTx);
 }
 FUNC_0(3);
}
