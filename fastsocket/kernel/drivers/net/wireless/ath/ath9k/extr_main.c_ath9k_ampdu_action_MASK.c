
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; } ;
struct ieee80211_hw {struct ath_softc* priv; } ;
struct ath_softc {int sc_ah; } ;
typedef enum ieee80211_ampdu_mlme_action { ____Placeholder_ieee80211_ampdu_mlme_action } ieee80211_ampdu_mlme_action ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct ath_softc*) ;
 int FUNC_2 (struct ath_softc*) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (struct ath_softc*,struct ieee80211_sta*,int ) ;
 int FUNC_5 (struct ath_softc*,struct ieee80211_sta*,int ,int *) ;
 int FUNC_6 (struct ath_softc*,struct ieee80211_sta*,int ) ;
 int FUNC_7 (struct ieee80211_vif*,int ,int ) ;
 int FUNC_8 (struct ieee80211_vif*,int ,int ) ;
 int FUNC_9 () ;
 int FUNC_10 () ;

__attribute__((used)) static int FUNC_11(struct ieee80211_hw *VAR_0,
         struct ieee80211_vif *VAR_1,
         enum ieee80211_ampdu_mlme_action VAR_2,
         struct ieee80211_sta *VAR_3,
         u16 VAR_4, u16 *VAR_5, u8 VAR_6)
{
 struct ath_softc *VAR_7 = VAR_0->priv;
 bool VAR_8 = 0;
 int VAR_9 = 0;

 FUNC_9();

 switch (VAR_2) {
 case 134:
  break;
 case 133:
  break;
 case 131:
  FUNC_2(VAR_7);
  VAR_9 = FUNC_5(VAR_7, VAR_3, VAR_4, VAR_5);
  if (!VAR_9)
   FUNC_7(VAR_1, VAR_3->addr, VAR_4);
  FUNC_1(VAR_7);
  break;
 case 129:
 case 128:
  VAR_8 = 1;
 case 130:
  FUNC_2(VAR_7);
  FUNC_6(VAR_7, VAR_3, VAR_4);
  if (!VAR_8)
   FUNC_8(VAR_1, VAR_3->addr, VAR_4);
  FUNC_1(VAR_7);
  break;
 case 132:
  FUNC_2(VAR_7);
  FUNC_4(VAR_7, VAR_3, VAR_4);
  FUNC_1(VAR_7);
  break;
 default:
  FUNC_3(FUNC_0(VAR_7->sc_ah), "Unknown AMPDU action\n");
 }

 FUNC_10();

 return VAR_9;
}
