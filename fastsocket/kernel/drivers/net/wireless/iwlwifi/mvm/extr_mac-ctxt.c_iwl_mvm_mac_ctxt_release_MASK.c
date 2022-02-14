
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct iwl_mvm {int trans; int mutex; } ;
struct ieee80211_vif {int type; int * hw_queue; int cab_queue; } ;


 int VAR_0 ;
 int VAR_1 ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct iwl_mvm *VAR_2, struct ieee80211_vif *VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_2->mutex);

 switch (VAR_3->type) {
 case 128:
  FUNC_0(VAR_2->trans, VAR_1);
  break;
 case 129:
  FUNC_0(VAR_2->trans, VAR_3->cab_queue);

 default:
  for (VAR_4 = 0; VAR_4 < VAR_0; VAR_4++)
   FUNC_0(VAR_2->trans, VAR_3->hw_queue[VAR_4]);
 }
}
