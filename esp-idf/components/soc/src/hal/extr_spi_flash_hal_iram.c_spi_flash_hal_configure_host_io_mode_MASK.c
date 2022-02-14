
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int extra_dummy; } ;
typedef TYPE_1__ spi_flash_memspi_data_t ;
struct TYPE_6__ {scalar_t__ driver_data; } ;
typedef TYPE_2__ spi_flash_host_driver_t ;
typedef int spi_dev_t ;
typedef int esp_flash_io_mode_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *,int ) ;
 int FUNC_5 (int *,int ) ;
 int FUNC_6 (int *,int ) ;

esp_err_t FUNC_7(
    spi_flash_host_driver_t *VAR_1,
    uint32_t VAR_2,
    uint32_t VAR_3,
    int VAR_4,
    esp_flash_io_mode_t VAR_5)
{

    int VAR_6 = VAR_4 + ((spi_flash_memspi_data_t *)VAR_1->driver_data)->extra_dummy;

    spi_dev_t *VAR_7 = FUNC_0(VAR_1);
    FUNC_2(VAR_7, VAR_2);
    FUNC_1(VAR_7, VAR_3);
    FUNC_3(VAR_7, VAR_6);

    FUNC_4(VAR_7, 0);
    FUNC_5(VAR_7, 0);
    FUNC_6(VAR_7, VAR_5);
    return VAR_0;
}
