
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_13__ {TYPE_5__* dev; } ;
typedef TYPE_6__ spi_t ;
struct TYPE_11__ {int wr_bit_order; int rd_bit_order; } ;
struct TYPE_10__ {int ck_out_edge; } ;
struct TYPE_9__ {int ck_idle_edge; } ;
struct TYPE_8__ {int val; } ;
struct TYPE_12__ {TYPE_4__ ctrl; TYPE_3__ user; TYPE_2__ pin; TYPE_1__ clock; } ;


 int VAR_0 ;




 int VAR_1 ;
 int FUNC_0 () ;

void FUNC_1(spi_t * VAR_2, uint32_t VAR_3, uint8_t VAR_4, uint8_t VAR_5)
{
    if(!VAR_2) {
        return;
    }
    FUNC_0();
    VAR_2->dev->clock.val = VAR_3;
    switch (VAR_4) {
        case 130:
            VAR_2->dev->pin.ck_idle_edge = 0;
            VAR_2->dev->user.ck_out_edge = 1;
            break;
        case 129:
            VAR_2->dev->pin.ck_idle_edge = 1;
            VAR_2->dev->user.ck_out_edge = 1;
            break;
        case 128:
            VAR_2->dev->pin.ck_idle_edge = 1;
            VAR_2->dev->user.ck_out_edge = 0;
            break;
        case 131:
        default:
            VAR_2->dev->pin.ck_idle_edge = 0;
            VAR_2->dev->user.ck_out_edge = 0;
            break;
    }
    if (VAR_1 == VAR_5) {
        VAR_2->dev->ctrl.wr_bit_order = 0;
        VAR_2->dev->ctrl.rd_bit_order = 0;
    } else if (VAR_0 == VAR_5) {
        VAR_2->dev->ctrl.wr_bit_order = 1;
        VAR_2->dev->ctrl.rd_bit_order = 1;
    }
}
