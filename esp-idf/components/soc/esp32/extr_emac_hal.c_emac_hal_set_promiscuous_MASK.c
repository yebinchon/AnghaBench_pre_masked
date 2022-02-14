
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* mac_regs; } ;
typedef TYPE_3__ emac_hal_context_t ;
struct TYPE_5__ {int pmode; } ;
struct TYPE_6__ {TYPE_1__ gmacff; } ;



void FUNC_0(emac_hal_context_t *VAR_0, bool VAR_1)
{
    if (VAR_1) {
        VAR_0->mac_regs->gmacff.pmode = 1;
    } else {
        VAR_0->mac_regs->gmacff.pmode = 0;
    }
}
