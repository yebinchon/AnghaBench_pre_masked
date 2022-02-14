
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int lmc_gpio_io; int lmc_device; } ;
typedef TYPE_1__ lmc_softc_t ;


 int FUNC_0 (TYPE_1__* const,int ,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(lmc_softc_t * const VAR_2, u32 VAR_3)
{
    FUNC_1(VAR_2->lmc_device, "lmc_gpio_mkinput in");
    VAR_2->lmc_gpio_io &= ~VAR_3;
    FUNC_0(VAR_2, VAR_1, VAR_0 | (VAR_2->lmc_gpio_io));
    FUNC_1(VAR_2->lmc_device, "lmc_gpio_mkinput out");
}
