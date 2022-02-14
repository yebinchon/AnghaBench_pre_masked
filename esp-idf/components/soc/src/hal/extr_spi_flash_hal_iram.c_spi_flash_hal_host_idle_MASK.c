
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int spi_flash_host_driver_t ;
typedef int spi_dev_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

bool FUNC_2(spi_flash_host_driver_t *VAR_2)
{
    spi_dev_t *VAR_3 = FUNC_0(VAR_2);
    bool VAR_4 = FUNC_1(VAR_3);



    if (VAR_3 == &VAR_1) {
        VAR_4 &= FUNC_1(&VAR_0);
    }

    return VAR_4;
}
