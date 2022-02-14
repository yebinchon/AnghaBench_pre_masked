
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct omap_hsmmc_host {scalar_t__ dpm_state; TYPE_1__* mmc; int power_mode; scalar_t__ vdd; int slot_id; int dev; } ;
struct TYPE_6__ {int (* set_power ) (int ,int ,int ,int ) ;scalar_t__ (* get_cover_state ) (int ,int ) ;scalar_t__ card_detect; } ;
struct TYPE_5__ {int caps; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (int ,char*,char*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*) ;
 TYPE_2__ FUNC_3 (struct omap_hsmmc_host*) ;
 int FUNC_4 (TYPE_1__*) ;
 scalar_t__ FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ,int ,int ) ;

__attribute__((used)) static int FUNC_7(struct omap_hsmmc_host *VAR_4)
{
 if (!FUNC_4(VAR_4->mmc))
  return 0;

 if (!((VAR_4->mmc->caps & VAR_1) ||
       FUNC_3(VAR_4).card_detect ||
       (FUNC_3(VAR_4).get_cover_state &&
        FUNC_3(VAR_4).get_cover_state(VAR_4->dev, VAR_4->slot_id)))) {
  FUNC_2(VAR_4->mmc);
  return 0;
 }

 FUNC_3(VAR_4).set_power(VAR_4->dev, VAR_4->slot_id, 0, 0);
 VAR_4->vdd = 0;
 VAR_4->power_mode = VAR_2;

 FUNC_0(FUNC_1(VAR_4->mmc), "%s -> OFF\n",
  VAR_4->dpm_state == VAR_0 ? "CARDSLEEP" : "REGSLEEP");

 VAR_4->dpm_state = VAR_3;

 FUNC_2(VAR_4->mmc);

 return 0;
}
