
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct mwl8k_priv {int capture_beacon; int finalize_join_worker; int * beacon_skb; int capture_bssid; } ;
struct ieee80211_hw {struct mwl8k_priv* priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ieee80211_hw*,int *) ;
 int FUNC_1 (int ,int ,int ) ;
 int * FUNC_2 (struct sk_buff*,int ) ;

__attribute__((used)) static inline void FUNC_3(struct ieee80211_hw *VAR_2,
         struct sk_buff *VAR_3)
{
 struct mwl8k_priv *VAR_4 = VAR_2->priv;

 VAR_4->capture_beacon = 0;
 FUNC_1(VAR_4->capture_bssid, 0, VAR_0);






 VAR_4->beacon_skb = FUNC_2(VAR_3, VAR_1);
 if (VAR_4->beacon_skb != ((void*)0))
  FUNC_0(VAR_2, &VAR_4->finalize_join_worker);
}
