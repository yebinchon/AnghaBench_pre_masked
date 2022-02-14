
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_17__ {scalar_t__ dup; int master_limit; int test_size; int master_dma_chan; int slave_tv_ns; int mode; int master_iomux; } ;
typedef TYPE_4__ spitest_param_set_t ;
struct TYPE_16__ {int data_received; } ;
struct TYPE_18__ {int master_rxbuf; TYPE_3__ slave_context; TYPE_2__* master_trans; TYPE_1__* slave_trans; } ;
typedef TYPE_5__ spitest_context_t ;
struct TYPE_19__ {int cs_ena_pretrans; int cs_ena_posttrans; int clock_speed_hz; int flags; int input_delay_ns; int mode; int spics_io_num; } ;
typedef TYPE_6__ spi_device_interface_config_t ;
typedef int spi_device_handle_t ;
struct TYPE_20__ {int quadhd_io_num; int sclk_io_num; int mosi_io_num; int miso_io_num; } ;
typedef TYPE_7__ spi_bus_config_t ;
struct TYPE_15__ {int length; int rxlength; int * tx_buffer; } ;
struct TYPE_14__ {scalar_t__ start; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 TYPE_7__ FUNC_0 () ;
 int VAR_6 ;
 int VAR_7 ;
 TYPE_6__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (int*,int *,int) ;
 int FUNC_4 (int ,int,int) ;
 int VAR_10 ;
 int FUNC_5 (int ,TYPE_6__*,int *) ;
 int FUNC_6 (int ,TYPE_7__*,int ) ;
 int FUNC_7 (int ,int *,int,int ) ;

__attribute__((used)) static void FUNC_8(spi_device_handle_t *VAR_11, int VAR_12, const spitest_param_set_t* VAR_13, spitest_context_t* VAR_14)
{

    spi_bus_config_t VAR_15=FUNC_0();
    VAR_15.miso_io_num = VAR_4;
    VAR_15.mosi_io_num = VAR_5;
    VAR_15.sclk_io_num = VAR_2;

    if (!VAR_13->master_iomux) VAR_15.quadhd_io_num = VAR_9;
    spi_device_interface_config_t VAR_16=FUNC_1();
    VAR_16.spics_io_num = VAR_3;
    VAR_16.mode = VAR_13->mode;
    const int VAR_17 = 15;
    if (VAR_13->dup==VAR_0) {
        VAR_16.cs_ena_pretrans = VAR_17;
        VAR_16.flags |= VAR_6;
    } else if (VAR_13->dup == VAR_1) {
        VAR_16.cs_ena_pretrans = VAR_17;
        VAR_16.flags |= VAR_7;
    } else {
        VAR_16.cs_ena_pretrans = VAR_17;
    }
    const int VAR_18 = 15;
    VAR_16.cs_ena_posttrans = VAR_18;
    VAR_16.input_delay_ns = VAR_13->slave_tv_ns;
    VAR_16.clock_speed_hz = VAR_12;
    if (VAR_13->master_limit != 0 && VAR_12 > VAR_13->master_limit) VAR_16.flags |= VAR_7;
    FUNC_2(FUNC_6(VAR_8, &VAR_15, VAR_13->master_dma_chan));
    FUNC_2(FUNC_5(VAR_8, &VAR_16, VAR_11));


    for (int VAR_19 = 0; VAR_19 < VAR_13->test_size; VAR_19 ++) {






        uint8_t VAR_20[320+8];
        int VAR_21;
        if (VAR_13->dup!=VAR_0) {
            VAR_21 = VAR_14->master_trans[VAR_19].length;
        } else {
            VAR_21 = VAR_14->master_trans[VAR_19].rxlength;
        }
        uint32_t* VAR_22 = (uint32_t*)VAR_20;
        VAR_22[0] = VAR_21;
        VAR_22[1] = (uint32_t)VAR_14->slave_trans[VAR_19].start;
        if (VAR_14->master_trans[VAR_19].tx_buffer!=((void*)0)) {
            FUNC_3(VAR_22+2, VAR_14->master_trans[VAR_19].tx_buffer, (VAR_14->master_trans[VAR_19].length+7)/8);
        }

        FUNC_7(VAR_14->slave_context.data_received, VAR_20, 8+(VAR_21+7)/8, VAR_10);
    }
    FUNC_4(VAR_14->master_rxbuf, 0x66, sizeof(VAR_14->master_rxbuf));
}
