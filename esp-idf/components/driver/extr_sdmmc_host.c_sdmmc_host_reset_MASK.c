
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int controller_reset; int dma_reset; int fifo_reset; } ;
struct TYPE_4__ {TYPE_1__ ctrl; } ;


 TYPE_2__ VAR_0 ;

void FUNC_0(void)
{

    VAR_0.ctrl.controller_reset = 1;
    VAR_0.ctrl.dma_reset = 1;
    VAR_0.ctrl.fifo_reset = 1;

    while (VAR_0.ctrl.controller_reset || VAR_0.ctrl.fifo_reset || VAR_0.ctrl.dma_reset) {
        ;
    }
}
