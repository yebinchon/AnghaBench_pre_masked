
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; } ;
struct ieee80211_hw {struct ath9k_htc_priv* priv; } ;
struct ath_common {int dummy; } ;
struct ath9k_htc_target_rate {int capflags; } ;
struct ath9k_htc_priv {int mutex; int ah; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ath9k_htc_priv*) ;
 int FUNC_1 (struct ath9k_htc_priv*) ;
 int FUNC_2 (struct ath9k_htc_priv*,struct ath9k_htc_target_rate*) ;
 int FUNC_3 (struct ath9k_htc_priv*,struct ieee80211_sta*,struct ath9k_htc_target_rate*) ;
 struct ath_common* FUNC_4 (int ) ;
 int FUNC_5 (struct ath_common*,int ,char*,int ,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct ath9k_htc_target_rate*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(struct ieee80211_hw *VAR_2,
        struct ieee80211_vif *VAR_3,
        struct ieee80211_sta *VAR_4, u32 VAR_5)
{
 struct ath9k_htc_priv *VAR_6 = VAR_2->priv;
 struct ath_common *VAR_7 = FUNC_4(VAR_6->ah);
 struct ath9k_htc_target_rate VAR_8;

 FUNC_8(&VAR_6->mutex);
 FUNC_1(VAR_6);

 if (VAR_5 & VAR_1) {
  FUNC_7(&VAR_8, 0, sizeof(struct ath9k_htc_target_rate));
  FUNC_3(VAR_6, VAR_4, &VAR_8);
  if (!FUNC_2(VAR_6, &VAR_8))
   FUNC_5(VAR_7, VAR_0,
    "Supported rates for sta: %pM updated, rate caps: 0x%X\n",
    VAR_4->addr, FUNC_6(VAR_8.capflags));
  else
   FUNC_5(VAR_7, VAR_0,
    "Unable to update supported rates for sta: %pM\n",
    VAR_4->addr);
 }

 FUNC_0(VAR_6);
 FUNC_9(&VAR_6->mutex);
}
