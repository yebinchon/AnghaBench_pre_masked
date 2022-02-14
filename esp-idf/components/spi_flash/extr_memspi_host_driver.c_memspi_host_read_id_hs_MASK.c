
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
typedef int uint16_t ;
struct TYPE_6__ {int miso_len; int* miso_data; int mosi_len; int mosi_data; int command; } ;
typedef TYPE_1__ spi_flash_trans_t ;
struct TYPE_7__ {int (* common_command ) (TYPE_2__*,TYPE_1__*) ;} ;
typedef TYPE_2__ spi_flash_host_driver_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_2 (TYPE_2__*,TYPE_1__*) ;

esp_err_t FUNC_3(spi_flash_host_driver_t *VAR_4, uint32_t *VAR_5)
{

    spi_flash_trans_t VAR_6 = {
        .command = VAR_0,
        .mosi_data = 0,
        .mosi_len = 0,
        .miso_len = 24
    };
    VAR_4->common_command(VAR_4, &VAR_6);
    uint32_t VAR_7 = VAR_6.miso_data[0];
    FUNC_1(VAR_3, "raw_chip_id: %X\n", VAR_7);
    if (VAR_7 == 0xFFFFFF || VAR_7 == 0) {
        FUNC_0(VAR_3, "no response\n");
        return VAR_1;
    }


    uint8_t VAR_8 = VAR_7 & 0xFF;
    uint16_t VAR_9 = (VAR_7 >> 16) | (VAR_7 & 0xFF00);
    *VAR_5 = ((uint32_t)VAR_8 << 16) | VAR_9;
    FUNC_1(VAR_3, "chip_id: %X\n", *VAR_5);
    return VAR_2;
}
