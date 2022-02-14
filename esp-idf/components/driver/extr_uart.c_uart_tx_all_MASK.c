
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {size_t size; int brk_len; } ;
struct TYPE_5__ {int type; TYPE_1__ tx_data; } ;
typedef TYPE_2__ uart_tx_data_t ;
typedef size_t uart_port_t ;
typedef int portTickType ;
struct TYPE_6__ {int coll_det_flg; scalar_t__ tx_buf_size; int tx_waiting_fifo; int tx_mux; int tx_fifo_sem; int tx_brk_sem; int tx_ring_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_3__** VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (size_t,int,int ) ;
 size_t FUNC_1 (size_t,char*,size_t) ;
 int FUNC_2 (size_t,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,void*,int,scalar_t__) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ,int ) ;

__attribute__((used)) static int FUNC_7(uart_port_t VAR_6, const char *VAR_7, size_t VAR_8, bool VAR_9, int VAR_10)
{
    if (VAR_8 == 0) {
        return 0;
    }
    size_t VAR_11 = VAR_8;


    FUNC_6(VAR_3[VAR_6]->tx_mux, (portTickType)VAR_5);
    VAR_3[VAR_6]->coll_det_flg = 0;
    if (VAR_3[VAR_6]->tx_buf_size > 0) {
        int VAR_12 = FUNC_3(VAR_3[VAR_6]->tx_ring_buf);
        int VAR_13 = 0;
        uart_tx_data_t VAR_14;
        VAR_14.tx_data.size = VAR_8;
        VAR_14.tx_data.brk_len = VAR_10;
        if (VAR_9) {
            VAR_14.type = VAR_1;
        } else {
            VAR_14.type = VAR_0;
        }
        FUNC_4(VAR_3[VAR_6]->tx_ring_buf, (void *) &VAR_14, sizeof(uart_tx_data_t), VAR_5);
        while (VAR_8 > 0) {
            int VAR_15 = VAR_8 > VAR_12 / 2 ? VAR_12 / 2 : VAR_8;
            FUNC_4(VAR_3[VAR_6]->tx_ring_buf, (void *) (VAR_7 + VAR_13), VAR_15, VAR_5);
            VAR_8 -= VAR_15;
            VAR_13 += VAR_15;
            FUNC_0(VAR_6, 1, VAR_2);
        }
    } else {
        while (VAR_8) {

            if (VAR_4 == FUNC_6(VAR_3[VAR_6]->tx_fifo_sem, (portTickType)VAR_5)) {
                size_t VAR_16 = FUNC_1(VAR_6, (char *) VAR_7, VAR_8);
                if (VAR_16 < VAR_8) {
                    VAR_3[VAR_6]->tx_waiting_fifo = 1;
                    FUNC_0(VAR_6, 1, VAR_2);
                }
                VAR_8 -= VAR_16;
                VAR_7 += VAR_16;
            }
        }
        if (VAR_9) {
            FUNC_2(VAR_6, VAR_10);
            FUNC_6(VAR_3[VAR_6]->tx_brk_sem, (portTickType)VAR_5);
        }
        FUNC_5(VAR_3[VAR_6]->tx_fifo_sem);
    }
    FUNC_5(VAR_3[VAR_6]->tx_mux);
    return VAR_11;
}
