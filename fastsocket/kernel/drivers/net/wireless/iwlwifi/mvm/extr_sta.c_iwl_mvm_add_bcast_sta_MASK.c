
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct iwl_mvm_vif {int color; int id; } ;
struct iwl_mvm_int_sta {int dummy; } ;
struct iwl_mvm {int mutex; } ;
struct ieee80211_vif {int dummy; } ;


 int FUNC_0 (struct iwl_mvm*,struct iwl_mvm_int_sta*,int const*,int ,int ) ;
 int FUNC_1 (struct iwl_mvm*,struct iwl_mvm_int_sta*,int ) ;
 int FUNC_2 (struct iwl_mvm*,struct iwl_mvm_int_sta*) ;
 int FUNC_3 (struct iwl_mvm*,struct ieee80211_vif*) ;
 struct iwl_mvm_vif* FUNC_4 (struct ieee80211_vif*) ;
 int FUNC_5 (int *) ;

int FUNC_6(struct iwl_mvm *VAR_0, struct ieee80211_vif *VAR_1,
     struct iwl_mvm_int_sta *VAR_2)
{
 struct iwl_mvm_vif *VAR_3 = FUNC_4(VAR_1);
 static const u8 VAR_4[] = {0xFF, 0xFF, 0xFF, 0xFF, 0xFF, 0xFF};
 u32 VAR_5;
 int VAR_6;

 FUNC_5(&VAR_0->mutex);

 VAR_5 = FUNC_3(VAR_0, VAR_1);
 VAR_6 = FUNC_1(VAR_0, VAR_2, VAR_5);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_0, VAR_2, VAR_4,
      VAR_3->id, VAR_3->color);

 if (VAR_6)
  FUNC_2(VAR_0, VAR_2);
 return VAR_6;
}
