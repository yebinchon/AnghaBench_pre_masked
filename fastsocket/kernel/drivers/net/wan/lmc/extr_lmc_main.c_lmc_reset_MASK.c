
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int resetCount; } ;
struct TYPE_12__ {int lmc_device; TYPE_2__ extra_stats; TYPE_1__* lmc_media; int lmc_gpio; int lmc_miireg16; } ;
typedef TYPE_3__ lmc_softc_t ;
struct TYPE_10__ {int (* init ) (TYPE_3__* const) ;} ;


 int FUNC_0 (TYPE_3__* const,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (TYPE_3__* const,int ) ;
 int FUNC_2 (TYPE_3__* const,int ) ;
 int FUNC_3 (TYPE_3__* const,int ,int,int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (TYPE_3__* const) ;
 int FUNC_6 (int) ;

__attribute__((used)) static void FUNC_7(lmc_softc_t * const VAR_3)
{
    FUNC_4(VAR_3->lmc_device, "lmc_reset in");
    VAR_3->lmc_miireg16 |= VAR_1;
    FUNC_3(VAR_3, 0, 16, VAR_3->lmc_miireg16);

    VAR_3->lmc_miireg16 &= ~VAR_1;
    FUNC_3(VAR_3, 0, 16, VAR_3->lmc_miireg16);




    FUNC_2(VAR_3, VAR_0);






    VAR_3->lmc_gpio &= ~(VAR_0);
    FUNC_0(VAR_3, VAR_2, VAR_3->lmc_gpio);




    FUNC_6(50);




    FUNC_1(VAR_3, VAR_0);




    VAR_3->lmc_media->init(VAR_3);

    VAR_3->extra_stats.resetCount++;
    FUNC_4(VAR_3->lmc_device, "lmc_reset out");
}
