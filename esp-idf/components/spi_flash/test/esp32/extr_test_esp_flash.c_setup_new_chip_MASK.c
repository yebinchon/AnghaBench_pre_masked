
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int host_id; int input_delay_ns; int cs_io_num; int cs_id; int speed; int io_mode; } ;
typedef TYPE_1__ flashtest_config_t ;
typedef int esp_flash_t ;
struct TYPE_6__ {int host_id; int input_delay_ns; int cs_io_num; int cs_id; int speed; int io_mode; } ;
typedef TYPE_2__ esp_flash_spi_device_config_t ;
typedef int esp_err_t ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int **,TYPE_2__*) ;

__attribute__((used)) static void FUNC_4(const flashtest_config_t* VAR_0, esp_flash_t** VAR_1)
{

    if (VAR_0->host_id == -1) {
        *VAR_1 = ((void*)0);
        return;
    }
    FUNC_2(VAR_0->host_id);

    esp_flash_spi_device_config_t VAR_2 = {
        .host_id = VAR_0->host_id,
        .io_mode = VAR_0->io_mode,
        .speed = VAR_0->speed,
        .cs_id = VAR_0->cs_id,
        .cs_io_num = VAR_0->cs_io_num,
        .input_delay_ns = VAR_0->input_delay_ns,
    };
    esp_flash_t* VAR_3;
    esp_err_t VAR_4 = FUNC_3(&VAR_3, &VAR_2);
    FUNC_0(VAR_4);
    VAR_4 = FUNC_1(VAR_3);
    FUNC_0(VAR_4);
    *VAR_1 = VAR_3;
}
