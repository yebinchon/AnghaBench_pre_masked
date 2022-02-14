
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rx_bitlen; scalar_t__ rcv_buffer; int hw; int dma_enabled; } ;
typedef TYPE_1__ spi_hal_context_t ;


 int FUNC_0 (int ,scalar_t__,int ) ;

void FUNC_1(const spi_hal_context_t *VAR_0)
{
    if (VAR_0->rcv_buffer && !VAR_0->dma_enabled) {

        FUNC_0(VAR_0->hw, VAR_0->rcv_buffer, VAR_0->rx_bitlen);
    }
}
