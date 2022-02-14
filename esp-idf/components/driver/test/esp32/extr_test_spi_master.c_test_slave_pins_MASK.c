
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int spics_io_num; } ;
typedef TYPE_1__ spi_slave_interface_config_t ;
struct TYPE_8__ {int mosi_io_num; int miso_io_num; int sclk_io_num; } ;
typedef TYPE_2__ spi_bus_config_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 TYPE_2__ FUNC_0 () ;
 TYPE_1__ FUNC_1 () ;
 int VAR_1 ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ,TYPE_2__*,TYPE_1__*,int) ;

__attribute__((used)) static esp_err_t FUNC_4(int VAR_2, int VAR_3, int VAR_4, int VAR_5)
{
    esp_err_t VAR_6;
    spi_bus_config_t VAR_7 = FUNC_0();
    VAR_7.mosi_io_num = VAR_2;
    VAR_7.miso_io_num = VAR_3;
    VAR_7.sclk_io_num = VAR_4;

    spi_slave_interface_config_t VAR_8 = FUNC_1();
    VAR_8.spics_io_num = VAR_5;

    VAR_6 = FUNC_3(VAR_1, &VAR_7, &VAR_8, 1);
    if (VAR_6 != VAR_0) return VAR_6;

    FUNC_2(VAR_1);
    return VAR_0;
}
