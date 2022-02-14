
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int configured; int TX_active; int USARTx; int rx_fifo; } ;
typedef TYPE_1__ CONFIG_USART_ConfigState ;


 int VAR_0 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int) ;

void FUNC_5(CONFIG_USART_ConfigState *VAR_4) {
 uint8_t VAR_5;

 FUNC_4(VAR_4->configured == 1);

 if(FUNC_1(VAR_4->USARTx, VAR_2) != VAR_1) {

  VAR_5 = FUNC_3(VAR_4->USARTx);
  FUNC_0(VAR_4->rx_fifo, VAR_5);
 }
 if(FUNC_1(VAR_4->USARTx, VAR_3) != VAR_1) {

  FUNC_2(VAR_4->USARTx, VAR_3, VAR_0);

  VAR_4->TX_active = 0;
 }
}
