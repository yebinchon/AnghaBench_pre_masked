
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int ni; int ri; int ti; } ;
struct TYPE_6__ {int sw_reset; scalar_t__ val; } ;
struct TYPE_5__ {int dma_enable; } ;
struct TYPE_8__ {TYPE_3__ idinten; TYPE_2__ bmod; TYPE_1__ ctrl; } ;


 TYPE_4__ VAR_0 ;

__attribute__((used)) static void FUNC_0(void)
{
    VAR_0.ctrl.dma_enable = 1;
    VAR_0.bmod.val = 0;
    VAR_0.bmod.sw_reset = 1;
    VAR_0.idinten.ni = 1;
    VAR_0.idinten.ri = 1;
    VAR_0.idinten.ti = 1;
}
