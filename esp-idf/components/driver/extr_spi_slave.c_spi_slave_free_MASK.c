
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t spi_host_device_t ;
typedef int esp_err_t ;
struct TYPE_6__ {TYPE_2__* dmadesc_rx; TYPE_2__* dmadesc_tx; } ;
struct TYPE_7__ {scalar_t__ dma_chan; int pm_lock; int intr; TYPE_1__ hal; scalar_t__ ret_queue; scalar_t__ trans_queue; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,char*,int ) ;
 TYPE_2__* FUNC_1 (size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (size_t) ;
 TYPE_2__** VAR_2 ;
 int FUNC_8 (scalar_t__) ;

esp_err_t FUNC_9(spi_host_device_t VAR_3)
{
    FUNC_0(FUNC_1(VAR_3), "invalid host", VAR_0);
    FUNC_0(VAR_2[VAR_3], "host not slave", VAR_0);
    if (VAR_2[VAR_3]->trans_queue) FUNC_8(VAR_2[VAR_3]->trans_queue);
    if (VAR_2[VAR_3]->ret_queue) FUNC_8(VAR_2[VAR_3]->ret_queue);
    if ( VAR_2[VAR_3]->dma_chan > 0 ) {
        FUNC_6 ( VAR_2[VAR_3]->dma_chan );
    }
    FUNC_5(VAR_2[VAR_3]->hal.dmadesc_tx);
    FUNC_5(VAR_2[VAR_3]->hal.dmadesc_rx);
    FUNC_2(VAR_2[VAR_3]->intr);




    FUNC_5(VAR_2[VAR_3]);
    VAR_2[VAR_3] = ((void*)0);
    FUNC_7(VAR_3);
    return VAR_1;
}
