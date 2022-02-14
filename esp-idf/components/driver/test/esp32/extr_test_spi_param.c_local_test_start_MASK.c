
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_6__ ;
typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


struct TYPE_18__ {scalar_t__ dup; int master_limit; int test_size; scalar_t__ slave_iomux; scalar_t__ master_iomux; int slave_dma_chan; int master_dma_chan; int mode; int slave_tv_ns; } ;
typedef TYPE_2__ spitest_param_set_t ;
struct TYPE_17__ {int data_to_send; } ;
struct TYPE_19__ {int master_rxbuf; int * slave_trans; TYPE_1__ slave_context; } ;
typedef TYPE_3__ spitest_context_t ;
struct TYPE_20__ {void* spics_io_num; int mode; } ;
typedef TYPE_4__ spi_slave_interface_config_t ;
struct TYPE_21__ {int spics_io_num; int cs_ena_pretrans; int cs_ena_posttrans; int clock_speed_hz; int flags; int input_delay_ns; int mode; } ;
typedef TYPE_5__ spi_device_interface_config_t ;
typedef int spi_device_handle_t ;
struct TYPE_22__ {int miso_io_num; int mosi_io_num; int sclk_io_num; int quadhd_io_num; } ;
typedef TYPE_6__ spi_bus_config_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 void* VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_6__ FUNC_0 () ;
 int VAR_11 ;
 int VAR_12 ;
 TYPE_5__ FUNC_1 () ;
 TYPE_4__ FUNC_2 () ;
 int FUNC_3 (int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_4 (int) ;
 int FUNC_5 (int ,int,int) ;
 int VAR_20 ;
 int FUNC_6 (TYPE_6__*,void*) ;
 int FUNC_7 (int ,TYPE_5__*,int *) ;
 int FUNC_8 (int ,TYPE_6__*,int ) ;
 int FUNC_9 (int ,TYPE_6__*,TYPE_4__*,int ) ;
 int FUNC_10 (int,int ,int ) ;
 int FUNC_11 (int ,int *,int ) ;

__attribute__((used)) static void FUNC_12(spi_device_handle_t *VAR_21, int VAR_22, const spitest_param_set_t* VAR_23, spitest_context_t* VAR_24)
{

    spi_bus_config_t VAR_25 = FUNC_0();
    spi_device_interface_config_t VAR_26 = FUNC_1();
    spi_slave_interface_config_t VAR_27 = FUNC_2();


    FUNC_4(!VAR_23->master_iomux || !VAR_23->slave_iomux);
    if (VAR_23->slave_iomux) {

        VAR_25.miso_io_num = VAR_18;
        VAR_25.mosi_io_num = VAR_19;
        VAR_25.sclk_io_num = VAR_16;
        VAR_26.spics_io_num = VAR_17;
        VAR_27.spics_io_num = VAR_17;
    } else {
        VAR_25.miso_io_num = VAR_9;
        VAR_25.mosi_io_num = VAR_10;
        VAR_25.sclk_io_num = VAR_7;
        VAR_26.spics_io_num = VAR_8;
        VAR_27.spics_io_num = VAR_8;
    }

    VAR_25.quadhd_io_num = (!VAR_23->master_iomux && !VAR_23->slave_iomux ? VAR_18 : -1);
    VAR_26.mode = VAR_23->mode;
    const int VAR_28 = 15;
    if (VAR_23->dup == VAR_2) {
        VAR_26.cs_ena_pretrans = VAR_28;
        VAR_26.flags |= VAR_11;
    } else if (VAR_23->dup == VAR_3) {
        VAR_26.cs_ena_pretrans = VAR_28;
        VAR_26.flags |= VAR_12;
    } else {
        VAR_26.cs_ena_pretrans = VAR_28;
    }
    const int VAR_29 = 15;
    VAR_26.cs_ena_posttrans = VAR_29;
    VAR_26.input_delay_ns = VAR_23->slave_tv_ns;
    VAR_26.clock_speed_hz = VAR_22;
    if (VAR_23->master_limit != 0 && VAR_22 > VAR_23->master_limit) VAR_26.flags |= VAR_12;


    VAR_27.mode = VAR_23->mode;

    FUNC_6(&VAR_25, VAR_27.spics_io_num);

    FUNC_3(FUNC_8(VAR_14, &VAR_25, VAR_23->master_dma_chan));
    FUNC_3(FUNC_7(VAR_14, &VAR_26, VAR_21));


    VAR_25.quadhd_io_num = -1;
    FUNC_3(FUNC_9(VAR_13, &VAR_25, &VAR_27, VAR_23->slave_dma_chan));


    if (VAR_23->master_iomux) {
        FUNC_10(VAR_25.mosi_io_num, VAR_1, VAR_6);
        FUNC_10(VAR_25.miso_io_num, VAR_0, VAR_15);
        FUNC_10(VAR_26.spics_io_num, VAR_1, VAR_5);
        FUNC_10(VAR_25.sclk_io_num, VAR_1, VAR_4);
    } else if (VAR_23->slave_iomux) {
        FUNC_10(VAR_25.mosi_io_num, VAR_0, VAR_6);
        FUNC_10(VAR_25.miso_io_num, VAR_1, VAR_15);
        FUNC_10(VAR_26.spics_io_num, VAR_0, VAR_5);
        FUNC_10(VAR_25.sclk_io_num, VAR_0, VAR_4);
    } else {
        FUNC_10(VAR_25.mosi_io_num, VAR_0, VAR_6);
        FUNC_10(VAR_25.miso_io_num, VAR_0, VAR_15);
        FUNC_10(VAR_26.spics_io_num, VAR_0, VAR_5);
        FUNC_10(VAR_25.sclk_io_num, VAR_0, VAR_4);
    }


    for (int VAR_30 = 0; VAR_30 < VAR_23->test_size; VAR_30++)
        FUNC_11(VAR_24->slave_context.data_to_send, &VAR_24->slave_trans[VAR_30], VAR_20);


    FUNC_5(VAR_24->master_rxbuf, 0x66, sizeof(VAR_24->master_rxbuf));

}
