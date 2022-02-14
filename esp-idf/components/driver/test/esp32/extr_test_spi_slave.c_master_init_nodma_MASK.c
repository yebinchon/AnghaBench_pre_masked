
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int clock_speed_hz; int queue_size; int cs_ena_posttrans; int cs_ena_pretrans; int * pre_cb; int spics_io_num; int mode; } ;
typedef TYPE_1__ spi_device_interface_config_t ;
typedef int spi_device_handle_t ;
struct TYPE_6__ {int quadwp_io_num; int quadhd_io_num; int sclk_io_num; int mosi_io_num; int miso_io_num; } ;
typedef TYPE_2__ spi_bus_config_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int ,TYPE_1__*,int *) ;
 scalar_t__ FUNC_2 (int ,TYPE_2__*,int ) ;

__attribute__((used)) static void FUNC_3( spi_device_handle_t* VAR_6)
{
    esp_err_t VAR_7;
    spi_bus_config_t VAR_8={
        .miso_io_num=VAR_3,
        .mosi_io_num=VAR_4,
        .sclk_io_num=VAR_1,
        .quadwp_io_num=-1,
        .quadhd_io_num=-1
    };
    spi_device_interface_config_t VAR_9={
        .clock_speed_hz=4*1000*1000,
        .mode=0,
        .spics_io_num=VAR_2,
        .queue_size=7,
        .pre_cb=((void*)0),
        .cs_ena_posttrans=5,
        .cs_ena_pretrans=1,
    };

    VAR_7=FUNC_2(VAR_5, &VAR_8, 0);
    FUNC_0(VAR_7==VAR_0);

    VAR_7=FUNC_1(VAR_5, &VAR_9, VAR_6);
    FUNC_0(VAR_7==VAR_0);
}
