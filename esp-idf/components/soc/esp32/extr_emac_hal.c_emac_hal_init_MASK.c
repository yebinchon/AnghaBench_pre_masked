
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_3__ {int ** tx_buf; int ** rx_buf; void* descriptors; int * ext_regs; int * mac_regs; int * dma_regs; } ;
typedef TYPE_1__ emac_hal_context_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(emac_hal_context_t *VAR_3, void *VAR_4,
                   uint8_t **VAR_5, uint8_t **VAR_6)
{
    VAR_3->dma_regs = &VAR_0;
    VAR_3->mac_regs = &VAR_2;
    VAR_3->ext_regs = &VAR_1;
    VAR_3->descriptors = VAR_4;
    VAR_3->rx_buf = VAR_5;
    VAR_3->tx_buf = VAR_6;
}
