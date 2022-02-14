
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_6__ {int miso_len; int mosi_len; int mosi_data; int command; } ;
typedef TYPE_1__ spi_flash_trans_t ;
struct TYPE_7__ {TYPE_3__* host; } ;
typedef TYPE_2__ esp_flash_t ;
typedef int esp_err_t ;
struct TYPE_8__ {int (* common_command ) (TYPE_3__*,TYPE_1__*) ;} ;


 int FUNC_0 (TYPE_3__*,TYPE_1__*) ;

__attribute__((used)) static esp_err_t FUNC_1(esp_flash_t *VAR_0, uint8_t VAR_1, uint8_t VAR_2, uint32_t VAR_3)
{
    spi_flash_trans_t VAR_4 = {
        .command = VAR_1,
        .mosi_data = VAR_3,
        .mosi_len = VAR_2,
        .miso_len = 0,
    };
    return VAR_0->host->common_command(VAR_0->host, &VAR_4);
}
