
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * hw; } ;
typedef TYPE_1__ spi_hal_context_t ;
typedef int spi_dev_t ;
struct TYPE_6__ {int * hw; } ;


 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,int ,int ) ;
 TYPE_2__* VAR_0 ;

void FUNC_5(spi_hal_context_t *VAR_1, int VAR_2)
{
    FUNC_0(VAR_1, 0, sizeof(spi_hal_context_t));
    spi_dev_t *VAR_3 = VAR_0[VAR_2].hw;
    VAR_1->hw = VAR_3;
    FUNC_2(VAR_3);





    FUNC_1(VAR_3);
    FUNC_3(VAR_3);
    FUNC_4(VAR_3, 0, 0);
}
