
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u16 ;
struct iwl_mvm_vif {int monitor_active; int ap_active; TYPE_1__* phy_ctxt; } ;
struct iwl_mvm_quota_iterator_data {scalar_t__* colors; int * n_interfaces; struct ieee80211_vif* new_vif; } ;
struct TYPE_4__ {int ibss_joined; int assoc; } ;
struct ieee80211_vif {int type; TYPE_2__ bss_conf; } ;
struct TYPE_3__ {scalar_t__ id; scalar_t__ color; } ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;





 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (int) ;
 struct iwl_mvm_vif* FUNC_2 (struct ieee80211_vif*) ;

__attribute__((used)) static void FUNC_3(void *VAR_2, u8 *VAR_3,
       struct ieee80211_vif *VAR_4)
{
 struct iwl_mvm_quota_iterator_data *VAR_5 = VAR_2;
 struct iwl_mvm_vif *VAR_6 = FUNC_2(VAR_4);
 u16 VAR_7;







 if (VAR_4 == VAR_5->new_vif)
  return;

 if (!VAR_6->phy_ctxt)
  return;


 VAR_7 = VAR_6->phy_ctxt->id;


 FUNC_0(VAR_1 > VAR_0);

 if (FUNC_1(VAR_7 >= VAR_0))
  return;

 if (VAR_5->colors[VAR_7] < 0)
  VAR_5->colors[VAR_7] = VAR_6->phy_ctxt->color;
 else
  FUNC_1(VAR_5->colors[VAR_7] != VAR_6->phy_ctxt->color);

 switch (VAR_4->type) {
 case 128:
  if (VAR_4->bss_conf.assoc)
   VAR_5->n_interfaces[VAR_7]++;
  break;
 case 131:
  if (VAR_6->ap_active)
   VAR_5->n_interfaces[VAR_7]++;
  break;
 case 130:
  if (VAR_6->monitor_active)
   VAR_5->n_interfaces[VAR_7]++;
  break;
 case 129:
  break;
 case 132:
  if (VAR_4->bss_conf.ibss_joined)
   VAR_5->n_interfaces[VAR_7]++;
  break;
 default:
  FUNC_1(1);
  break;
 }
}
