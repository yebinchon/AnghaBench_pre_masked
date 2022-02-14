
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef size_t u8 ;
struct TYPE_10__ {int state; int ssn; int txq_id; } ;
struct iwl_tid_data {TYPE_5__ agg; int next_reclaimed; } ;
struct iwl_priv {int trans; struct iwl_tid_data** tid_data; TYPE_4__* contexts; TYPE_3__* stations; int sta_lock; } ;
struct ieee80211_vif {int dummy; } ;
typedef enum iwl_rxon_context_id { ____Placeholder_iwl_rxon_context_id } iwl_rxon_context_id ;
struct TYPE_9__ {struct ieee80211_vif* vif; } ;
struct TYPE_6__ {size_t* addr; } ;
struct TYPE_7__ {TYPE_1__ sta; } ;
struct TYPE_8__ {int ctxid; TYPE_2__ sta; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct iwl_priv*,char*,int ) ;


 int FUNC_1 (struct ieee80211_vif*,size_t*,size_t) ;
 int FUNC_2 (struct ieee80211_vif*,size_t*,size_t) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (struct iwl_priv*,int ) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct iwl_priv *VAR_2, int VAR_3, u8 VAR_4)
{
 struct iwl_tid_data *VAR_5 = &VAR_2->tid_data[VAR_3][VAR_4];
 enum iwl_rxon_context_id VAR_6;
 struct ieee80211_vif *VAR_7;
 u8 *VAR_8;

 FUNC_5(&VAR_2->sta_lock);

 VAR_8 = VAR_2->stations[VAR_3].sta.sta.addr;
 VAR_6 = VAR_2->stations[VAR_3].ctxid;
 VAR_7 = VAR_2->contexts[VAR_6].vif;

 switch (VAR_2->tid_data[VAR_3][VAR_4].agg.state) {
 case 128:

  if (VAR_5->agg.ssn == VAR_5->next_reclaimed) {
   FUNC_0(VAR_2,
    "Can continue DELBA flow ssn = next_recl ="
    " %d", VAR_5->next_reclaimed);
   FUNC_3(VAR_2->trans,
           VAR_5->agg.txq_id);
   FUNC_4(VAR_2, VAR_5->agg.txq_id);
   VAR_5->agg.state = VAR_0;
   FUNC_2(VAR_7, VAR_8, VAR_4);
  }
  break;
 case 129:

  if (VAR_5->agg.ssn == VAR_5->next_reclaimed) {
   FUNC_0(VAR_2,
    "Can continue ADDBA flow ssn = next_recl ="
    " %d", VAR_5->next_reclaimed);
   VAR_5->agg.state = VAR_1;
   FUNC_1(VAR_7, VAR_8, VAR_4);
  }
  break;
 default:
  break;
 }
}
