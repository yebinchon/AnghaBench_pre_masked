
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int (* poll_cmd_done ) (TYPE_1__*) ;} ;
typedef TYPE_1__ spi_flash_host_driver_t ;
typedef int spi_dev_t ;
typedef int esp_err_t ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,void*,int) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_1__*) ;

esp_err_t FUNC_6(spi_flash_host_driver_t *VAR_1, void *VAR_2, uint32_t VAR_3, uint32_t VAR_4)
{
    spi_dev_t *VAR_5 = FUNC_0(VAR_1);

    FUNC_2(VAR_5, VAR_3 << 8);
    FUNC_3(VAR_5, VAR_4 * 8);
    FUNC_4(VAR_5);
    VAR_1->poll_cmd_done(VAR_1);
    FUNC_1(VAR_5, VAR_2, VAR_4);
    return VAR_0;
}
