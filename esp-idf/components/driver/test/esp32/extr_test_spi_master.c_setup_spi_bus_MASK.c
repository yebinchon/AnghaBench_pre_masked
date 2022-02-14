
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int clock_speed_hz; int duty_cycle_pos; int spics_io_num; int queue_size; int mode; int dummy_bits; int address_bits; int command_bits; } ;
typedef TYPE_1__ spi_device_interface_config_t ;
typedef int spi_device_handle_t ;
struct TYPE_7__ {int mosi_io_num; int miso_io_num; int sclk_io_num; int quadwp_io_num; int quadhd_io_num; int max_transfer_sz; } ;
typedef TYPE_2__ spi_bus_config_t ;
typedef scalar_t__ esp_err_t ;
struct TYPE_8__ {int spid_out; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 size_t VAR_2 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (size_t,TYPE_1__*,int *) ;
 scalar_t__ FUNC_3 (size_t,TYPE_2__*,int) ;
 TYPE_3__* VAR_3 ;
 int FUNC_4 (int,int ,int ) ;

__attribute__((used)) static spi_device_handle_t FUNC_5(int VAR_4, bool VAR_5) {
    spi_bus_config_t VAR_6={
        .mosi_io_num=26,
        .miso_io_num=26,
        .sclk_io_num=25,
        .quadwp_io_num=-1,
        .quadhd_io_num=-1,
        .max_transfer_sz=4096*3
    };
    spi_device_interface_config_t VAR_7={
        .command_bits=0,
        .address_bits=0,
        .dummy_bits=0,
        .clock_speed_hz=VAR_4,
        .duty_cycle_pos=128,
        .mode=0,
        .spics_io_num=21,
        .queue_size=3,
    };
    esp_err_t VAR_8;
    spi_device_handle_t VAR_9;

    VAR_8=FUNC_3(VAR_2, &VAR_6, VAR_5?1:0);
    FUNC_0(VAR_8==VAR_0);
    VAR_8=FUNC_2(VAR_2, &VAR_7, &VAR_9);
    FUNC_0(VAR_8==VAR_0);

    FUNC_4(26, VAR_1, VAR_3[VAR_2].spid_out);
    FUNC_1("Bus/dev inited.\n");
    return VAR_9;
}
