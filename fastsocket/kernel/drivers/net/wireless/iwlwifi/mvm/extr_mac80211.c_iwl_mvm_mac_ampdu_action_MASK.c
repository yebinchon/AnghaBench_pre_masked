
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct iwl_mvm {int mutex; TYPE_1__* nvm_data; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; } ;
struct ieee80211_hw {int dummy; } ;
typedef enum ieee80211_ampdu_mlme_action { ____Placeholder_ieee80211_ampdu_mlme_action } ieee80211_ampdu_mlme_action ;
struct TYPE_4__ {int disable_11n; } ;
struct TYPE_3__ {int sku_cap_11n_enable; } ;


 int VAR_0 ;
 int VAR_1 ;







 int FUNC_0 (struct iwl_mvm*,char*,int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 struct iwl_mvm* FUNC_1 (struct ieee80211_hw*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct iwl_mvm*,struct ieee80211_sta*,int ,int ,int) ;
 int FUNC_4 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_sta*,int ) ;
 int FUNC_5 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_sta*,int ,int ) ;
 int FUNC_6 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_sta*,int ,int *) ;
 int FUNC_7 (struct iwl_mvm*,struct ieee80211_vif*,struct ieee80211_sta*,int ) ;
 TYPE_2__ VAR_4 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static int FUNC_10(struct ieee80211_hw *VAR_5,
        struct ieee80211_vif *VAR_6,
        enum ieee80211_ampdu_mlme_action VAR_7,
        struct ieee80211_sta *VAR_8, u16 VAR_9,
        u16 *VAR_10, u8 VAR_11)
{
 struct iwl_mvm *VAR_12 = FUNC_1(VAR_5);
 int VAR_13;

 FUNC_0(VAR_12, "A-MPDU action on addr %pM tid %d: action %d\n",
       VAR_8->addr, VAR_9, VAR_7);

 if (!(VAR_12->nvm_data->sku_cap_11n_enable))
  return -VAR_0;

 FUNC_8(&VAR_12->mutex);

 switch (VAR_7) {
 case 134:
  if (VAR_4.disable_11n & VAR_2) {
   VAR_13 = -VAR_1;
   break;
  }
  VAR_13 = FUNC_3(VAR_12, VAR_8, VAR_9, *VAR_10, 1);
  break;
 case 133:
  VAR_13 = FUNC_3(VAR_12, VAR_8, VAR_9, 0, 0);
  break;
 case 131:
  if (VAR_4.disable_11n & VAR_3) {
   VAR_13 = -VAR_1;
   break;
  }
  VAR_13 = FUNC_6(VAR_12, VAR_6, VAR_8, VAR_9, VAR_10);
  break;
 case 130:
  VAR_13 = FUNC_7(VAR_12, VAR_6, VAR_8, VAR_9);
  break;
 case 129:
 case 128:
  VAR_13 = FUNC_4(VAR_12, VAR_6, VAR_8, VAR_9);
  break;
 case 132:
  VAR_13 = FUNC_5(VAR_12, VAR_6, VAR_8, VAR_9, VAR_11);
  break;
 default:
  FUNC_2(1);
  VAR_13 = -VAR_1;
  break;
 }
 FUNC_9(&VAR_12->mutex);

 return VAR_13;
}
