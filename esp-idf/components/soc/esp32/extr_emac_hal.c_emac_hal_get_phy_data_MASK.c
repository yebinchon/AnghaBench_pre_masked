
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_7__ {TYPE_2__* mac_regs; } ;
typedef TYPE_3__ emac_hal_context_t ;
struct TYPE_5__ {int mii_data; } ;
struct TYPE_6__ {TYPE_1__ emacmiidata; } ;



uint32_t FUNC_0(emac_hal_context_t *VAR_0)
{
    return VAR_0->mac_regs->emacmiidata.mii_data;
}
