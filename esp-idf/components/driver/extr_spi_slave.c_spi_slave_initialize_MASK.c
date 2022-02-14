
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int spi_slave_transaction_t ;
typedef int spi_slave_t ;
struct TYPE_17__ {int flags; int mode; int queue_size; int spics_io_num; } ;
typedef TYPE_1__ spi_slave_interface_config_t ;
struct TYPE_18__ {int dmadesc_n; int rx_lsbfirst; int tx_lsbfirst; int use_dma; TYPE_4__* dmadesc_rx; TYPE_4__* dmadesc_tx; int mode; } ;
typedef TYPE_2__ spi_slave_hal_context_t ;
typedef int spi_host_device_t ;
struct TYPE_19__ {int intr_flags; int flags; int max_transfer_sz; } ;
typedef TYPE_3__ spi_bus_config_t ;
typedef int lldesc_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_20__ {int id; int dma_chan; int max_transfer_sz; TYPE_2__ hal; scalar_t__ pm_lock; void* ret_queue; void* trans_queue; int intr; int flags; int cfg; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (int,char*,int ) ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_1 (int) ;
 int FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (int ,int,int ,void*,int *) ;
 int FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (int ,int ,char*,scalar_t__*) ;
 int FUNC_6 (scalar_t__) ;
 int FUNC_7 (scalar_t__) ;
 int FUNC_8 (TYPE_4__*) ;
 int FUNC_9 (TYPE_4__*) ;
 void* FUNC_10 (int,int ) ;
 TYPE_4__* FUNC_11 (int) ;
 int FUNC_12 (int *,TYPE_1__ const*,int) ;
 int FUNC_13 (TYPE_4__*,int ,int) ;
 int VAR_15 ;
 int FUNC_14 (TYPE_2__*) ;
 int FUNC_15 (TYPE_2__*,int) ;
 int FUNC_16 (TYPE_2__*) ;
 scalar_t__ FUNC_17 (int,TYPE_3__ const*,int,int,int *) ;
 int FUNC_18 (int,int ,int ,int) ;
 int FUNC_19 (int) ;
 int FUNC_20 (int) ;
 int FUNC_21 (int) ;
 int FUNC_22 (int,char*) ;
 int FUNC_23 (int) ;
 TYPE_4__** VAR_16 ;
 int FUNC_24 (void*) ;
 void* FUNC_25 (int ,int) ;

esp_err_t FUNC_26(spi_host_device_t VAR_17, const spi_bus_config_t *VAR_18, const spi_slave_interface_config_t *VAR_19, int VAR_20)
{
    bool VAR_21, VAR_22;
    esp_err_t VAR_23 = VAR_7;
    esp_err_t VAR_24;

    FUNC_0(FUNC_1(VAR_17), "invalid host", VAR_0);





    FUNC_0((VAR_18->intr_flags & (VAR_4|VAR_3|VAR_5))==0, "intr flag not allowed", VAR_0);

    FUNC_0((VAR_18->intr_flags & VAR_6)==0, "ESP_INTR_FLAG_IRAM should be disabled when CONFIG_SPI_SLAVE_ISR_IN_IRAM is not set.", VAR_0);


    VAR_21=FUNC_22(VAR_17, "spi slave");
    FUNC_0(VAR_21, "host already in use", VAR_1);

    bool VAR_25 = VAR_20 != 0;
    if (VAR_25) {
        VAR_22=FUNC_19(VAR_20);
        if ( !VAR_22 ) {
            FUNC_23( VAR_17 );
            FUNC_0(VAR_22, "dma channel already in use", VAR_1);
        }
    }

    VAR_16[VAR_17] = FUNC_11(sizeof(spi_slave_t));
    if (VAR_16[VAR_17] == ((void*)0)) {
        VAR_23 = VAR_2;
        goto cleanup;
    }
    FUNC_13(VAR_16[VAR_17], 0, sizeof(spi_slave_t));
    FUNC_12(&VAR_16[VAR_17]->cfg, VAR_19, sizeof(spi_slave_interface_config_t));
    VAR_16[VAR_17]->id = VAR_17;

    VAR_24 = FUNC_17(VAR_17, VAR_18, VAR_20, VAR_11|VAR_18->flags, &VAR_16[VAR_17]->flags);
    if (VAR_24!=VAR_7) {
        VAR_23 = VAR_24;
        goto cleanup;
    }
    FUNC_18(VAR_17, VAR_19->spics_io_num, 0, !FUNC_2(VAR_16[VAR_17]));

    if (VAR_25) FUNC_9(VAR_16[VAR_17]);

    int VAR_26 = 0;
    VAR_16[VAR_17]->dma_chan = VAR_20;
    if (VAR_25) {

        VAR_26 = (VAR_18->max_transfer_sz + VAR_12 - 1) / VAR_12;
        if (VAR_26 == 0) VAR_26 = 1;
        VAR_16[VAR_17]->max_transfer_sz = VAR_26 * VAR_12;
    } else {

        VAR_16[VAR_17]->max_transfer_sz = VAR_10;
    }
    VAR_16[VAR_17]->trans_queue = FUNC_25(VAR_19->queue_size, sizeof(spi_slave_transaction_t *));
    VAR_16[VAR_17]->ret_queue = FUNC_25(VAR_19->queue_size, sizeof(spi_slave_transaction_t *));
    if (!VAR_16[VAR_17]->trans_queue || !VAR_16[VAR_17]->ret_queue) {
        VAR_23 = VAR_2;
        goto cleanup;
    }

    int VAR_27 = VAR_18->intr_flags | VAR_5;
    VAR_24 = FUNC_3(FUNC_21(VAR_17), VAR_27, VAR_15, (void *)VAR_16[VAR_17], &VAR_16[VAR_17]->intr);
    if (VAR_24 != VAR_7) {
        VAR_23 = VAR_24;
        goto cleanup;
    }

    spi_slave_hal_context_t *VAR_28 = &VAR_16[VAR_17]->hal;
    FUNC_15(VAR_28, VAR_17);

    if (VAR_26) {
        VAR_28->dmadesc_tx = FUNC_10(sizeof(lldesc_t) * VAR_26, VAR_9);
        VAR_28->dmadesc_rx = FUNC_10(sizeof(lldesc_t) * VAR_26, VAR_9);
        if (!VAR_28->dmadesc_tx || !VAR_28->dmadesc_rx) {
            VAR_23 = VAR_2;
            goto cleanup;
        }
    }
    VAR_28->dmadesc_n = VAR_26;
    VAR_28->rx_lsbfirst = (VAR_19->flags & VAR_13) ? 1 : 0;
    VAR_28->tx_lsbfirst = (VAR_19->flags & VAR_14) ? 1 : 0;
    VAR_28->mode = VAR_19->mode;
    VAR_28->use_dma = VAR_25;

    FUNC_16(VAR_28);

    return VAR_7;

cleanup:
    if (VAR_16[VAR_17]) {
        if (VAR_16[VAR_17]->trans_queue) FUNC_24(VAR_16[VAR_17]->trans_queue);
        if (VAR_16[VAR_17]->ret_queue) FUNC_24(VAR_16[VAR_17]->ret_queue);
        FUNC_8(VAR_16[VAR_17]->hal.dmadesc_tx);
        FUNC_8(VAR_16[VAR_17]->hal.dmadesc_rx);






    }
    FUNC_14(&VAR_16[VAR_17]->hal);
    FUNC_8(VAR_16[VAR_17]);
    VAR_16[VAR_17] = ((void*)0);
    FUNC_23(VAR_17);
    FUNC_20(VAR_20);
    return VAR_23;
}
