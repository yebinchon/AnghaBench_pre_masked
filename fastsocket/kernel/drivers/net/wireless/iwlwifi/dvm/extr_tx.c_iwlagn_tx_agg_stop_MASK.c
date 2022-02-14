
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u16 ;
struct TYPE_2__ {int txq_id; int state; int ssn; } ;
struct iwl_tid_data {int next_reclaimed; TYPE_1__ agg; int seq_number; } ;
struct iwl_priv {int trans; int agg_q_alloc; int sta_lock; struct iwl_tid_data** tid_data; } ;
struct ieee80211_vif {int dummy; } ;
struct ieee80211_sta {int addr; } ;
typedef enum iwl_agg_state { ____Placeholder_iwl_agg_state } iwl_agg_state ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;


 int FUNC_1 (struct iwl_priv*,char*) ;
 int FUNC_2 (struct iwl_priv*,char*,int,...) ;

 int VAR_2 ;
 int FUNC_3 (struct iwl_priv*,char*,size_t) ;
 int VAR_3 ;
 int FUNC_4 (struct iwl_priv*,char*,int,size_t,int) ;
 int FUNC_5 (struct ieee80211_vif*,int ,size_t) ;
 int FUNC_6 (struct ieee80211_sta*) ;
 int FUNC_7 (int ,int) ;
 int FUNC_8 (struct iwl_priv*,int) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int,int ) ;

int FUNC_12(struct iwl_priv *VAR_4, struct ieee80211_vif *VAR_5,
   struct ieee80211_sta *VAR_6, u16 VAR_7)
{
 struct iwl_tid_data *VAR_8;
 int VAR_9, VAR_10;
 enum iwl_agg_state VAR_11;

 VAR_9 = FUNC_6(VAR_6);

 if (VAR_9 == VAR_3) {
  FUNC_3(VAR_4, "Invalid station for AGG tid %d\n", VAR_7);
  return -VAR_0;
 }

 FUNC_9(&VAR_4->sta_lock);

 VAR_8 = &VAR_4->tid_data[VAR_9][VAR_7];
 VAR_10 = VAR_8->agg.txq_id;

 switch (VAR_8->agg.state) {
 case 128:






  FUNC_1(VAR_4, "AGG stop before setup done\n");
  goto turn_off;
 case 129:




  FUNC_1(VAR_4, "AGG stop before AGG became operational\n");
  goto turn_off;
 case 130:
  break;
 default:
  FUNC_4(VAR_4,
    "Stopping AGG while state not ON or starting for %d on %d (%d)\n",
    VAR_9, VAR_7, VAR_8->agg.state);
  FUNC_10(&VAR_4->sta_lock);
  return 0;
 }

 VAR_8->agg.ssn = FUNC_0(VAR_8->seq_number);


 if (!FUNC_11(VAR_10, VAR_4->agg_q_alloc)) {
  FUNC_2(VAR_4,
   "stopping AGG on STA/TID %d/%d but hwq %d not used\n",
   VAR_9, VAR_7, VAR_10);
 } else if (VAR_8->agg.ssn != VAR_8->next_reclaimed) {
  FUNC_2(VAR_4,
        "Can't proceed: ssn %d, next_recl = %d\n",
        VAR_8->agg.ssn,
        VAR_8->next_reclaimed);
  VAR_8->agg.state = VAR_2;
  FUNC_10(&VAR_4->sta_lock);
  return 0;
 }

 FUNC_2(VAR_4, "Can proceed: ssn = next_recl = %d\n",
       VAR_8->agg.ssn);
turn_off:
 VAR_11 = VAR_8->agg.state;
 VAR_8->agg.state = VAR_1;

 FUNC_10(&VAR_4->sta_lock);

 if (FUNC_11(VAR_10, VAR_4->agg_q_alloc)) {






  if (VAR_11 == 130)
   FUNC_7(VAR_4->trans, VAR_10);
  else
   FUNC_2(VAR_4, "Don't disable tx agg: %d\n",
         VAR_11);
  FUNC_8(VAR_4, VAR_10);
 }

 FUNC_5(VAR_5, VAR_6->addr, VAR_7);

 return 0;
}
