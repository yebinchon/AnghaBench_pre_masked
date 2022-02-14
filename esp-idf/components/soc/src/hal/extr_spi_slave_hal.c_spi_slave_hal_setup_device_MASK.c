
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int use_dma; int mode; int hw; int tx_lsbfirst; int rx_lsbfirst; } ;
typedef TYPE_1__ spi_slave_hal_context_t ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;

void FUNC_3(const spi_slave_hal_context_t *VAR_0)
{
    FUNC_0(VAR_0->hw, VAR_0->rx_lsbfirst);
    FUNC_1(VAR_0->hw, VAR_0->tx_lsbfirst);
    FUNC_2(VAR_0->hw, VAR_0->mode, VAR_0->use_dma);
}
