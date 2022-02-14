
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int spi_host_device_t ;
struct TYPE_4__ {int clock_speed_hz; int queue_size; int spics_io_num; int mode; } ;
typedef TYPE_1__ spi_device_interface_config_t ;
typedef int esp_err_t ;
struct TYPE_5__ {int * handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_3__* VAR_2 ;
 int FUNC_0 (int ,TYPE_1__*,int **) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int) ;

__attribute__((used)) static esp_err_t FUNC_3(int VAR_3, int VAR_4)
{
    if (FUNC_2(VAR_3)) {

        FUNC_1(FUNC_2(VAR_3));
        VAR_2[VAR_3].handle = ((void*)0);
    }
    spi_device_interface_config_t VAR_5 = {
        .clock_speed_hz = VAR_4,
        .mode = 0,


        .spics_io_num = VAR_0,
        .queue_size = VAR_1,
    };
    return FUNC_0((spi_host_device_t) VAR_3, &VAR_5, &VAR_2[VAR_3].handle);
}
