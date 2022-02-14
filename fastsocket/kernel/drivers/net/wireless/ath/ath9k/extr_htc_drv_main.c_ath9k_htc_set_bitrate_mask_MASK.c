
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct ieee80211_vif {scalar_t__ drv_priv; } ;
struct ieee80211_hw {struct ath9k_htc_priv* priv; } ;
struct cfg80211_bitrate_mask {TYPE_1__* control; } ;
struct ath_common {int dummy; } ;
struct ath9k_htc_vif {int index; } ;
struct ath9k_htc_target_rate_mask {size_t band; void* mask; int vif_index; } ;
struct ath9k_htc_priv {int ah; } ;
struct TYPE_2__ {int legacy; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,struct ath9k_htc_target_rate_mask*) ;
 struct ath_common* FUNC_1 (int ) ;
 int FUNC_2 (struct ath_common*,int ,char*,int ,int ) ;
 int FUNC_3 (struct ath_common*,char*,int ) ;
 void* FUNC_4 (int ) ;
 int FUNC_5 (struct ath9k_htc_target_rate_mask*,int ,int) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_hw *VAR_4,
          struct ieee80211_vif *VAR_5,
          const struct cfg80211_bitrate_mask *VAR_6)
{
 struct ath9k_htc_priv *VAR_7 = VAR_4->priv;
 struct ath_common *VAR_8 = FUNC_1(VAR_7->ah);
 struct ath9k_htc_target_rate_mask VAR_9;
 struct ath9k_htc_vif *VAR_10 = (void *)VAR_5->drv_priv;
 int VAR_11 = 0;
 u8 VAR_12;

 FUNC_5(&VAR_9, 0, sizeof(struct ath9k_htc_target_rate_mask));

 VAR_9.vif_index = VAR_10->index;
 VAR_9.band = VAR_1;
 VAR_9.mask = FUNC_4(VAR_6->control[VAR_1].legacy);

 FUNC_0(VAR_3, &VAR_9);
 if (VAR_11) {
  FUNC_3(VAR_8,
   "Unable to set 2G rate mask for "
   "interface at idx: %d\n", VAR_10->index);
  goto out;
 }

 VAR_9.band = VAR_2;
 VAR_9.mask = FUNC_4(VAR_6->control[VAR_2].legacy);

 FUNC_0(VAR_3, &VAR_9);
 if (VAR_11) {
  FUNC_3(VAR_8,
   "Unable to set 5G rate mask for "
   "interface at idx: %d\n", VAR_10->index);
  goto out;
 }

 FUNC_2(VAR_8, VAR_0, "Set bitrate masks: 0x%x, 0x%x\n",
  VAR_6->control[VAR_1].legacy,
  VAR_6->control[VAR_2].legacy);
out:
 return VAR_11;
}
