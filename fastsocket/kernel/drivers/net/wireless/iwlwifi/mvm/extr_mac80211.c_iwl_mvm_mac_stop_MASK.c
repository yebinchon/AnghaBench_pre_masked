
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int async_handlers_wk; int mutex; int aux_sta; int trans; int roc_done_wk; } ;
struct ieee80211_hw {int dummy; } ;


 struct iwl_mvm* FUNC_0 (struct ieee80211_hw*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct iwl_mvm*) ;
 int FUNC_4 (struct iwl_mvm*,int *) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(struct ieee80211_hw *VAR_0)
{
 struct iwl_mvm *VAR_1 = FUNC_0(VAR_0);

 FUNC_2(&VAR_1->async_handlers_wk);

 FUNC_7(&VAR_1->mutex);






 FUNC_1(&VAR_1->roc_done_wk);

 FUNC_5(VAR_1->trans);
 FUNC_6(VAR_1->trans, 0);

 FUNC_3(VAR_1);



 FUNC_4(VAR_1, &VAR_1->aux_sta);

 FUNC_8(&VAR_1->mutex);





 FUNC_1(&VAR_1->async_handlers_wk);
}
