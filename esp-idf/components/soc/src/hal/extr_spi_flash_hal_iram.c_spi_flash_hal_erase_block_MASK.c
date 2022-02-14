
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_5__ {int (* poll_cmd_done ) (TYPE_1__*) ;} ;
typedef TYPE_1__ spi_flash_host_driver_t ;
typedef int spi_dev_t ;


 int VAR_0 ;
 int * FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (TYPE_1__*) ;

void FUNC_5(spi_flash_host_driver_t *VAR_1, uint32_t VAR_2)
{
    spi_dev_t *VAR_3 = FUNC_0(VAR_1);
    FUNC_2(VAR_3, 24);
    FUNC_3(VAR_3, VAR_2 & VAR_0);
    FUNC_1(VAR_3);
    VAR_1->poll_cmd_done(VAR_1);
}
