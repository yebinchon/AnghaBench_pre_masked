
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int mutex; int status; } ;
struct ieee80211_hw {int dummy; } ;


 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 int VAR_0 ;
 int FUNC_1 (struct iwl_mvm*) ;
 int FUNC_2 (struct iwl_mvm*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ,int *) ;

__attribute__((used)) static int FUNC_6(struct ieee80211_hw *VAR_1)
{
 struct iwl_mvm *VAR_2 = FUNC_0(VAR_1);
 int VAR_3;

 FUNC_3(&VAR_2->mutex);


 if (FUNC_5(VAR_0, &VAR_2->status))
  FUNC_1(VAR_2);

 VAR_3 = FUNC_2(VAR_2);
 FUNC_4(&VAR_2->mutex);

 return VAR_3;
}
