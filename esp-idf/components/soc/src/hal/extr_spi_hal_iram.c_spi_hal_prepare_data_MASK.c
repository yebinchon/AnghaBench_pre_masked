
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rx_bitlen; scalar_t__ rcv_buffer; scalar_t__ send_buffer; int half_duplex; int dmadesc_tx; int tx_bitlen; scalar_t__ dma_enabled; int dmadesc_rx; int * hw; } ;
typedef TYPE_1__ spi_hal_context_t ;
typedef int spi_dev_t ;


 int FUNC_0 (int ,scalar_t__,int,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,scalar_t__,int ) ;

void FUNC_7(const spi_hal_context_t *VAR_0)
{
    spi_dev_t *VAR_1 = VAR_0->hw;
    FUNC_3(VAR_1);

    if (VAR_0->rcv_buffer) {
        if (!VAR_0->dma_enabled) {

        } else {
            FUNC_0(VAR_0->dmadesc_rx, VAR_0->rcv_buffer, ((VAR_0->rx_bitlen + 7) / 8), 1);
            FUNC_4(VAR_1, VAR_0->dmadesc_rx);
        }
    } else {

        if (VAR_0->dma_enabled) {
            FUNC_4(VAR_1, 0);
        }
    }

    if (VAR_0->send_buffer) {
        if (!VAR_0->dma_enabled) {

            FUNC_6(VAR_1, VAR_0->send_buffer, VAR_0->tx_bitlen);
        } else {
            FUNC_0(VAR_0->dmadesc_tx, VAR_0->send_buffer, (VAR_0->tx_bitlen + 7) / 8, 0);
            FUNC_5(VAR_1, VAR_0->dmadesc_tx);
        }
    }

    if ((!VAR_0->half_duplex && VAR_0->rcv_buffer) || VAR_0->send_buffer) {
        FUNC_2(VAR_1, 1);
    } else {
        FUNC_2(VAR_1, 0);
    }
    FUNC_1(VAR_1, (VAR_0->rcv_buffer) ? 1 : 0);
}
