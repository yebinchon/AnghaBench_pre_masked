
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int * hw; } ;
typedef TYPE_1__ spi_hal_context_t ;
typedef int spi_dev_t ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(spi_hal_context_t *VAR_0)
{
    spi_dev_t *VAR_1 = VAR_0->hw;
    if (VAR_1) {
        FUNC_1(VAR_1);
        FUNC_0(VAR_1);
    }
}
