
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int * flush_cache; TYPE_2__* driver_data; } ;
typedef TYPE_1__ spi_flash_host_driver_t ;
struct TYPE_8__ {int * spi; } ;
typedef TYPE_2__ memspi_host_data_t ;
typedef int memspi_host_config_t ;
typedef scalar_t__ esp_err_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int *,int) ;
 scalar_t__ FUNC_1 (TYPE_2__*,int const*) ;

esp_err_t FUNC_2(spi_flash_host_driver_t *VAR_3, memspi_host_data_t *VAR_4, const memspi_host_config_t *VAR_5)
{
    FUNC_0(VAR_3, &VAR_2, sizeof(spi_flash_host_driver_t));
    esp_err_t VAR_6 = FUNC_1(VAR_4, VAR_5);
    if (VAR_6 != VAR_0) {
        return VAR_6;
    }

    VAR_3->driver_data = VAR_4;

    if (VAR_4->spi != &VAR_1) {
        VAR_3->flush_cache = ((void*)0);
    }
    return VAR_0;
}
