
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ieee80211_sta {int addr; } ;
struct ath_common {int dummy; } ;
struct ath9k_htc_target_rate {int capflags; } ;
struct ath9k_htc_priv {int ah; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath9k_htc_priv*,struct ath9k_htc_target_rate*) ;
 int FUNC_1 (struct ath9k_htc_priv*,struct ieee80211_sta*,struct ath9k_htc_target_rate*) ;
 struct ath_common* FUNC_2 (int ) ;
 int FUNC_3 (struct ath_common*,int ,char*,int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ath9k_htc_target_rate*,int ,int) ;

__attribute__((used)) static void FUNC_6(struct ath9k_htc_priv *VAR_1,
    struct ieee80211_sta *VAR_2)
{
 struct ath_common *VAR_3 = FUNC_2(VAR_1->ah);
 struct ath9k_htc_target_rate VAR_4;
 int VAR_5;

 FUNC_5(&VAR_4, 0, sizeof(struct ath9k_htc_target_rate));
 FUNC_1(VAR_1, VAR_2, &VAR_4);
 VAR_5 = FUNC_0(VAR_1, &VAR_4);
 if (!VAR_5)
  FUNC_3(VAR_3, VAR_0,
   "Updated target sta: %pM, rate caps: 0x%X\n",
   VAR_2->addr, FUNC_4(VAR_4.capflags));
}
