
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct iwl_mvm {int last_bt_notif; } ;
struct ieee80211_vif {int chanctx_conf; } ;
struct TYPE_4__ {TYPE_1__* chan; } ;
struct ieee80211_chanctx_conf {TYPE_2__ def; } ;
typedef enum ieee80211_band { ____Placeholder_ieee80211_band } ieee80211_band ;
struct TYPE_3__ {int band; } ;


 int VAR_0 ;
 int FUNC_0 (struct iwl_mvm*) ;
 int FUNC_1 (int *,int ,int) ;
 struct ieee80211_chanctx_conf* FUNC_2 (int ) ;
 int FUNC_3 () ;
 int FUNC_4 () ;

void FUNC_5(struct iwl_mvm *VAR_1, struct ieee80211_vif *VAR_2)
{
 struct ieee80211_chanctx_conf *VAR_3;
 enum ieee80211_band VAR_4;

 FUNC_3();
 VAR_3 = FUNC_2(VAR_2->chanctx_conf);
 if (VAR_3 && VAR_3->def.chan)
  VAR_4 = VAR_3->def.chan->band;
 else
  VAR_4 = -1;
 FUNC_4();


 if (VAR_4 == VAR_0)
  return;


 FUNC_1(&VAR_1->last_bt_notif, 0, sizeof(VAR_1->last_bt_notif));

 FUNC_0(VAR_1);
}
