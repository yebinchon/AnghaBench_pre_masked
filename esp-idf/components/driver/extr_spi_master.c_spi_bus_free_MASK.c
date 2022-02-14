
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t spi_host_device_t ;
typedef int esp_err_t ;
struct TYPE_5__ {TYPE_1__* dmadesc_tx; TYPE_1__* dmadesc_rx; } ;
struct TYPE_4__ {scalar_t__ dma_chan; int intr; TYPE_2__ hal; int pm_lock; int bus_cfg; int * device; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int,char*,int ) ;
 size_t VAR_4 ;
 size_t VAR_5 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (size_t) ;
 TYPE_1__** VAR_6 ;

esp_err_t FUNC_9(spi_host_device_t VAR_7)
{
    int VAR_8;
    FUNC_0(VAR_7>=VAR_4 && VAR_7<=VAR_5, "invalid host", VAR_0);
    FUNC_0(VAR_6[VAR_7]!=((void*)0), "host not in use", VAR_1);
    for (VAR_8=0; VAR_8<VAR_3; VAR_8++) {
        FUNC_0(FUNC_1(&VAR_6[VAR_7]->device[VAR_8])==((void*)0), "not all CSses freed", VAR_1);
    }
    FUNC_6(&VAR_6[VAR_7]->bus_cfg);

    if ( VAR_6[VAR_7]->dma_chan > 0 ) {
        FUNC_7 ( VAR_6[VAR_7]->dma_chan );
    }



    FUNC_5(&VAR_6[VAR_7]->hal);
    FUNC_4(VAR_6[VAR_7]->hal.dmadesc_rx);
    FUNC_4(VAR_6[VAR_7]->hal.dmadesc_tx);

    FUNC_2(VAR_6[VAR_7]->intr);
    FUNC_8(VAR_7);
    FUNC_4(VAR_6[VAR_7]);
    VAR_6[VAR_7]=((void*)0);
    return VAR_2;
}
