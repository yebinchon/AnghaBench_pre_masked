
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int len; scalar_t__ data; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_hdr {int frame_control; } ;
struct ath_common {int dummy; } ;
struct TYPE_4__ {int tx_lock; int queued_cnt; } ;
struct TYPE_3__ {struct ieee80211_vif** bslot; } ;
struct ath9k_htc_priv {int beacon_lock; int hw; TYPE_2__ tx; TYPE_1__ cur_beacon_conf; int ah; } ;


 int VAR_0 ;
 int FUNC_0 (struct ath9k_htc_priv*,int) ;
 int FUNC_1 (struct ath9k_htc_priv*) ;
 int FUNC_2 (struct ath9k_htc_priv*,int *,struct sk_buff*,int,int) ;
 struct ath_common* FUNC_3 (int ) ;
 int FUNC_4 (struct ath_common*,int ,char*) ;
 int FUNC_5 (struct sk_buff*) ;
 struct sk_buff* FUNC_6 (int ,struct ieee80211_vif*) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (scalar_t__,scalar_t__,int) ;
 int FUNC_9 (struct sk_buff*) ;
 int FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static void FUNC_13(struct ath9k_htc_priv *VAR_1,
        int VAR_2)
{
 struct ath_common *VAR_3 = FUNC_3(VAR_1->ah);
 struct ieee80211_vif *VAR_4;
 struct sk_buff *VAR_5;
 struct ieee80211_hdr *VAR_6;
 int VAR_7, VAR_8, VAR_9, VAR_10;

 FUNC_11(&VAR_1->beacon_lock);

 VAR_4 = VAR_1->cur_beacon_conf.bslot[VAR_2];

 VAR_5 = FUNC_6(VAR_1->hw, VAR_4);

 while(VAR_5) {
  VAR_6 = (struct ieee80211_hdr *) VAR_5->data;

  VAR_7 = FUNC_7(VAR_6->frame_control);
  VAR_8 = VAR_7 & 3;
  if (VAR_8 && VAR_5->len > VAR_7) {
   if (FUNC_9(VAR_5) < VAR_8) {
    FUNC_5(VAR_5);
    goto next;
   }
   FUNC_10(VAR_5, VAR_8);
   FUNC_8(VAR_5->data, VAR_5->data + VAR_8, VAR_7);
  }

  VAR_10 = FUNC_1(VAR_1);
  if (VAR_10 < 0) {
   FUNC_4(VAR_3, VAR_0, "No free CAB slot\n");
   FUNC_5(VAR_5);
   goto next;
  }

  VAR_9 = FUNC_2(VAR_1, ((void*)0), VAR_5, VAR_10, 1);
  if (VAR_9 != 0) {
   FUNC_0(VAR_1, VAR_10);
   FUNC_5(VAR_5);

   FUNC_4(VAR_3, VAR_0, "Failed to send CAB frame\n");
  } else {
   FUNC_11(&VAR_1->tx.tx_lock);
   VAR_1->tx.queued_cnt++;
   FUNC_12(&VAR_1->tx.tx_lock);
  }
 next:
  VAR_5 = FUNC_6(VAR_1->hw, VAR_4);
 }

 FUNC_12(&VAR_1->beacon_lock);
}
