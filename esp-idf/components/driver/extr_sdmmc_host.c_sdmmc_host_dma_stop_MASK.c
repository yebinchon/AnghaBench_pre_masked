
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ enable; scalar_t__ fb; } ;
struct TYPE_4__ {int dma_reset; scalar_t__ use_internal_dma; } ;
struct TYPE_6__ {TYPE_2__ bmod; TYPE_1__ ctrl; } ;


 TYPE_3__ VAR_0 ;

void FUNC_0(void)
{
    VAR_0.ctrl.use_internal_dma = 0;
    VAR_0.ctrl.dma_reset = 1;
    VAR_0.bmod.fb = 0;
    VAR_0.bmod.enable = 0;
}
