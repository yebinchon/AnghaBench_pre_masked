
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uart_port_t ;
typedef int periph_module_t ;
typedef int esp_err_t ;
struct TYPE_3__ {int * tx_ring_buf; int * rx_ring_buf; int * xQueueUart; int * rx_mux; int * tx_mux; int * tx_brk_sem; int * tx_done_sem; int * tx_fifo_sem; int intr_handle; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int VAR_2 ;
 int FUNC_1 (int,char*,int ) ;
 size_t VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (size_t) ;
 TYPE_1__** VAR_5 ;
 int FUNC_5 (int ) ;
 int FUNC_6 (size_t) ;
 int FUNC_7 (size_t) ;
 int FUNC_8 (size_t) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;

esp_err_t FUNC_12(uart_port_t VAR_6)
{
    FUNC_1((VAR_6 < VAR_3), "uart_num error", VAR_1);
    if (VAR_5[VAR_6] == ((void*)0)) {
        FUNC_0(VAR_4, "ALREADY NULL");
        return VAR_2;
    }
    FUNC_2(VAR_5[VAR_6]->intr_handle);
    FUNC_6(VAR_6);
    FUNC_7(VAR_6);
    FUNC_8(VAR_6);

    if (VAR_5[VAR_6]->tx_fifo_sem) {
        FUNC_11(VAR_5[VAR_6]->tx_fifo_sem);
        VAR_5[VAR_6]->tx_fifo_sem = ((void*)0);
    }
    if (VAR_5[VAR_6]->tx_done_sem) {
        FUNC_11(VAR_5[VAR_6]->tx_done_sem);
        VAR_5[VAR_6]->tx_done_sem = ((void*)0);
    }
    if (VAR_5[VAR_6]->tx_brk_sem) {
        FUNC_11(VAR_5[VAR_6]->tx_brk_sem);
        VAR_5[VAR_6]->tx_brk_sem = ((void*)0);
    }
    if (VAR_5[VAR_6]->tx_mux) {
        FUNC_11(VAR_5[VAR_6]->tx_mux);
        VAR_5[VAR_6]->tx_mux = ((void*)0);
    }
    if (VAR_5[VAR_6]->rx_mux) {
        FUNC_11(VAR_5[VAR_6]->rx_mux);
        VAR_5[VAR_6]->rx_mux = ((void*)0);
    }
    if (VAR_5[VAR_6]->xQueueUart) {
        FUNC_9(VAR_5[VAR_6]->xQueueUart);
        VAR_5[VAR_6]->xQueueUart = ((void*)0);
    }
    if (VAR_5[VAR_6]->rx_ring_buf) {
        FUNC_10(VAR_5[VAR_6]->rx_ring_buf);
        VAR_5[VAR_6]->rx_ring_buf = ((void*)0);
    }
    if (VAR_5[VAR_6]->tx_ring_buf) {
        FUNC_10(VAR_5[VAR_6]->tx_ring_buf);
        VAR_5[VAR_6]->tx_ring_buf = ((void*)0);
    }

    FUNC_3(VAR_5[VAR_6]);
    VAR_5[VAR_6] = ((void*)0);

    if (VAR_6 != VAR_0) {
       periph_module_t VAR_7 = FUNC_4(VAR_6);
       FUNC_5(VAR_7);
    }
    return VAR_2;
}
