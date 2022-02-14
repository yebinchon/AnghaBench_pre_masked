
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_5__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int spi_trans_priv_t ;
typedef size_t spi_host_device_t ;
typedef int spi_hal_timing_conf_t ;
struct TYPE_17__ {int half_duplex; int as_cs; int positive_cs; int no_compensate; } ;
typedef TYPE_1__ spi_hal_context_t ;
struct TYPE_16__ {int duty_cycle_pos; } ;
struct TYPE_18__ {int id; int waiting; scalar_t__ semphr_polling; void* ret_queue; void* trans_queue; TYPE_10__ cfg; TYPE_5__* host; int timing_conf; } ;
typedef TYPE_2__ spi_device_t ;
struct TYPE_19__ {scalar_t__ spics_io_num; int cs_ena_pretrans; scalar_t__ address_bits; scalar_t__ command_bits; int flags; int duty_cycle_pos; int queue_size; int input_delay_ns; int clock_speed_hz; } ;
typedef TYPE_3__ spi_device_interface_config_t ;
typedef TYPE_2__* spi_device_handle_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_20__ {int flags; int * device; TYPE_1__ hal; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,size_t,int,int) ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int,char*,scalar_t__) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 size_t VAR_11 ;
 int VAR_12 ;
 size_t VAR_13 ;
 scalar_t__ FUNC_3 (int *,void**,TYPE_2__*) ;
 int FUNC_4 (int *,TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 TYPE_2__* FUNC_6 (int) ;
 int FUNC_7 (TYPE_10__*,TYPE_3__ const*,int) ;
 int FUNC_8 (TYPE_2__*,int ,int) ;
 scalar_t__ FUNC_9 (TYPE_1__*,int ,int,int,int ,int*,int *) ;
 int FUNC_10 (size_t,scalar_t__,int,int) ;
 TYPE_5__** VAR_14 ;
 int FUNC_11 (void*) ;
 int FUNC_12 (scalar_t__) ;
 void* FUNC_13 (int ,int) ;
 scalar_t__ FUNC_14 () ;

esp_err_t FUNC_15(spi_host_device_t VAR_15, const spi_device_interface_config_t *VAR_16, spi_device_handle_t *VAR_17)
{
    int VAR_18;
    int VAR_19;

    FUNC_2(VAR_15>=VAR_11 && VAR_15<=VAR_13, "invalid host", VAR_0);
    FUNC_2(VAR_14[VAR_15]!=((void*)0), "host not initialized", VAR_1);
    FUNC_2(VAR_16->spics_io_num < 0 || FUNC_1(VAR_16->spics_io_num), "spics pin invalid", VAR_0);
    FUNC_2(VAR_16->clock_speed_hz > 0, "invalid sclk speed", VAR_0);
    for (VAR_18=0; VAR_18<VAR_5; VAR_18++) {

        void* VAR_20=((void*)0);
        if (FUNC_3(&VAR_14[VAR_15]->device[VAR_18], &VAR_20, (spi_device_t *)1)) break;
    }
    FUNC_2(VAR_18!=VAR_5, "no free cs pins for host", VAR_2);







    VAR_19 = (VAR_16->duty_cycle_pos==0) ? 128 : VAR_16->duty_cycle_pos;

    int VAR_21;
    spi_hal_context_t *VAR_22 = &VAR_14[VAR_15]->hal;
    VAR_22->half_duplex = VAR_16->flags & VAR_8 ? 1 : 0;



    VAR_22->positive_cs = VAR_16->flags & VAR_10 ? 1 : 0;
    VAR_22->no_compensate = VAR_16->flags & VAR_9 ? 1 : 0;

    spi_hal_timing_conf_t VAR_23;
    esp_err_t VAR_24 = FUNC_9(VAR_22, VAR_16->clock_speed_hz, VAR_19,
                                        !(VAR_14[VAR_15]->flags & VAR_6),
                                        VAR_16->input_delay_ns, &VAR_21,
                                        &VAR_23);

    FUNC_2(VAR_24==VAR_4, "assigned clock speed not supported", VAR_24);



    spi_device_t *VAR_25=FUNC_6(sizeof(spi_device_t));
    if (VAR_25==((void*)0)) goto nomem;
    FUNC_8(VAR_25, 0, sizeof(spi_device_t));
    FUNC_4(&VAR_14[VAR_15]->device[VAR_18], VAR_25);
    VAR_25->id = VAR_18;
    VAR_25->waiting = 0;
    VAR_25->timing_conf = VAR_23;


    VAR_25->trans_queue = FUNC_13(VAR_16->queue_size, sizeof(spi_trans_priv_t));
    VAR_25->ret_queue = FUNC_13(VAR_16->queue_size, sizeof(spi_trans_priv_t));
    VAR_25->semphr_polling = FUNC_14();
    if (!VAR_25->trans_queue || !VAR_25->ret_queue || !VAR_25->semphr_polling) {
        goto nomem;
    }
    VAR_25->host=VAR_14[VAR_15];


    FUNC_7(&VAR_25->cfg, VAR_16, sizeof(spi_device_interface_config_t));
    VAR_25->cfg.duty_cycle_pos = VAR_19;



    if (VAR_16->spics_io_num >= 0) {
        FUNC_10(VAR_15, VAR_16->spics_io_num, VAR_18, !(VAR_14[VAR_15]->flags&VAR_6));
    }

    *VAR_17=VAR_25;
    FUNC_0(VAR_12, "SPI%d: New device added to CS%d, effective clock: %dkHz", VAR_15+1, VAR_18, VAR_21/1000);
    return VAR_4;

nomem:
    if (VAR_25) {
        if (VAR_25->trans_queue) FUNC_11(VAR_25->trans_queue);
        if (VAR_25->ret_queue) FUNC_11(VAR_25->ret_queue);
        if (VAR_25->semphr_polling) FUNC_12(VAR_25->semphr_polling);
    }
    FUNC_5(VAR_25);
    return VAR_3;
}
