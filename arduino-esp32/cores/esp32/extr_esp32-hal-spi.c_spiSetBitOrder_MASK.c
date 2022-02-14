
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_7__ {TYPE_1__* dev; } ;
typedef TYPE_3__ spi_t ;
struct TYPE_6__ {int wr_bit_order; int rd_bit_order; } ;
struct TYPE_5__ {TYPE_2__ ctrl; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 () ;

void FUNC_2(spi_t * VAR_2, uint8_t VAR_3)
{
    if(!VAR_2) {
        return;
    }
    FUNC_0();
    if (VAR_1 == VAR_3) {
        VAR_2->dev->ctrl.wr_bit_order = 0;
        VAR_2->dev->ctrl.rd_bit_order = 0;
    } else if (VAR_0 == VAR_3) {
        VAR_2->dev->ctrl.wr_bit_order = 1;
        VAR_2->dev->ctrl.rd_bit_order = 1;
    }
    FUNC_1();
}
