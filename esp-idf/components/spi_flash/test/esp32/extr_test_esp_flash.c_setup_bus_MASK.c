
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ spi_host_device_t ;
struct TYPE_3__ {int quadhd_io_num; int max_transfer_sz; int quadwp_io_num; int sclk_io_num; int miso_io_num; int mosi_io_num; } ;
typedef TYPE_1__ spi_bus_config_t ;
typedef int esp_err_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_3 (int ,int ,int ,int ) ;
 int FUNC_4 (scalar_t__,TYPE_1__*,int ) ;

__attribute__((used)) static void FUNC_5(spi_host_device_t VAR_16)
{
    if (VAR_16 == VAR_8) {
        FUNC_1(VAR_9, "setup flash on SPI1 CS1...\n");





    } else if (VAR_16 == VAR_1) {
        FUNC_1(VAR_9, "setup flash on SPI2 (HSPI) CS0...\n");
        spi_bus_config_t VAR_17 = {
            .mosi_io_num = VAR_5,
            .miso_io_num = VAR_4,
            .sclk_io_num = VAR_2,
            .quadhd_io_num = VAR_3,
            .quadwp_io_num = VAR_6,
            .max_transfer_sz = 64,
        };



        esp_err_t VAR_18 = FUNC_4(VAR_16, &VAR_17, 0);
        FUNC_2(VAR_18);
    } else if (VAR_16 == VAR_10) {
        FUNC_1(VAR_9, "setup flash on SPI3 (VSPI) CS0...\n");
        spi_bus_config_t VAR_19 = {
            .mosi_io_num = VAR_14,
            .miso_io_num = VAR_13,
            .sclk_io_num = VAR_11,
            .quadhd_io_num = VAR_12,
            .quadwp_io_num = VAR_15,
            .max_transfer_sz = 64,
        };



        esp_err_t VAR_20 = FUNC_4(VAR_16, &VAR_19, 0);
        FUNC_2(VAR_20);
    } else {
        FUNC_0(VAR_9, "invalid bus");
    }
}
