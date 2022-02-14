
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_6__ {int miso_len; int * miso_data; int mosi_len; int mosi_data; int command; } ;
typedef TYPE_1__ spi_flash_trans_t ;
struct TYPE_7__ {scalar_t__ (* common_command ) (TYPE_2__*,TYPE_1__*) ;} ;
typedef TYPE_2__ spi_flash_host_driver_t ;
typedef scalar_t__ esp_err_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_2__*,TYPE_1__*) ;

esp_err_t FUNC_1(spi_flash_host_driver_t *VAR_2, uint8_t *VAR_3)
{

    spi_flash_trans_t VAR_4 = {
        .command = VAR_0,
        .mosi_data = 0,
        .mosi_len = 0,
        .miso_len = 8
    };
    esp_err_t VAR_5 = VAR_2->common_command(VAR_2, &VAR_4);
    if (VAR_5 != VAR_1) {
        return VAR_5;
    }
    *VAR_3 = VAR_4.miso_data[0];
    return VAR_1;
}
