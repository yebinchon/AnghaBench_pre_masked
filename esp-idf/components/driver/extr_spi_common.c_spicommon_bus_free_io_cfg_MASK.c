
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int mosi_io_num; int miso_io_num; int sclk_io_num; int quadwp_io_num; int quadhd_io_num; } ;
typedef TYPE_1__ spi_bus_config_t ;
typedef int pin_array ;
typedef int esp_err_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int const) ;
 int FUNC_1 (int const) ;

esp_err_t FUNC_2(const spi_bus_config_t *VAR_1)
{
    int VAR_2[] = {
        VAR_1->mosi_io_num,
        VAR_1->miso_io_num,
        VAR_1->sclk_io_num,
        VAR_1->quadwp_io_num,
        VAR_1->quadhd_io_num,
    };
    for (int VAR_3 = 0; VAR_3 < sizeof(VAR_2)/sizeof(int); VAR_3 ++) {
        const int VAR_4 = VAR_2[VAR_3];
        if (VAR_4 >= 0 && FUNC_0(VAR_4)) FUNC_1(VAR_4);
    }
    return VAR_0;
}
