
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_9__ {TYPE_3__* dev; } ;
typedef TYPE_4__ spi_t ;
struct TYPE_7__ {int ck_out_edge; } ;
struct TYPE_6__ {int ck_idle_edge; } ;
struct TYPE_8__ {TYPE_2__ user; TYPE_1__ pin; } ;






 int FUNC_0 () ;
 int FUNC_1 () ;

void FUNC_2(spi_t * VAR_0, uint8_t VAR_1)
{
    if(!VAR_0) {
        return;
    }
    FUNC_0();
    switch (VAR_1) {
    case 130:
        VAR_0->dev->pin.ck_idle_edge = 0;
        VAR_0->dev->user.ck_out_edge = 1;
        break;
    case 129:
        VAR_0->dev->pin.ck_idle_edge = 1;
        VAR_0->dev->user.ck_out_edge = 1;
        break;
    case 128:
        VAR_0->dev->pin.ck_idle_edge = 1;
        VAR_0->dev->user.ck_out_edge = 0;
        break;
    case 131:
    default:
        VAR_0->dev->pin.ck_idle_edge = 0;
        VAR_0->dev->user.ck_out_edge = 0;
        break;
    }
    FUNC_1();
}
