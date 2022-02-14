
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int mutex; int status; } ;
struct ieee80211_hw {int dummy; } ;


 int FUNC_0 (struct iwl_mvm*,char*,int) ;
 struct iwl_mvm* FUNC_1 (struct ieee80211_hw*) ;
 int VAR_0 ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (struct iwl_mvm*,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct ieee80211_hw *VAR_1)
{
 struct iwl_mvm *VAR_2 = FUNC_1(VAR_1);
 int VAR_3;

 FUNC_4(&VAR_2->mutex);

 FUNC_2(VAR_0, &VAR_2->status);
 VAR_3 = FUNC_3(VAR_2, ((void*)0));
 if (VAR_3)
  FUNC_0(VAR_2, "Failed to update quotas after restart (%d)\n",
   VAR_3);

 FUNC_5(&VAR_2->mutex);
}
