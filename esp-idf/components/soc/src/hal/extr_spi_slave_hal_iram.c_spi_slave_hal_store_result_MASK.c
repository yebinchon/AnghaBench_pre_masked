
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rcv_bitlen; int bitlen; int hw; scalar_t__ rx_buffer; int use_dma; } ;
typedef TYPE_1__ spi_slave_hal_context_t ;


 int VAR_0 ;
 int FUNC_0 (int ,scalar_t__,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

void FUNC_3(spi_slave_hal_context_t *VAR_1)
{



    VAR_1->rcv_bitlen = FUNC_1(VAR_1->hw);
    if (VAR_1->rcv_bitlen == VAR_1->bitlen - 1) {
        VAR_1->rcv_bitlen++;
    }
    if (!VAR_1->use_dma && VAR_1->rx_buffer) {

        FUNC_0(VAR_1->hw, VAR_1->rx_buffer, VAR_1->bitlen);
    }
    FUNC_2(VAR_1->hw, VAR_0);
}
