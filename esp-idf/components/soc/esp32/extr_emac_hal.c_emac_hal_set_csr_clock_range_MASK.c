
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {TYPE_2__* mac_regs; } ;
typedef TYPE_3__ emac_hal_context_t ;
struct TYPE_5__ {int miicsrclk; } ;
struct TYPE_6__ {TYPE_1__ emacgmiiaddr; } ;


 int VAR_0 ;

void FUNC_0(emac_hal_context_t *VAR_1)
{

    if (VAR_0 >= 20 && VAR_0 < 35) {
        VAR_1->mac_regs->emacgmiiaddr.miicsrclk = 2;
    } else if (VAR_0 >= 35 && VAR_0 < 60) {
        VAR_1->mac_regs->emacgmiiaddr.miicsrclk = 3;
    } else if (VAR_0 >= 60 && VAR_0 < 100) {
        VAR_1->mac_regs->emacgmiiaddr.miicsrclk = 0;
    } else if (VAR_0 >= 100 && VAR_0 < 150) {
        VAR_1->mac_regs->emacgmiiaddr.miicsrclk = 1;
    } else if (VAR_0 > 150 && VAR_0 < 250) {
        VAR_1->mac_regs->emacgmiiaddr.miicsrclk = 4;
    } else {
        VAR_1->mac_regs->emacgmiiaddr.miicsrclk = 5;
    }
}
