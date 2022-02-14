
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_8__ {int FirstSegment; int LastSegment; int InterruptOnComplete; int Own; } ;
struct TYPE_7__ {int TransmitBuffer1Size; } ;
struct TYPE_10__ {scalar_t__ Buffer2NextDescAddr; TYPE_2__ TDES0; scalar_t__ Buffer1Addr; TYPE_1__ TDES1; } ;
typedef TYPE_4__ eth_dma_tx_descriptor_t ;
struct TYPE_11__ {TYPE_3__* dma_regs; TYPE_4__* tx_desc; } ;
typedef TYPE_5__ emac_hal_context_t ;
struct TYPE_9__ {scalar_t__ dmatxpolldemand; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (void*,int *,int) ;

void FUNC_1(emac_hal_context_t *VAR_2, uint8_t *VAR_3, uint32_t VAR_4)
{

    uint32_t VAR_5 = 0;
    uint32_t VAR_6 = VAR_4;
    while (VAR_6 > VAR_0) {
        VAR_6 -= VAR_0;
        VAR_5++;
    }
    if (VAR_6) {
        VAR_5++;
    }

    for (uint32_t VAR_7 = 0; VAR_7 < VAR_5; VAR_7++) {

        VAR_2->tx_desc->TDES0.FirstSegment = 0;
        VAR_2->tx_desc->TDES0.LastSegment = 0;
        if (VAR_7 == 0) {

            VAR_2->tx_desc->TDES0.FirstSegment = 1;
        }
        if (VAR_7 == (VAR_5 - 1)) {

            VAR_2->tx_desc->TDES0.LastSegment = 1;

            VAR_2->tx_desc->TDES0.InterruptOnComplete = 1;

            VAR_2->tx_desc->TDES1.TransmitBuffer1Size = VAR_6;

            FUNC_0((void *)(VAR_2->tx_desc->Buffer1Addr), VAR_3 + VAR_7 * VAR_0, VAR_6);
        } else {

            VAR_2->tx_desc->TDES1.TransmitBuffer1Size = VAR_0;

            FUNC_0((void *)(VAR_2->tx_desc->Buffer1Addr), VAR_3 + VAR_7 * VAR_0, VAR_0);
        }

        VAR_2->tx_desc->TDES0.Own = VAR_1;

        VAR_2->tx_desc = (eth_dma_tx_descriptor_t *)(VAR_2->tx_desc->Buffer2NextDescAddr);
    }
    VAR_2->dma_regs->dmatxpolldemand = 0;
}
