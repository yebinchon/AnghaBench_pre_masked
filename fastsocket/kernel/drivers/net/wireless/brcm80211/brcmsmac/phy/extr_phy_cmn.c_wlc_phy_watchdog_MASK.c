
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct brcms_phy_pub {int dummy; } ;
struct brcms_phy {int phynoise_now; scalar_t__ phycal_txpower; scalar_t__ nphy_perical; scalar_t__ nphy_perical_last; scalar_t__ phy_lastcal; scalar_t__ disable_percal; scalar_t__ carrier_suppr_disable; TYPE_1__* sh; scalar_t__ phy_forcecal; scalar_t__ phynoise_state; int radio_chanspec; int watchdog_override; } ;
struct TYPE_2__ {int now; scalar_t__ fast_timer; scalar_t__ glacial_timer; } ;


 scalar_t__ FUNC_0 (struct brcms_phy*) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (struct brcms_phy*) ;
 scalar_t__ FUNC_3 (struct brcms_phy*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_4 (struct brcms_phy*) ;
 int FUNC_5 (struct brcms_phy*) ;
 scalar_t__ FUNC_6 (struct brcms_phy*) ;
 int FUNC_7 (struct brcms_phy*,int ) ;
 int FUNC_8 (struct brcms_phy_pub*,int ) ;
 scalar_t__ FUNC_9 (struct brcms_phy*) ;
 int FUNC_10 (struct brcms_phy_pub*,int ,int ) ;
 int FUNC_11 (struct brcms_phy*) ;

void FUNC_12(struct brcms_phy_pub *VAR_5)
{
 struct brcms_phy *VAR_6 = (struct brcms_phy *) VAR_5;
 bool VAR_7 = 0;
 VAR_6->sh->now++;

 if (!VAR_6->watchdog_override)
  return;

 if (!(FUNC_6(VAR_6) || FUNC_4(VAR_6)))
  FUNC_10((struct brcms_phy_pub *) VAR_6,
          VAR_1,
          FUNC_1(VAR_6->
           radio_chanspec));

 if (VAR_6->phynoise_state && (VAR_6->sh->now - VAR_6->phynoise_now) > 5)
  VAR_6->phynoise_state = 0;

 if ((!VAR_6->phycal_txpower) ||
     ((VAR_6->sh->now - VAR_6->phycal_txpower) >= VAR_6->sh->fast_timer)) {

  if (!FUNC_5(VAR_6) && FUNC_9(VAR_6))
   VAR_6->phycal_txpower = VAR_6->sh->now;
 }

 if ((FUNC_6(VAR_6) || FUNC_4(VAR_6)
      || FUNC_0(VAR_6)))
  return;

 if (FUNC_3(VAR_6) && !VAR_6->disable_percal && !VAR_7) {

  if ((VAR_6->nphy_perical != VAR_2) &&
      (VAR_6->nphy_perical != VAR_3) &&
      ((VAR_6->sh->now - VAR_6->nphy_perical_last) >=
       VAR_6->sh->glacial_timer))
   FUNC_8((struct brcms_phy_pub *) VAR_6,
         VAR_4);

  FUNC_11(VAR_6);
 }

 if (FUNC_2(VAR_6)) {
  if (VAR_6->phy_forcecal ||
      ((VAR_6->sh->now - VAR_6->phy_lastcal) >=
       VAR_6->sh->glacial_timer)) {
   if (!(FUNC_6(VAR_6) || FUNC_0(VAR_6)))
    FUNC_7(
     VAR_6,
     VAR_0);
   if (!
       (FUNC_6(VAR_6) || FUNC_4(VAR_6)
        || FUNC_0(VAR_6)
        || VAR_6->carrier_suppr_disable
        || VAR_6->disable_percal))
    FUNC_7(VAR_6,
             VAR_4);
  }
 }
}
