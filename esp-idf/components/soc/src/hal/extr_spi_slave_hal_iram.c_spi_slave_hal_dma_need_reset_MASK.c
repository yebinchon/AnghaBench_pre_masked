
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {TYPE_1__* dmadesc_rx; scalar_t__ rx_buffer; scalar_t__ use_dma; } ;
typedef TYPE_2__ spi_slave_hal_context_t ;
struct TYPE_4__ {scalar_t__ eof; scalar_t__ owner; } ;



bool FUNC_0(const spi_slave_hal_context_t *VAR_0)
{
    bool VAR_1;
    VAR_1 = 0;
    if (VAR_0->use_dma && VAR_0->rx_buffer) {
        int VAR_2;



        for (VAR_2 = 0; VAR_0->dmadesc_rx[VAR_2].eof == 0 && VAR_0->dmadesc_rx[VAR_2].owner == 0; VAR_2++) {}
        if (VAR_0->dmadesc_rx[VAR_2].owner) {
            VAR_1 = 1;
        }
    }
    return VAR_1;
}
