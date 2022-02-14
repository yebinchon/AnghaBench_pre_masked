
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {scalar_t__ protocol; scalar_t__ data; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_hdr {int addr1; int frame_control; } ;
struct ath9k_htc_sta {int * tid_state; } ;
struct TYPE_4__ {int tx_lock; } ;
struct ath9k_htc_priv {TYPE_2__ tx; TYPE_1__* hw; } ;
typedef int __le16 ;
struct TYPE_3__ {int conf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ath9k_htc_priv*,struct ath9k_htc_sta*,int) ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 struct ieee80211_sta* FUNC_3 (struct ieee80211_vif*,int ) ;
 int* FUNC_4 (struct ieee80211_hdr*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (struct ieee80211_sta*,int,int ) ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static void FUNC_11(struct ath9k_htc_priv *VAR_2,
        struct ieee80211_vif *VAR_3,
        struct sk_buff *VAR_4)
{
 struct ieee80211_sta *VAR_5;
 struct ieee80211_hdr *VAR_6;
 __le16 VAR_7;

 VAR_6 = (struct ieee80211_hdr *) VAR_4->data;
 VAR_7 = VAR_6->frame_control;

 FUNC_7();

 VAR_5 = FUNC_3(VAR_3, VAR_6->addr1);
 if (!VAR_5) {
  FUNC_8();
  return;
 }

 if (VAR_5 && FUNC_1(&VAR_2->hw->conf) &&
     !(VAR_4->protocol == FUNC_2(VAR_1))) {
  if (FUNC_5(VAR_7)) {
   u8 *VAR_8, VAR_9;
   struct ath9k_htc_sta *VAR_10;

   VAR_8 = FUNC_4(VAR_6);
   VAR_9 = VAR_8[0] & 0xf;
   VAR_10 = (struct ath9k_htc_sta *)VAR_5->drv_priv;
   if (FUNC_0(VAR_2, VAR_10, VAR_9)) {
    FUNC_6(VAR_5, VAR_9, 0);
    FUNC_9(&VAR_2->tx.tx_lock);
    VAR_10->tid_state[VAR_9] = VAR_0;
    FUNC_10(&VAR_2->tx.tx_lock);
   }
  }
 }

 FUNC_8();
}
