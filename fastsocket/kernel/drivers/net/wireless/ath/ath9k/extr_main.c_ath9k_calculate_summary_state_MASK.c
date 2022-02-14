
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_vif {int dummy; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_softc {int hw; int sc_flags; struct ath_hw* sc_ah; } ;
struct ath_hw {int opmode; int imask; } ;
struct ath_common {int bssidmask; } ;
struct ath9k_vif_iter_data {scalar_t__ naps; scalar_t__ nmeshes; scalar_t__ nadhocs; scalar_t__ nstations; scalar_t__ nwds; int mask; } ;
typedef enum nl80211_iftype { ____Placeholder_nl80211_iftype } nl80211_iftype ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 int FUNC_0 (struct ieee80211_hw*,struct ieee80211_vif*,struct ath9k_vif_iter_data*) ;
 struct ath_common* FUNC_1 (struct ath_hw*) ;
 int FUNC_2 (struct ath_hw*) ;
 int FUNC_3 (struct ath_hw*,int) ;
 int FUNC_4 (struct ath_hw*) ;
 int VAR_8 ;
 int FUNC_5 (struct ath_common*) ;
 int FUNC_6 (int ,int ,int ,struct ath_softc*) ;
 int FUNC_7 (int ,int ,int ) ;
 scalar_t__ FUNC_8 (int ,int *) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_9,
       struct ieee80211_vif *VAR_10)
{
 struct ath_softc *VAR_11 = VAR_9->priv;
 struct ath_hw *VAR_12 = VAR_11->sc_ah;
 struct ath_common *VAR_13 = FUNC_1(VAR_12);
 struct ath9k_vif_iter_data VAR_14;
 enum nl80211_iftype VAR_15 = VAR_12->opmode;

 FUNC_0(VAR_9, VAR_10, &VAR_14);

 FUNC_7(VAR_13->bssidmask, VAR_14.mask, VAR_1);
 FUNC_5(VAR_13);

 if (VAR_14.naps > 0) {
  FUNC_3(VAR_12, 1);
  VAR_12->opmode = VAR_4;
 } else {
  FUNC_3(VAR_12, 0);

  if (VAR_14.nmeshes)
   VAR_12->opmode = VAR_5;
  else if (VAR_14.nwds)
   VAR_12->opmode = VAR_4;
  else if (VAR_14.nadhocs)
   VAR_12->opmode = VAR_3;
  else
   VAR_12->opmode = VAR_6;
 }

 FUNC_4(VAR_12);

 if ((VAR_14.nstations + VAR_14.nadhocs + VAR_14.nmeshes) > 0)
  VAR_12->imask |= VAR_0;
 else
  VAR_12->imask &= ~VAR_0;

 FUNC_2(VAR_12);





 if (VAR_12->opmode == VAR_6 &&
     VAR_15 == VAR_4 &&
     FUNC_8(VAR_7, &VAR_11->sc_flags)) {
  FUNC_6(
   VAR_11->hw, VAR_2,
   VAR_8, VAR_11);
 }
}
