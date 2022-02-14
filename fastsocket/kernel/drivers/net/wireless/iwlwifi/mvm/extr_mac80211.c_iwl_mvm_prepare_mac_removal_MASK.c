
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct iwl_mvm {int sta_drained_wk; int roc_done_wk; int mutex; } ;
struct ieee80211_vif {scalar_t__* hw_queue; scalar_t__ cab_queue; scalar_t__ type; } ;


 size_t FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct iwl_mvm*,size_t,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static void FUNC_5(struct iwl_mvm *VAR_3,
     struct ieee80211_vif *VAR_4)
{
 u32 VAR_5 = 0, VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++)
  if (VAR_4->hw_queue[VAR_6] != VAR_0)
   VAR_5 |= FUNC_0(VAR_4->hw_queue[VAR_6]);

 if (VAR_4->cab_queue != VAR_0)
  VAR_5 |= FUNC_0(VAR_4->cab_queue);

 if (VAR_5) {
  FUNC_3(&VAR_3->mutex);
  FUNC_2(VAR_3, VAR_5, 1);
  FUNC_4(&VAR_3->mutex);
 }

 if (VAR_4->type == VAR_2) {





  FUNC_1(&VAR_3->roc_done_wk);
 } else {







  FUNC_1(&VAR_3->sta_drained_wk);
 }
}
