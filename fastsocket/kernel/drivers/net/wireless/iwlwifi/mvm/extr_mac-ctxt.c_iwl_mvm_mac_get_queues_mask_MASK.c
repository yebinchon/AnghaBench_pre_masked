
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u32 ;
struct iwl_mvm {int dummy; } ;
struct ieee80211_vif {scalar_t__ type; scalar_t__* hw_queue; } ;


 size_t FUNC_0 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

u32 FUNC_1(struct iwl_mvm *VAR_4,
    struct ieee80211_vif *VAR_5)
{
 u32 VAR_6 = 0, VAR_7;

 if (VAR_5->type == VAR_3)
  return FUNC_0(VAR_2);

 for (VAR_7 = 0; VAR_7 < VAR_1; VAR_7++)
  if (VAR_5->hw_queue[VAR_7] != VAR_0)
   VAR_6 |= FUNC_0(VAR_5->hw_queue[VAR_7]);

 return VAR_6;
}
