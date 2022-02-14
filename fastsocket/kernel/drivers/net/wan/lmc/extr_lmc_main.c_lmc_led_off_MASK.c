
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int lmc_miireg16; int lmc_device; } ;
typedef TYPE_1__ lmc_softc_t ;


 int FUNC_0 (TYPE_1__* const,int ,int,int) ;
 int FUNC_1 (int ,char*) ;

void FUNC_2(lmc_softc_t * const VAR_0, u32 VAR_1)
{
    FUNC_1(VAR_0->lmc_device, "lmc_led_off in");
    if(VAR_0->lmc_miireg16 & VAR_1){
        FUNC_1(VAR_0->lmc_device, "lmc_led_off aoff out");
        return;
    }

    VAR_0->lmc_miireg16 |= VAR_1;
    FUNC_0(VAR_0, 0, 16, VAR_0->lmc_miireg16);
    FUNC_1(VAR_0->lmc_device, "lmc_led_off out");
}
