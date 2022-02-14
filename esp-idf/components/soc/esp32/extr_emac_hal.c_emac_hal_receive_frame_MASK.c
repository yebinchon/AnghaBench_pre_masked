
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {scalar_t__ Own; int FrameLength; scalar_t__ LastDescriptor; scalar_t__ FirstDescriptor; } ;
struct TYPE_8__ {scalar_t__ Buffer2NextDescAddr; TYPE_1__ RDES0; scalar_t__ Buffer1Addr; } ;
typedef TYPE_3__ eth_dma_rx_descriptor_t ;
struct TYPE_9__ {TYPE_2__* dma_regs; TYPE_3__* rx_desc; } ;
typedef TYPE_4__ emac_hal_context_t ;
struct TYPE_7__ {scalar_t__ dmarxpolldemand; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,void*,int) ;

uint32_t FUNC_1(emac_hal_context_t *VAR_4, uint8_t *VAR_5, uint32_t VAR_6, uint32_t *VAR_7)
{
    eth_dma_rx_descriptor_t *VAR_8 = ((void*)0);
    eth_dma_rx_descriptor_t *VAR_9 = ((void*)0);
    uint32_t VAR_10 = 0;
    uint32_t VAR_11 = 0;
    uint32_t VAR_12 = 0;
    uint32_t VAR_13 = 0;

    VAR_9 = VAR_4->rx_desc;
    VAR_8 = VAR_4->rx_desc;

    while ((VAR_8->RDES0.Own != VAR_2) && (VAR_10 < VAR_1) && !VAR_13) {
        VAR_10++;
        VAR_11++;

        if (VAR_8->RDES0.LastDescriptor) {

            VAR_12 = VAR_8->RDES0.FrameLength - VAR_3;

            if (VAR_12 > VAR_6) {


                return VAR_12;
            }

            VAR_13++;
        }

        if (VAR_8->RDES0.FirstDescriptor) {
            VAR_9 = VAR_8;
        }

        VAR_8 = (eth_dma_rx_descriptor_t *)(VAR_8->Buffer2NextDescAddr);
    }

    if (VAR_13) {

        while ((VAR_8->RDES0.Own != VAR_2) && (VAR_10 < VAR_1)) {
            VAR_10++;
            if (VAR_8->RDES0.LastDescriptor) {
                VAR_13++;
            }

            VAR_8 = (eth_dma_rx_descriptor_t *)(VAR_8->Buffer2NextDescAddr);
        }
        VAR_8 = VAR_9;
        for (VAR_10 = 0; VAR_10 < VAR_11 - 1; VAR_10++) {

            FUNC_0(VAR_5 + VAR_10 * VAR_0,
                   (void *)(VAR_8->Buffer1Addr), VAR_0);

            VAR_8->RDES0.Own = VAR_2;
            VAR_8 = (eth_dma_rx_descriptor_t *)(VAR_8->Buffer2NextDescAddr);
        }
        FUNC_0(VAR_5 + VAR_10 * VAR_0,
               (void *)(VAR_8->Buffer1Addr), VAR_12 % VAR_0);
        VAR_8->RDES0.Own = VAR_2;

        VAR_4->rx_desc = (eth_dma_rx_descriptor_t *)(VAR_8->Buffer2NextDescAddr);

        VAR_4->dma_regs->dmarxpolldemand = 0;
        VAR_13--;
    }
    *VAR_7 = VAR_13;
    return VAR_12;
}
