
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_vif {int uploaded; int color; int id; } ;
struct iwl_mvm {int dummy; } ;
struct iwl_mac_ctx_cmd {void* action; void* id_and_color; } ;
struct ieee80211_vif {int addr; } ;
typedef int cmd ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (struct iwl_mvm*,char*,int) ;
 int VAR_3 ;
 scalar_t__ FUNC_2 (int,char*,int ,int ) ;
 void* FUNC_3 (int ) ;
 int FUNC_4 (struct ieee80211_vif*) ;
 int FUNC_5 (struct iwl_mvm*,int ,int ,int,struct iwl_mac_ctx_cmd*) ;
 struct iwl_mvm_vif* FUNC_6 (struct ieee80211_vif*) ;
 int FUNC_7 (struct iwl_mac_ctx_cmd*,int ,int) ;

int FUNC_8(struct iwl_mvm *VAR_4, struct ieee80211_vif *VAR_5)
{
 struct iwl_mvm_vif *VAR_6 = FUNC_6(VAR_5);
 struct iwl_mac_ctx_cmd VAR_7;
 int VAR_8;

 if (FUNC_2(!VAR_6->uploaded, "Removing inactive MAC %pM/%d\n",
        VAR_5->addr, FUNC_4(VAR_5)))
  return -VAR_1;

 FUNC_7(&VAR_7, 0, sizeof(VAR_7));

 VAR_7.id_and_color = FUNC_3(FUNC_0(VAR_6->id,
          VAR_6->color));
 VAR_7.action = FUNC_3(VAR_2);

 VAR_8 = FUNC_5(VAR_4, VAR_3, VAR_0,
       sizeof(VAR_7), &VAR_7);
 if (VAR_8) {
  FUNC_1(VAR_4, "Failed to remove MAC context: %d\n", VAR_8);
  return VAR_8;
 }

 VAR_6->uploaded = 0;
 return 0;
}
