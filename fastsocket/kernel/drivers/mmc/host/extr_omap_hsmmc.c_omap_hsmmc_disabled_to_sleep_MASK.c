
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct omap_hsmmc_host {int dpm_state; int slot_id; int dev; TYPE_1__* mmc; int fclk; } ;
struct TYPE_8__ {scalar_t__ (* get_cover_state ) (int ,int ) ;scalar_t__ card_detect; int (* set_sleep ) (int ,int ,int,int ,int) ;} ;
struct TYPE_7__ {int caps; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,char*,char*) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (TYPE_1__*) ;
 int FUNC_6 (TYPE_1__*) ;
 TYPE_2__ FUNC_7 (struct omap_hsmmc_host*) ;
 int FUNC_8 (TYPE_1__*) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct omap_hsmmc_host*) ;
 int FUNC_11 (int ,int ,int,int ,int) ;
 scalar_t__ FUNC_12 (int ,int ) ;

__attribute__((used)) static int FUNC_13(struct omap_hsmmc_host *VAR_4)
{
 int VAR_5, VAR_6;

 if (!FUNC_8(VAR_4->mmc))
  return 0;

 FUNC_1(VAR_4->fclk);
 FUNC_10(VAR_4);
 if (FUNC_3(VAR_4->mmc)) {
  VAR_5 = FUNC_4(VAR_4->mmc);
  if (VAR_5 < 0) {
   FUNC_0(VAR_4->fclk);
   FUNC_6(VAR_4->mmc);
   return VAR_5;
  }
  VAR_6 = VAR_0;
 } else {
  VAR_6 = VAR_3;
 }
 if (FUNC_7(VAR_4).set_sleep)
  FUNC_7(VAR_4).set_sleep(VAR_4->dev, VAR_4->slot_id, 1, 0,
      VAR_6 == VAR_0);

 FUNC_0(VAR_4->fclk);
 VAR_4->dpm_state = VAR_6;

 FUNC_6(VAR_4->mmc);

 FUNC_2(FUNC_5(VAR_4->mmc), "DISABLED -> %s\n",
  VAR_4->dpm_state == VAR_0 ? "CARDSLEEP" : "REGSLEEP");

 if ((VAR_4->mmc->caps & VAR_1) ||
     FUNC_7(VAR_4).card_detect ||
     (FUNC_7(VAR_4).get_cover_state &&
      FUNC_7(VAR_4).get_cover_state(VAR_4->dev, VAR_4->slot_id)))
  return FUNC_9(VAR_2);

 return 0;
}
