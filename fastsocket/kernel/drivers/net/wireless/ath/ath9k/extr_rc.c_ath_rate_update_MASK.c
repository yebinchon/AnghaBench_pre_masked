
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ieee80211_supported_band {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
struct ath_softc {TYPE_2__* hw; int sc_ah; } ;
struct ath_rate_priv {int ht_cap; } ;
struct TYPE_3__ {int chandef; } ;
struct TYPE_4__ {TYPE_1__ conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*,int ) ;
 int FUNC_2 (struct ath_softc*,struct ieee80211_sta*) ;
 int FUNC_3 (struct ath_softc*,void*) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(void *VAR_2, struct ieee80211_supported_band *VAR_3,
       struct ieee80211_sta *VAR_4, void *VAR_5,
       u32 VAR_6)
{
 struct ath_softc *VAR_7 = VAR_2;
 struct ath_rate_priv *VAR_8 = VAR_5;

 if (VAR_6 & VAR_1) {
  VAR_8->ht_cap = FUNC_2(VAR_7, VAR_4);
  FUNC_3(VAR_7, VAR_5);

  FUNC_1(FUNC_0(VAR_7->sc_ah), VAR_0,
   "Operating HT Bandwidth changed to: %d\n",
   FUNC_4(&VAR_7->hw->conf.chandef));
 }
}
