
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int bitlen; int * rx_buffer; int hw; int * tx_buffer; int * dmadesc_tx; int * dmadesc_rx; scalar_t__ use_dma; } ;
typedef TYPE_1__ spi_slave_hal_context_t ;


 int FUNC_0 (int *,int *,int,int) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (int ,int *) ;
 int FUNC_9 (int ,int *,int) ;

void FUNC_10(const spi_slave_hal_context_t *VAR_0)
{
    FUNC_5(VAR_0->hw);
    if (VAR_0->use_dma) {
        FUNC_3(VAR_0->hw);


        if (VAR_0->rx_buffer) {
            FUNC_0(VAR_0->dmadesc_rx, VAR_0->rx_buffer, ((VAR_0->bitlen + 7) / 8), 1);
            FUNC_4(VAR_0->hw, &VAR_0->dmadesc_rx[0]);
        }
        if (VAR_0->tx_buffer) {
            FUNC_0(VAR_0->dmadesc_tx, VAR_0->tx_buffer, (VAR_0->bitlen + 7) / 8, 0);
            FUNC_8(VAR_0->hw, (&VAR_0->dmadesc_tx[0]));
        }
    } else {

        if (VAR_0->tx_buffer) {
            FUNC_9(VAR_0->hw, VAR_0->tx_buffer, VAR_0->bitlen);
        }
    }

    FUNC_6(VAR_0->hw, VAR_0->bitlen);
    FUNC_7(VAR_0->hw, VAR_0->bitlen);
    FUNC_2(VAR_0->hw, (VAR_0->tx_buffer == ((void*)0)) ? 0 : 1);
    FUNC_1(VAR_0->hw, (VAR_0->rx_buffer == ((void*)0)) ? 0 : 1);
}
