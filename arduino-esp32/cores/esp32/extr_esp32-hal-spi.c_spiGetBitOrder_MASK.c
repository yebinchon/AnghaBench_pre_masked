
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {TYPE_2__* dev; } ;
typedef TYPE_3__ spi_t ;
struct TYPE_5__ {int wr_bit_order; int rd_bit_order; } ;
struct TYPE_6__ {TYPE_1__ ctrl; } ;



uint8_t FUNC_0(spi_t * VAR_0)
{
    if(!VAR_0) {
        return 0;
    }
    return (VAR_0->dev->ctrl.wr_bit_order | VAR_0->dev->ctrl.rd_bit_order) == 0;
}
