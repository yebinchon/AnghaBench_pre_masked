
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_7__ {TYPE_2__* mac_regs; } ;
typedef TYPE_3__ emac_hal_context_t ;
struct TYPE_5__ {int address0_hi; } ;
struct TYPE_6__ {int emacaddr0low; TYPE_1__ emacaddr0high; } ;



void FUNC_0(emac_hal_context_t *VAR_0, uint8_t *VAR_1)
{

    if (!(VAR_1[0] & 0x01)) {
        VAR_0->mac_regs->emacaddr0high.address0_hi = (VAR_1[5] << 8) | VAR_1[4];
        VAR_0->mac_regs->emacaddr0low = (VAR_1[3] << 24) | (VAR_1[2] << 16) | (VAR_1[1] << 8) | (VAR_1[0]);
    }
}
