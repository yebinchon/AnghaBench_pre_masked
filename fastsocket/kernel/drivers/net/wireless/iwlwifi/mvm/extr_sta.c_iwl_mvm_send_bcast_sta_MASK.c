
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct iwl_mvm_vif {int color; int id; } ;
struct iwl_mvm_int_sta {scalar_t__ sta_id; } ;
struct iwl_mvm {int mutex; } ;
struct ieee80211_vif {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct iwl_mvm*,struct iwl_mvm_int_sta*,int const*,int ,int ) ;
 struct iwl_mvm_vif* FUNC_2 (struct ieee80211_vif*) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct iwl_mvm *VAR_2, struct ieee80211_vif *VAR_3,
      struct iwl_mvm_int_sta *VAR_4)
{
 struct iwl_mvm_vif *VAR_5 = FUNC_2(VAR_3);
 static const u8 VAR_6[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};

 FUNC_3(&VAR_2->mutex);

 if (FUNC_0(VAR_4->sta_id == VAR_1))
  return -VAR_0;

 return FUNC_1(VAR_2, VAR_4, VAR_6,
       VAR_5->id, VAR_5->color);
}
