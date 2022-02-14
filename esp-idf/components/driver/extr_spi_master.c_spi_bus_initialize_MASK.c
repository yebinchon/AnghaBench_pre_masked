
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int spi_host_t ;
typedef int spi_host_device_t ;
struct TYPE_11__ {int intr_flags; int flags; int max_transfer_sz; } ;
typedef TYPE_1__ spi_bus_config_t ;
typedef int lldesc_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_13__ {int dma_enabled; int dmadesc_n; TYPE_2__* dmadesc_tx; TYPE_2__* dmadesc_rx; } ;
struct TYPE_12__ {int dma_chan; int max_transfer_sz; int id; int polling; int isr_free; int bus_locked; TYPE_4__ hal; scalar_t__ pm_lock; int acquire_cs; void* prev_cs; void* cur_cs; int intr; int flags; int bus_cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 void* VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_0 (int,char*,int ) ;
 int VAR_15 ;
 int VAR_16 ;
 int FUNC_1 (int *,void*) ;
 scalar_t__ FUNC_2 (int ,int,int ,void*,int *) ;
 scalar_t__ FUNC_3 (int ,int ,char*,scalar_t__*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (TYPE_2__*) ;
 void* FUNC_6 (int,int ) ;
 int FUNC_7 (int ) ;
 TYPE_2__* FUNC_8 (int) ;
 int FUNC_9 (int *,TYPE_1__ const*,int) ;
 int FUNC_10 (TYPE_2__*,int ,int) ;
 int FUNC_11 (TYPE_4__*) ;
 int FUNC_12 (TYPE_4__*,int) ;
 int VAR_17 ;
 scalar_t__ FUNC_13 (int,TYPE_1__ const*,int,int,int *) ;
 int FUNC_14 (int) ;
 int FUNC_15 (int) ;
 int FUNC_16 (int) ;
 int FUNC_17 (int,char*) ;
 int FUNC_18 (int) ;
 TYPE_2__** VAR_18 ;

esp_err_t FUNC_19(spi_host_device_t VAR_19, const spi_bus_config_t *VAR_20, int VAR_21)
{
    bool VAR_22, VAR_23;
    esp_err_t VAR_24 = VAR_8;
    esp_err_t VAR_25;

    FUNC_0(VAR_19!=VAR_15, "SPI1 is not supported", VAR_2);

    FUNC_0(VAR_19>=VAR_15 && VAR_19<=VAR_16, "invalid host", VAR_0);





    FUNC_0((VAR_20->intr_flags & (VAR_5|VAR_4|VAR_6))==0, "intr flag not allowed", VAR_0);

    FUNC_0((VAR_20->intr_flags & VAR_7)==0, "ESP_INTR_FLAG_IRAM should be disabled when CONFIG_SPI_MASTER_ISR_IN_IRAM is not set.", VAR_0);


    VAR_22=FUNC_17(VAR_19, "spi master");
    FUNC_0(VAR_22, "host already in use", VAR_1);

    if ( VAR_21 != 0 ) {
        VAR_23=FUNC_14(VAR_21);
        if ( !VAR_23 ) {
            FUNC_18( VAR_19 );
            FUNC_0(0, "dma channel already in use", VAR_1);
        }
    }

    VAR_18[VAR_19]=FUNC_8(sizeof(spi_host_t));
    if (VAR_18[VAR_19]==((void*)0)) {
        VAR_24 = VAR_3;
        goto cleanup;
    }
    FUNC_10(VAR_18[VAR_19], 0, sizeof(spi_host_t));
    FUNC_9( &VAR_18[VAR_19]->bus_cfg, VAR_20, sizeof(spi_bus_config_t));
    VAR_25 = FUNC_13(VAR_19, VAR_20, VAR_21, VAR_14|VAR_20->flags, &VAR_18[VAR_19]->flags);
    if (VAR_25 != VAR_8) {
        VAR_24 = VAR_25;
        goto cleanup;
    }
    int VAR_26=0;
    VAR_18[VAR_19]->dma_chan=VAR_21;
    if (VAR_21 == 0) {
        VAR_18[VAR_19]->max_transfer_sz = VAR_13;
    } else {

        VAR_26=FUNC_7(VAR_20->max_transfer_sz);
        if (VAR_26==0) VAR_26 = 1;
        VAR_18[VAR_19]->max_transfer_sz = VAR_26*VAR_10;
    }

    int VAR_27 = VAR_20->intr_flags | VAR_6;
    VAR_25 = FUNC_2(FUNC_16(VAR_19), VAR_27, VAR_17, (void*)VAR_18[VAR_19], &VAR_18[VAR_19]->intr);
    if (VAR_25 != VAR_8) {
        VAR_24 = VAR_25;
        goto cleanup;
    }
    VAR_18[VAR_19]->id = VAR_19;

    VAR_18[VAR_19]->cur_cs = VAR_12;
    VAR_18[VAR_19]->prev_cs = VAR_12;
    FUNC_1(&VAR_18[VAR_19]->acquire_cs, VAR_12);
    VAR_18[VAR_19]->polling = 0;
    VAR_18[VAR_19]->isr_free = 1;
    VAR_18[VAR_19]->bus_locked = 0;

    FUNC_12(&VAR_18[VAR_19]->hal, VAR_19);
    VAR_18[VAR_19]->hal.dma_enabled = (VAR_21!=0);
    if (VAR_26) {
        VAR_18[VAR_19]->hal.dmadesc_tx=FUNC_6(sizeof(lldesc_t) * VAR_26, VAR_11);
        VAR_18[VAR_19]->hal.dmadesc_rx=FUNC_6(sizeof(lldesc_t) * VAR_26, VAR_11);
        if (!VAR_18[VAR_19]->hal.dmadesc_tx || !VAR_18[VAR_19]->hal.dmadesc_rx) {
            VAR_24 = VAR_3;
            goto cleanup;
        }
    }
    VAR_18[VAR_19]->hal.dmadesc_n = VAR_26;
    return VAR_8;

cleanup:
    if (VAR_18[VAR_19]) {
        FUNC_11(&VAR_18[VAR_19]->hal);





        FUNC_5(VAR_18[VAR_19]->hal.dmadesc_rx);
        FUNC_5(VAR_18[VAR_19]->hal.dmadesc_tx);
    }
    FUNC_5(VAR_18[VAR_19]);
    VAR_18[VAR_19] = ((void*)0);
    FUNC_18(VAR_19);
    if (VAR_21 != 0) FUNC_15(VAR_21);
    return VAR_24;
}
