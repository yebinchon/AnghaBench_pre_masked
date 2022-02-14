
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * hw; } ;
typedef TYPE_1__ spi_slave_hal_context_t ;
typedef int spi_dev_t ;
struct TYPE_6__ {int * hw; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 TYPE_3__* VAR_1 ;

void FUNC_4(spi_slave_hal_context_t *VAR_2, int VAR_3)
{
    FUNC_0(VAR_2, 0, sizeof(spi_slave_hal_context_t));
    spi_dev_t *VAR_4 = VAR_1[VAR_3].hw;
    VAR_2->hw = VAR_4;

    FUNC_2(VAR_2->hw);




    FUNC_1(VAR_2->hw);
    FUNC_3(VAR_2->hw, VAR_0);
}
