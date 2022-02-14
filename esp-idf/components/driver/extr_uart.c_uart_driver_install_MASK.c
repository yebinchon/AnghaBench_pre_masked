
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t uart_port_t ;
struct TYPE_6__ {size_t uart_num; int coll_det_flg; int queue_size; int rx_buffer_full_flg; int tx_waiting_fifo; int tx_buf_size; int intr_handle; int * uart_select_notif_callback; int * tx_ring_buf; void* rx_ring_buf; int * rx_head_ptr; scalar_t__ rx_cur_remain; int * rx_ptr; int * xQueueUart; scalar_t__ rx_buffered_len; scalar_t__ tx_waiting_brk; scalar_t__ tx_brk_len; scalar_t__ tx_brk_flg; scalar_t__ tx_len_tot; int * tx_head; int * tx_ptr; void* rx_mux; void* tx_mux; void* tx_brk_sem; void* tx_done_sem; void* tx_fifo_sem; int uart_mode; } ;
typedef TYPE_1__ uart_obj_t ;
struct TYPE_7__ {int intr_enable_mask; int txfifo_empty_intr_thresh; int rx_timeout_thresh; int rxfifo_full_thresh; } ;
typedef TYPE_2__ uart_intr_config_t ;
typedef int uart_event_t ;
typedef scalar_t__ esp_err_t ;
typedef int * QueueHandle_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int,char*,scalar_t__) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 scalar_t__ FUNC_4 (int,int) ;
 TYPE_1__** VAR_19 ;
 int FUNC_5 (size_t) ;
 scalar_t__ FUNC_6 (size_t,TYPE_2__*) ;
 scalar_t__ FUNC_7 (size_t,int ,TYPE_1__*,int,int *) ;
 int FUNC_8 (size_t,int ) ;
 int VAR_20 ;
 int FUNC_9 (int *) ;
 int * FUNC_10 (int,int) ;
 void* FUNC_11 (int,int ) ;
 void* FUNC_12 () ;
 void* FUNC_13 () ;
 int FUNC_14 (void*) ;

esp_err_t FUNC_15(uart_port_t VAR_21, int VAR_22, int VAR_23, int VAR_24, QueueHandle_t *VAR_25, int VAR_26)
{
    esp_err_t VAR_27;
    FUNC_3((VAR_21 < VAR_11), "uart_num error", VAR_0);
    FUNC_3((VAR_22 > VAR_7), "uart rx buffer length error(>128)", VAR_0);
    FUNC_3((VAR_23 > VAR_7) || (VAR_23 == 0), "uart tx buffer length error(>128 or 0)", VAR_0);






    if ((VAR_26 & VAR_1) != 0) {
        FUNC_2(VAR_17, "ESP_INTR_FLAG_IRAM flag is set while CONFIG_UART_ISR_IN_IRAM is not enabled, flag updated");
        VAR_26 &= ~VAR_1;
    }


    if (VAR_19[VAR_21] == ((void*)0)) {
        VAR_19[VAR_21] = (uart_obj_t *) FUNC_4(1, sizeof(uart_obj_t));
        if (VAR_19[VAR_21] == ((void*)0)) {
            FUNC_0(VAR_17, "UART driver malloc error");
            return VAR_0;
        }
        VAR_19[VAR_21]->uart_num = VAR_21;
        VAR_19[VAR_21]->uart_mode = VAR_10;
        VAR_19[VAR_21]->coll_det_flg = 0;
        VAR_19[VAR_21]->tx_fifo_sem = FUNC_12();
        FUNC_14(VAR_19[VAR_21]->tx_fifo_sem);
        VAR_19[VAR_21]->tx_done_sem = FUNC_12();
        VAR_19[VAR_21]->tx_brk_sem = FUNC_12();
        VAR_19[VAR_21]->tx_mux = FUNC_13();
        VAR_19[VAR_21]->rx_mux = FUNC_13();
        VAR_19[VAR_21]->queue_size = VAR_24;
        VAR_19[VAR_21]->tx_ptr = ((void*)0);
        VAR_19[VAR_21]->tx_head = ((void*)0);
        VAR_19[VAR_21]->tx_len_tot = 0;
        VAR_19[VAR_21]->tx_brk_flg = 0;
        VAR_19[VAR_21]->tx_brk_len = 0;
        VAR_19[VAR_21]->tx_waiting_brk = 0;
        VAR_19[VAR_21]->rx_buffered_len = 0;
        FUNC_8(VAR_21, VAR_13);

        if (VAR_25) {
            VAR_19[VAR_21]->xQueueUart = FUNC_10(VAR_24, sizeof(uart_event_t));
            *VAR_25 = VAR_19[VAR_21]->xQueueUart;
            FUNC_1(VAR_17, "queue free spaces: %d", FUNC_9(VAR_19[VAR_21]->xQueueUart));
        } else {
            VAR_19[VAR_21]->xQueueUart = ((void*)0);
        }
        VAR_19[VAR_21]->rx_buffer_full_flg = 0;
        VAR_19[VAR_21]->tx_waiting_fifo = 0;
        VAR_19[VAR_21]->rx_ptr = ((void*)0);
        VAR_19[VAR_21]->rx_cur_remain = 0;
        VAR_19[VAR_21]->rx_head_ptr = ((void*)0);
        VAR_19[VAR_21]->rx_ring_buf = FUNC_11(VAR_22, VAR_3);
        if (VAR_23 > 0) {
            VAR_19[VAR_21]->tx_ring_buf = FUNC_11(VAR_23, VAR_4);
            VAR_19[VAR_21]->tx_buf_size = VAR_23;
        } else {
            VAR_19[VAR_21]->tx_ring_buf = ((void*)0);
            VAR_19[VAR_21]->tx_buf_size = 0;
        }
        VAR_19[VAR_21]->uart_select_notif_callback = ((void*)0);
    } else {
        FUNC_0(VAR_17, "UART driver already installed");
        return VAR_0;
    }

    VAR_27 = FUNC_7(VAR_21, VAR_20, VAR_19[VAR_21], VAR_26, &VAR_19[VAR_21]->intr_handle);
    if (VAR_27 != VAR_2) {
        goto err;
    }
    uart_intr_config_t VAR_28 = {
        .intr_enable_mask = VAR_14
        | VAR_16
        | VAR_8
        | VAR_15
        | VAR_5
        | VAR_12,
        .rxfifo_full_thresh = VAR_9,
        .rx_timeout_thresh = VAR_18,
        .txfifo_empty_intr_thresh = VAR_6
    };
    VAR_27 = FUNC_6(VAR_21, &VAR_28);
    if (VAR_27 != VAR_2) {
        goto err;
    }
    return VAR_27;

err:
    FUNC_5(VAR_21);
    return VAR_27;
}
