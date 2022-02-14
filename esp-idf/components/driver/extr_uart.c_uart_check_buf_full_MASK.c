
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t uart_port_t ;
struct TYPE_2__ {int rx_buffer_full_flg; int uart_num; scalar_t__ rx_stash_len; int rx_buffered_len; int rx_data_buf; int rx_ring_buf; } ;
typedef scalar_t__ BaseType_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 TYPE_1__** VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (int ) ;
 int * VAR_2 ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__,int) ;

__attribute__((used)) static bool FUNC_4(uart_port_t VAR_3)
{
    if (VAR_0[VAR_3]->rx_buffer_full_flg) {
        BaseType_t VAR_4 = FUNC_3(VAR_0[VAR_3]->rx_ring_buf, VAR_0[VAR_3]->rx_data_buf, VAR_0[VAR_3]->rx_stash_len, 1);
        if (VAR_4 == VAR_1) {
            FUNC_0(&VAR_2[VAR_3]);
            VAR_0[VAR_3]->rx_buffered_len += VAR_0[VAR_3]->rx_stash_len;
            VAR_0[VAR_3]->rx_buffer_full_flg = 0;
            FUNC_1(&VAR_2[VAR_3]);
            FUNC_2(VAR_0[VAR_3]->uart_num);
            return 1;
        }
    }
    return 0;
}
