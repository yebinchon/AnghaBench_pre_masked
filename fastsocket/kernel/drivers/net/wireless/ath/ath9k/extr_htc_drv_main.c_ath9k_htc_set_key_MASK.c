
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ieee80211_vif {scalar_t__ type; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_key_conf {scalar_t__ cipher; int flags; int hw_key_idx; } ;
struct ieee80211_hw {struct ath9k_htc_priv* priv; } ;
struct ath_common {int dummy; } ;
struct ath9k_htc_priv {int mutex; TYPE_1__* ah; } ;
typedef enum set_key_cmd { ____Placeholder_set_key_cmd } set_key_cmd ;
struct TYPE_2__ {int sw_mgmt_crypto; } ;


 int VAR_0 ;

 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;

 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int FUNC_0 (struct ath9k_htc_priv*) ;
 int FUNC_1 (struct ath9k_htc_priv*) ;
 struct ath_common* FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (struct ath_common*,int ,char*) ;
 int FUNC_4 (struct ath_common*,struct ieee80211_vif*,struct ieee80211_sta*,struct ieee80211_key_conf*) ;
 int FUNC_5 (struct ath_common*,struct ieee80211_key_conf*) ;
 scalar_t__ VAR_12 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct ieee80211_hw *VAR_13,
        enum set_key_cmd VAR_14,
        struct ieee80211_vif *VAR_15,
        struct ieee80211_sta *VAR_16,
        struct ieee80211_key_conf *VAR_17)
{
 struct ath9k_htc_priv *VAR_18 = VAR_13->priv;
 struct ath_common *VAR_19 = FUNC_2(VAR_18->ah);
 int VAR_20 = 0;

 if (VAR_12)
  return -VAR_2;

 if ((VAR_15->type == VAR_8 ||
      VAR_15->type == VAR_9) &&
     (VAR_17->cipher == VAR_11 ||
      VAR_17->cipher == VAR_10) &&
     !(VAR_17->flags & VAR_6)) {







  return -VAR_3;
 }

 FUNC_6(&VAR_18->mutex);
 FUNC_3(VAR_19, VAR_0, "Set HW Key\n");
 FUNC_1(VAR_18);

 switch (VAR_14) {
 case 128:
  VAR_20 = FUNC_4(VAR_19, VAR_15, VAR_16, VAR_17);
  if (VAR_20 >= 0) {
   VAR_17->hw_key_idx = VAR_20;

   VAR_17->flags |= VAR_4;
   if (VAR_17->cipher == VAR_11)
    VAR_17->flags |= VAR_5;
   if (VAR_18->ah->sw_mgmt_crypto &&
       VAR_17->cipher == VAR_10)
    VAR_17->flags |= VAR_7;
   VAR_20 = 0;
  }
  break;
 case 129:
  FUNC_5(VAR_19, VAR_17);
  break;
 default:
  VAR_20 = -VAR_1;
 }

 FUNC_0(VAR_18);
 FUNC_7(&VAR_18->mutex);

 return VAR_20;
}
