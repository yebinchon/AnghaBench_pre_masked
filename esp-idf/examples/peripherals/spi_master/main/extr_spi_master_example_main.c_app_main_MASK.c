
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int clock_speed_hz; int queue_size; int pre_cb; int spics_io_num; int mode; } ;
typedef TYPE_1__ spi_device_interface_config_t ;
typedef int spi_device_handle_t ;
struct TYPE_6__ {int quadwp_io_num; int quadhd_io_num; int max_transfer_sz; int sclk_io_num; int mosi_io_num; int miso_io_num; } ;
typedef TYPE_2__ spi_bus_config_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_7 ;
 int FUNC_3 () ;
 int FUNC_4 (int ,TYPE_1__*,int *) ;
 int FUNC_5 (int ,TYPE_2__*,int ) ;

void FUNC_6(void)
{
    esp_err_t VAR_8;
    spi_device_handle_t VAR_9;
    spi_bus_config_t VAR_10={
        .miso_io_num=VAR_5,
        .mosi_io_num=VAR_6,
        .sclk_io_num=VAR_3,
        .quadwp_io_num=-1,
        .quadhd_io_num=-1,
        .max_transfer_sz=VAR_2*320*2+8
    };
    spi_device_interface_config_t VAR_11={



        .clock_speed_hz=10*1000*1000,

        .mode=0,
        .spics_io_num=VAR_4,
        .queue_size=7,
        .pre_cb=VAR_7,
    };

    VAR_8=FUNC_5(VAR_1, &VAR_10, VAR_0);
    FUNC_0(VAR_8);

    VAR_8=FUNC_4(VAR_1, &VAR_11, &VAR_9);
    FUNC_0(VAR_8);

    FUNC_2(VAR_9);

    VAR_8=FUNC_3();
    FUNC_0(VAR_8);


    FUNC_1(VAR_9);
}
