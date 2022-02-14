
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap_hsmmc_host {scalar_t__ dpm_state; int mmc; int vdd; int slot_id; int dev; int fclk; } ;
struct TYPE_2__ {int (* set_sleep ) (int ,int ,int ,int ,int) ;} ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,char*,char*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 TYPE_1__ FUNC_6 (struct omap_hsmmc_host*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (struct omap_hsmmc_host*) ;
 int FUNC_9 (int ,int ,int ,int ,int) ;

__attribute__((used)) static int FUNC_10(struct omap_hsmmc_host *VAR_2)
{
 if (!FUNC_7(VAR_2->mmc))
  return 0;

 FUNC_0(VAR_2->fclk);
 FUNC_8(VAR_2);
 if (FUNC_6(VAR_2).set_sleep)
  FUNC_6(VAR_2).set_sleep(VAR_2->dev, VAR_2->slot_id, 0,
    VAR_2->vdd, VAR_2->dpm_state == VAR_0);
 if (FUNC_3(VAR_2->mmc))
  FUNC_2(VAR_2->mmc);

 FUNC_1(FUNC_4(VAR_2->mmc), "%s -> ENABLED\n",
  VAR_2->dpm_state == VAR_0 ? "CARDSLEEP" : "REGSLEEP");

 VAR_2->dpm_state = VAR_1;

 FUNC_5(VAR_2->mmc);

 return 0;
}
