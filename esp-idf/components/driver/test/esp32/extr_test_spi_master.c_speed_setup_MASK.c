
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int queue_size; } ;
typedef TYPE_1__ spi_device_interface_config_t ;
typedef int spi_device_handle_t ;
typedef int spi_bus_config_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 () ;
 TYPE_1__ FUNC_1 () ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_3 (int ,TYPE_1__*,int *) ;
 scalar_t__ FUNC_4 (int ,int *,int) ;

__attribute__((used)) static void FUNC_5(spi_device_handle_t* VAR_2, bool VAR_3)
{
    esp_err_t VAR_4;
    spi_bus_config_t VAR_5=FUNC_0();
    spi_device_interface_config_t VAR_6=FUNC_1();
    VAR_6.queue_size=8;


    VAR_4=FUNC_4(VAR_1, &VAR_5, (VAR_3?1:0));
    FUNC_2(VAR_4==VAR_0);
    VAR_4=FUNC_3(VAR_1, &VAR_6, VAR_2);
    FUNC_2(VAR_4==VAR_0);
}
