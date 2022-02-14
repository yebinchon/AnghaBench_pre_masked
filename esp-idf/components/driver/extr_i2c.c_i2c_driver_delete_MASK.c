
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_5__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t i2c_port_t ;
struct TYPE_7__ {struct TYPE_7__* evt_queue_storage; int * pm_lock; scalar_t__ tx_buf_length; int * tx_ring_buf; scalar_t__ rx_buf_length; int * rx_ring_buf; scalar_t__ slv_tx_mux; scalar_t__ slv_rx_mux; int * cmd_evt_queue; scalar_t__ cmd_mux; int * intr_handle; } ;
typedef TYPE_2__ i2c_obj_t ;
typedef int esp_err_t ;
struct TYPE_6__ {scalar_t__ val; } ;
struct TYPE_8__ {TYPE_1__ int_ena; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_5__** VAR_3 ;
 int FUNC_0 (int,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 size_t VAR_6 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (size_t) ;
 TYPE_2__** VAR_7 ;
 int VAR_8 ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (scalar_t__,int ) ;

esp_err_t FUNC_9(i2c_port_t VAR_9)
{
    FUNC_0(VAR_9 < VAR_6, VAR_5, VAR_0);
    FUNC_0(VAR_7[VAR_9] != ((void*)0), VAR_4, VAR_1);

    i2c_obj_t* VAR_10 = VAR_7[VAR_9];

    VAR_3[VAR_9]->int_ena.val = 0;
    FUNC_1(VAR_10->intr_handle);
    VAR_10->intr_handle = ((void*)0);

    if (VAR_10->cmd_mux) {
        FUNC_8(VAR_10->cmd_mux, VAR_8);
        FUNC_7(VAR_10->cmd_mux);
    }
    if (VAR_7[VAR_9]->cmd_evt_queue) {
        FUNC_5(VAR_7[VAR_9]->cmd_evt_queue);
        VAR_7[VAR_9]->cmd_evt_queue = ((void*)0);
    }
    if (VAR_10->slv_rx_mux) {
        FUNC_7(VAR_10->slv_rx_mux);
    }
    if (VAR_10->slv_tx_mux) {
        FUNC_7(VAR_10->slv_tx_mux);
    }

    if (VAR_10->rx_ring_buf) {
        FUNC_6(VAR_10->rx_ring_buf);
        VAR_10->rx_ring_buf = ((void*)0);
        VAR_10->rx_buf_length = 0;
    }
    if (VAR_10->tx_ring_buf) {
        FUNC_6(VAR_10->tx_ring_buf);
        VAR_10->tx_ring_buf = ((void*)0);
        VAR_10->tx_buf_length = 0;
    }
    FUNC_3(VAR_7[VAR_9]);
    VAR_7[VAR_9] = ((void*)0);

    FUNC_4(VAR_9);
    return VAR_2;
}
