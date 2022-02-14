
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {int extra_dummy; int clock_conf; int cs_num; } ;
typedef TYPE_1__ spi_flash_memspi_data_t ;
struct TYPE_6__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ spi_flash_host_driver_t ;
typedef int spi_dev_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int ) ;

esp_err_t FUNC_4(spi_flash_host_driver_t *VAR_2)
{
    spi_flash_memspi_data_t *VAR_3 = (spi_flash_memspi_data_t *)VAR_2->driver_data;
    spi_dev_t *VAR_4 = FUNC_0(VAR_2);
    FUNC_1(VAR_4);
    FUNC_3(VAR_4, VAR_3->cs_num);
    FUNC_2(VAR_4, &VAR_3->clock_conf);






    if (VAR_4 == &VAR_1) {

        extern uint8_t VAR_5[];
        VAR_5[1] = VAR_3->extra_dummy;
    }
    return VAR_0;
}
