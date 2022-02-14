
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t u8 ;
struct sk_buff {scalar_t__ data; } ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct TYPE_3__ {struct ieee80211_vif* vif; } ;
struct ieee80211_tx_info {TYPE_1__ control; } ;
struct ieee80211_sta {scalar_t__ drv_priv; } ;
struct ieee80211_hdr {int frame_control; } ;
struct ath9k_htc_vif {size_t index; } ;
struct ath9k_htc_sta {size_t index; } ;
struct ath9k_htc_priv {size_t mon_vif_idx; size_t* vif_sta_pos; int htc; TYPE_2__* ah; } ;
struct TYPE_4__ {int is_monitoring; } ;


 int VAR_0 ;
 struct ieee80211_tx_info* FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int FUNC_1 (struct ath9k_htc_priv*,struct ieee80211_vif*,struct sk_buff*,size_t,size_t,size_t,int) ;
 int FUNC_2 (struct ath9k_htc_priv*,struct ath9k_htc_vif*,struct sk_buff*,size_t,size_t,size_t) ;
 int FUNC_3 (TYPE_2__*) ;
 int FUNC_4 (int ,int ,char*) ;
 int FUNC_5 (int ,struct sk_buff*) ;
 scalar_t__ FUNC_6 (int ) ;

int FUNC_7(struct ath9k_htc_priv *VAR_2,
         struct ieee80211_sta *VAR_3,
         struct sk_buff *VAR_4,
         u8 VAR_5, bool VAR_6)
{
 struct ieee80211_hdr *VAR_7;
 struct ieee80211_tx_info *VAR_8 = FUNC_0(VAR_4);
 struct ieee80211_vif *VAR_9 = VAR_8->control.vif;
 struct ath9k_htc_sta *VAR_10;
 struct ath9k_htc_vif *VAR_11 = ((void*)0);
 u8 VAR_12, VAR_13;

 VAR_7 = (struct ieee80211_hdr *) VAR_4->data;





 if (VAR_9) {
  VAR_11 = (struct ath9k_htc_vif *) VAR_9->drv_priv;
  VAR_13 = VAR_11->index;
 } else {
  if (!VAR_2->ah->is_monitoring) {
   FUNC_4(FUNC_3(VAR_2->ah), VAR_1,
    "VIF is null, but no monitor interface !\n");
   return -VAR_0;
  }

  VAR_13 = VAR_2->mon_vif_idx;
 }




 if (VAR_3) {
  VAR_10 = (struct ath9k_htc_sta *) VAR_3->drv_priv;
  VAR_12 = VAR_10->index;
 } else {
  VAR_12 = VAR_2->vif_sta_pos[VAR_13];
 }

 if (FUNC_6(VAR_7->frame_control))
  FUNC_1(VAR_2, VAR_9, VAR_4,
      VAR_12, VAR_13, VAR_5, VAR_6);
 else
  FUNC_2(VAR_2, VAR_11, VAR_4,
      VAR_12, VAR_13, VAR_5);


 return FUNC_5(VAR_2->htc, VAR_4);
}
