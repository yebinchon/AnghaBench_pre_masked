
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {scalar_t__ driver_data; } ;
typedef TYPE_1__ spi_flash_host_driver_t ;
struct TYPE_5__ {int * spi; } ;
typedef TYPE_2__ memspi_host_data_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

esp_err_t FUNC_1(spi_flash_host_driver_t* VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
    if (((memspi_host_data_t*)(VAR_2->driver_data))->spi == &VAR_1) {
        FUNC_0(VAR_3, VAR_4);
    }
    return VAR_0;
}
