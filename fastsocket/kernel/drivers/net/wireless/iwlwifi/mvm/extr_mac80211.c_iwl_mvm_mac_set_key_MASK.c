
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct iwl_mvm {int mutex; } ;
struct ieee80211_vif {int type; } ;
struct ieee80211_sta {int dummy; } ;
struct ieee80211_key_conf {int cipher; void* hw_key_idx; int flags; } ;
struct ieee80211_hw {int flags; } ;
typedef enum set_key_cmd { ____Placeholder_set_key_cmd } set_key_cmd ;
struct TYPE_2__ {scalar_t__ sw_crypto; } ;



 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct iwl_mvm*,char*) ;
 struct iwl_mvm* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (struct iwl_mvm*,char*) ;
 int VAR_5 ;

 void* VAR_6 ;
 int FUNC_3 (int) ;





 int FUNC_4 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_sta*,struct ieee80211_key_conf*) ;
 int FUNC_5 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_sta*,struct ieee80211_key_conf*,int) ;
 TYPE_1__ VAR_7 ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct ieee80211_hw *VAR_8,
          enum set_key_cmd VAR_9,
          struct ieee80211_vif *VAR_10,
          struct ieee80211_sta *VAR_11,
          struct ieee80211_key_conf *VAR_12)
{
 struct iwl_mvm *VAR_13 = FUNC_1(VAR_8);
 int VAR_14;

 if (VAR_7.sw_crypto) {
  FUNC_0(VAR_13, "leave - hwcrypto disabled\n");
  return -VAR_1;
 }

 switch (VAR_12->cipher) {
 case 130:
  VAR_12->flags |= VAR_4;

 case 131:
  VAR_12->flags |= VAR_3;
  break;
 case 132:
  FUNC_3(!(VAR_8->flags & VAR_2));
  break;
 case 128:
 case 129:





  return 0;
 default:
  return -VAR_1;
 }

 FUNC_6(&VAR_13->mutex);

 switch (VAR_9) {
 case 133:
  if (VAR_10->type == VAR_5 && !VAR_11) {

   VAR_14 = 0;
   VAR_12->hw_key_idx = VAR_6;
   break;
  }

  FUNC_0(VAR_13, "set hwcrypto key\n");
  VAR_14 = FUNC_5(VAR_13, VAR_10, VAR_11, VAR_12, 0);
  if (VAR_14) {
   FUNC_2(VAR_13, "set key failed\n");




   VAR_12->hw_key_idx = VAR_6;
   VAR_14 = 0;
  }

  break;
 case 134:
  if (VAR_12->hw_key_idx == VAR_6) {
   VAR_14 = 0;
   break;
  }

  FUNC_0(VAR_13, "disable hwcrypto key\n");
  VAR_14 = FUNC_4(VAR_13, VAR_10, VAR_11, VAR_12);
  break;
 default:
  VAR_14 = -VAR_0;
 }

 FUNC_7(&VAR_13->mutex);
 return VAR_14;
}
