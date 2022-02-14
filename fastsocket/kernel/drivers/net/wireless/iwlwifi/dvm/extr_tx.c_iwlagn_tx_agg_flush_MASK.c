
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_2__ {int txq_id; int state; } ;
struct iwl_tid_data {TYPE_1__ agg; } ;
struct iwl_priv {int trans; int agg_q_alloc; int sta_lock; struct iwl_tid_data** tid_data; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int dummy; } ;
typedef enum iwl_agg_state { ____Placeholder_iwl_agg_state } iwl_agg_state ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct iwl_priv*,char*,int,...) ;
 int FUNC_2 (struct iwl_priv*,char*) ;
 int FUNC_3 (struct ieee80211_sta*) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct iwl_priv*,int) ;
 scalar_t__ FUNC_6 (struct iwl_priv*,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 scalar_t__ FUNC_9 (int,int ) ;

int FUNC_10(struct iwl_priv *VAR_2, struct ieee80211_vif *VAR_3,
   struct ieee80211_sta *VAR_4, u16 VAR_5)
{
 struct iwl_tid_data *VAR_6;
 enum iwl_agg_state VAR_7;
 int VAR_8, VAR_9;
 VAR_8 = FUNC_3(VAR_4);





 FUNC_7(&VAR_2->sta_lock);

 VAR_6 = &VAR_2->tid_data[VAR_8][VAR_5];
 VAR_9 = VAR_6->agg.txq_id;
 VAR_7 = VAR_6->agg.state;
 FUNC_1(VAR_2, "Flush AGG: sta %d tid %d q %d state %d\n",
       VAR_8, VAR_5, VAR_9, VAR_6->agg.state);

 VAR_6->agg.state = VAR_0;

 FUNC_8(&VAR_2->sta_lock);

 if (FUNC_6(VAR_2, FUNC_0(VAR_9)))
  FUNC_2(VAR_2, "Couldn't flush the AGG queue\n");

 if (FUNC_9(VAR_9, VAR_2->agg_q_alloc)) {






  if (VAR_7 == VAR_1)
   FUNC_4(VAR_2->trans, VAR_9);
  else
   FUNC_1(VAR_2, "Don't disable tx agg: %d\n",
         VAR_7);
  FUNC_5(VAR_2, VAR_9);
 }

 return 0;
}
