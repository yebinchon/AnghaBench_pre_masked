
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;


struct TYPE_16__ {int test_size; scalar_t__ dup; int slave_dma_chan; int mode; int slave_iomux; } ;
typedef TYPE_3__ spitest_param_set_t ;
struct TYPE_17__ {TYPE_2__* master_trans; TYPE_1__* slave_trans; } ;
typedef TYPE_4__ spitest_context_t ;
struct TYPE_18__ {int spics_io_num; int mode; } ;
typedef TYPE_5__ spi_slave_interface_config_t ;
struct TYPE_19__ {int quadhd_io_num; int sclk_io_num; int mosi_io_num; int miso_io_num; } ;
typedef TYPE_6__ spi_bus_config_t ;
struct TYPE_15__ {int length; int rxlength; int rx_buffer; } ;
struct TYPE_14__ {int start; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 TYPE_6__ FUNC_0 () ;
 TYPE_5__ FUNC_1 () ;
 int FUNC_2 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (TYPE_6__*,int ) ;
 int FUNC_5 (int ,TYPE_6__*,TYPE_5__*,int ) ;

__attribute__((used)) static void FUNC_6(int VAR_8, const spitest_param_set_t* VAR_9, spitest_context_t *VAR_10)
{

    spi_bus_config_t VAR_11=FUNC_0();
    VAR_11.miso_io_num = VAR_6;
    VAR_11.mosi_io_num = VAR_7;
    VAR_11.sclk_io_num = VAR_4;

    if (!VAR_9->slave_iomux) VAR_11.quadhd_io_num = VAR_2;
    spi_slave_interface_config_t VAR_12=FUNC_1();
    VAR_12.spics_io_num = VAR_5;
    VAR_12.mode = VAR_9->mode;

    FUNC_4(&VAR_11, VAR_12.spics_io_num);

    FUNC_2(FUNC_5(VAR_3, &VAR_11, &VAR_12, VAR_9->slave_dma_chan));


    for (int VAR_13 = 0; VAR_13 < VAR_9->test_size; VAR_13++) {
        if (VAR_9->dup==VAR_0) {
            FUNC_3(VAR_10->master_trans[VAR_13].rx_buffer, VAR_10->slave_trans[VAR_13].start, (VAR_10->master_trans[VAR_13].length+7)/8);
        } else if (VAR_9->dup==VAR_1) {
            FUNC_3(VAR_10->master_trans[VAR_13].rx_buffer, VAR_10->slave_trans[VAR_13].start, (VAR_10->master_trans[VAR_13].rxlength+7)/8);
        }
    }
}
