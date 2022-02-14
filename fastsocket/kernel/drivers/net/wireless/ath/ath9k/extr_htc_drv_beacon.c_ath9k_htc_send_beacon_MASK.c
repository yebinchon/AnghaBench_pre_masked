
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct tx_beacon_header {int vif_index; int epid; int type; } ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_tx_info {int flags; } ;
struct TYPE_5__ {int timestamp; } ;
struct TYPE_6__ {TYPE_2__ beacon; } ;
struct ieee80211_mgmt {TYPE_3__ u; } ;
struct ieee80211_hdr {int seq_ctrl; } ;
struct ath_common {int dummy; } ;
struct ath9k_htc_vif {int seq_no; int index; int tsfadjust; } ;
struct ath9k_htc_tx_ctl {int vif_index; int epid; int type; } ;
struct TYPE_4__ {struct ieee80211_vif** bslot; } ;
struct ath9k_htc_priv {int beacon_lock; int htc; int beacon_ep; int hw; int op_flags; TYPE_1__ cur_beacon_conf; int ah; } ;
typedef int beacon_hdr ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tx_beacon_header* FUNC_0 (struct sk_buff*) ;
 int VAR_3 ;
 struct ieee80211_tx_info* FUNC_1 (struct sk_buff*) ;
 int VAR_4 ;
 int VAR_5 ;
 struct ath_common* FUNC_2 (int ) ;
 int FUNC_3 (struct ath_common*,int ,char*) ;
 int FUNC_4 (int) ;
 int FUNC_5 (struct sk_buff*) ;
 int FUNC_6 (int ,struct sk_buff*) ;
 struct sk_buff* FUNC_7 (int ,struct ieee80211_vif*) ;
 int FUNC_8 (int *,int *,int) ;
 int FUNC_9 (struct tx_beacon_header*,int ,int) ;
 int * FUNC_10 (struct sk_buff*,int) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int ,int *) ;
 scalar_t__ FUNC_14 (int ) ;

__attribute__((used)) static void FUNC_15(struct ath9k_htc_priv *VAR_6,
      int VAR_7)
{
 struct ath_common *VAR_8 = FUNC_2(VAR_6->ah);
 struct ieee80211_vif *VAR_9;
 struct ath9k_htc_vif *VAR_10;
 struct tx_beacon_header VAR_11;
 struct ath9k_htc_tx_ctl *VAR_12;
 struct ieee80211_tx_info *VAR_13;
 struct ieee80211_mgmt *VAR_14;
 struct sk_buff *VAR_15;
 u8 *VAR_16;
 int VAR_17;

 FUNC_9(&VAR_11, 0, sizeof(struct tx_beacon_header));

 FUNC_11(&VAR_6->beacon_lock);

 VAR_9 = VAR_6->cur_beacon_conf.bslot[VAR_7];
 VAR_10 = (struct ath9k_htc_vif *)VAR_9->drv_priv;

 if (FUNC_14(FUNC_13(VAR_5, &VAR_6->op_flags))) {
  FUNC_12(&VAR_6->beacon_lock);
  return;
 }


 VAR_15 = FUNC_7(VAR_6->hw, VAR_9);
 if (!VAR_15) {
  FUNC_12(&VAR_6->beacon_lock);
  return;
 }





 VAR_14 = (struct ieee80211_mgmt *)VAR_15->data;
 VAR_14->u.beacon.timestamp = VAR_10->tsfadjust;

 VAR_13 = FUNC_1(VAR_15);
 if (VAR_13->flags & VAR_4) {
  struct ieee80211_hdr *VAR_18 =
   (struct ieee80211_hdr *) VAR_15->data;
  VAR_10->seq_no += 0x10;
  VAR_18->seq_ctrl &= FUNC_4(VAR_3);
  VAR_18->seq_ctrl |= FUNC_4(VAR_10->seq_no);
 }

 VAR_12 = FUNC_0(VAR_15);
 FUNC_9(VAR_12, 0, sizeof(*VAR_12));

 VAR_12->type = VAR_0;
 VAR_12->epid = VAR_6->beacon_ep;

 VAR_11.vif_index = VAR_10->index;
 VAR_16 = FUNC_10(VAR_15, sizeof(VAR_11));
 FUNC_8(VAR_16, (u8 *) &VAR_11, sizeof(VAR_11));

 VAR_17 = FUNC_6(VAR_6->htc, VAR_15);
 if (VAR_17 != 0) {
  if (VAR_17 == -VAR_2) {
   FUNC_3(VAR_8, VAR_1,
    "Failed to send beacon, no free TX buffer\n");
  }
  FUNC_5(VAR_15);
 }

 FUNC_12(&VAR_6->beacon_lock);
}
