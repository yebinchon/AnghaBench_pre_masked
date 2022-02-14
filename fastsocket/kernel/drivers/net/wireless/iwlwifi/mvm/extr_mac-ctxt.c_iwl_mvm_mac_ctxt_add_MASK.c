
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm_vif {int uploaded; } ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_vif {int addr; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int,char*,int ,int ) ;
 int FUNC_1 (struct ieee80211_vif*) ;
 int FUNC_2 (struct iwl_mvm*,struct ieee80211_vif*,int ) ;
 struct iwl_mvm_vif* FUNC_3 (struct ieee80211_vif*) ;

int FUNC_4(struct iwl_mvm *VAR_2, struct ieee80211_vif *VAR_3)
{
 struct iwl_mvm_vif *VAR_4 = FUNC_3(VAR_3);
 int VAR_5;

 if (FUNC_0(VAR_4->uploaded, "Adding active MAC %pM/%d\n",
        VAR_3->addr, FUNC_1(VAR_3)))
  return -VAR_0;

 VAR_5 = FUNC_2(VAR_2, VAR_3, VAR_1);
 if (VAR_5)
  return VAR_5;

 VAR_4->uploaded = 1;
 return 0;
}
