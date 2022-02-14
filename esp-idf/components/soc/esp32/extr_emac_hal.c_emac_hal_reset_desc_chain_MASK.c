
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_17__ TYPE_8__ ;
typedef struct TYPE_16__ TYPE_7__ ;
typedef struct TYPE_15__ TYPE_6__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef void* uint32_t ;
struct TYPE_13__ {int SecondAddressChained; int InterruptOnComplete; int TransmitTimestampEnable; } ;
struct TYPE_12__ {void* TransmitBuffer1Size; } ;
struct TYPE_15__ {void* Buffer2NextDescAddr; void* Buffer1Addr; TYPE_4__ TDES0; TYPE_3__ TDES1; } ;
typedef TYPE_6__ eth_dma_tx_descriptor_t ;
struct TYPE_11__ {int SecondAddressChained; scalar_t__ DisableInterruptOnComplete; void* ReceiveBuffer1Size; } ;
struct TYPE_10__ {int Own; } ;
struct TYPE_16__ {void* Buffer2NextDescAddr; void* Buffer1Addr; TYPE_2__ RDES1; TYPE_1__ RDES0; } ;
typedef TYPE_7__ eth_dma_rx_descriptor_t ;
struct TYPE_17__ {TYPE_6__* tx_desc; TYPE_5__* dma_regs; TYPE_7__* rx_desc; scalar_t__* tx_buf; scalar_t__* rx_buf; scalar_t__ descriptors; } ;
typedef TYPE_8__ emac_hal_context_t ;
struct TYPE_14__ {void* dmatxbaseaddr; void* dmarxbaseaddr; } ;


 void* VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_0(emac_hal_context_t *VAR_3)
{

    VAR_3->rx_desc = (eth_dma_rx_descriptor_t *)(VAR_3->descriptors);
    VAR_3->tx_desc = (eth_dma_tx_descriptor_t *)(VAR_3->descriptors +
                   sizeof(eth_dma_rx_descriptor_t) * VAR_1);

    for (int VAR_4 = 0; VAR_4 < VAR_1; VAR_4++) {

        VAR_3->rx_desc[VAR_4].RDES0.Own = 1;

        VAR_3->rx_desc[VAR_4].RDES1.SecondAddressChained = 1;
        VAR_3->rx_desc[VAR_4].RDES1.ReceiveBuffer1Size = VAR_0;

        VAR_3->rx_desc[VAR_4].RDES1.DisableInterruptOnComplete = 0;

        VAR_3->rx_desc[VAR_4].Buffer1Addr = (uint32_t)(VAR_3->rx_buf[VAR_4]);

        VAR_3->rx_desc[VAR_4].Buffer2NextDescAddr = (uint32_t)(VAR_3->rx_desc + VAR_4 + 1);
    }

    VAR_3->rx_desc[VAR_1 - 1].Buffer2NextDescAddr = (uint32_t)(VAR_3->rx_desc);


    for (int VAR_5 = 0; VAR_5 < VAR_2; VAR_5++) {

        VAR_3->tx_desc[VAR_5].TDES0.SecondAddressChained = 1;
        VAR_3->tx_desc[VAR_5].TDES1.TransmitBuffer1Size = VAR_0;

        VAR_3->tx_desc[1].TDES0.InterruptOnComplete = 1;

        VAR_3->tx_desc[VAR_5].TDES0.TransmitTimestampEnable = 1;

        VAR_3->tx_desc[VAR_5].Buffer1Addr = (uint32_t)(VAR_3->tx_buf[VAR_5]);

        VAR_3->tx_desc[VAR_5].Buffer2NextDescAddr = (uint32_t)(VAR_3->tx_desc + VAR_5 + 1);
    }

    VAR_3->tx_desc[VAR_2 - 1].Buffer2NextDescAddr = (uint32_t)(VAR_3->tx_desc);


    VAR_3->dma_regs->dmarxbaseaddr = (uint32_t)VAR_3->rx_desc;
    VAR_3->dma_regs->dmatxbaseaddr = (uint32_t)VAR_3->tx_desc;
}
