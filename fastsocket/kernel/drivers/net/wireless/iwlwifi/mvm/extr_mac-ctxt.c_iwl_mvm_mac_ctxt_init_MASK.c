
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct iwl_mvm {int trans; int mutex; } ;
struct ieee80211_vif {int type; int * hw_queue; int cab_queue; } ;


 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;


 int * VAR_4 ;
 int FUNC_0 (struct iwl_mvm*,struct ieee80211_vif*) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct iwl_mvm *VAR_5, struct ieee80211_vif *VAR_6)
{
 u32 VAR_7;
 int VAR_8;

 FUNC_2(&VAR_5->mutex);

 VAR_8 = FUNC_0(VAR_5, VAR_6);
 if (VAR_8)
  return VAR_8;

 switch (VAR_6->type) {
 case 128:
  FUNC_1(VAR_5->trans, VAR_1,
     VAR_3);
  break;
 case 129:
  FUNC_1(VAR_5->trans, VAR_6->cab_queue,
     VAR_2);

 default:
  for (VAR_7 = 0; VAR_7 < VAR_0; VAR_7++)
   FUNC_1(VAR_5->trans, VAR_6->hw_queue[VAR_7],
      VAR_4[VAR_7]);
  break;
 }

 return 0;
}
