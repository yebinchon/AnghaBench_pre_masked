
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int ,char*,int,int *,scalar_t__,int *) ;

void FUNC_2(void)
{
    FUNC_0();
    FUNC_1(VAR_1, "uart_rx_task", 1024*2, ((void*)0), VAR_0, ((void*)0));
    FUNC_1(VAR_2, "uart_tx_task", 1024*2, ((void*)0), VAR_0-1, ((void*)0));
}
