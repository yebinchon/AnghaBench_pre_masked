
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {int dummy; } ;
struct ieee80211_tx_info {int driver_data; } ;
struct ath9k_htc_tx_ctl {int dummy; } ;


 int FUNC_0 (int) ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 int VAR_0 ;

__attribute__((used)) static inline struct ath9k_htc_tx_ctl *FUNC_2(struct sk_buff *VAR_1)
{
 struct ieee80211_tx_info *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(sizeof(struct ath9k_htc_tx_ctl) >
       VAR_0);
 return (struct ath9k_htc_tx_ctl *) &VAR_2->driver_data;
}
