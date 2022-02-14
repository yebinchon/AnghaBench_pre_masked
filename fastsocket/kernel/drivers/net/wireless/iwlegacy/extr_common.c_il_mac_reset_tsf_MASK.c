
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int filter_flags; } ;
struct il_priv {int mutex; TYPE_1__ staging; int lock; scalar_t__ timestamp; int * beacon_skb; int current_ht_config; } ;
struct il_ht_config {int dummy; } ;
struct ieee80211_vif {int addr; int type; } ;
struct ieee80211_hw {struct il_priv* priv; } ;


 int FUNC_0 (char*,...) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct il_priv*) ;
 int FUNC_3 (struct il_priv*) ;
 int FUNC_4 (struct il_priv*,int) ;
 int FUNC_5 (struct il_priv*) ;
 int FUNC_6 (int *,int ,int) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *,unsigned long) ;
 int FUNC_10 (int *,unsigned long) ;

void
FUNC_11(struct ieee80211_hw *VAR_1, struct ieee80211_vif *VAR_2)
{
 struct il_priv *VAR_3 = VAR_1->priv;
 unsigned long VAR_4;

 FUNC_7(&VAR_3->mutex);
 FUNC_0("enter: type %d, addr %pM\n", VAR_2->type, VAR_2->addr);

 FUNC_9(&VAR_3->lock, VAR_4);

 FUNC_6(&VAR_3->current_ht_config, 0, sizeof(struct il_ht_config));


 if (VAR_3->beacon_skb)
  FUNC_1(VAR_3->beacon_skb);
 VAR_3->beacon_skb = ((void*)0);
 VAR_3->timestamp = 0;

 FUNC_10(&VAR_3->lock, VAR_4);

 FUNC_4(VAR_3, 100);
 if (!FUNC_3(VAR_3)) {
  FUNC_0("leave - not ready\n");
  FUNC_8(&VAR_3->mutex);
  return;
 }


 VAR_3->staging.filter_flags &= ~VAR_0;
 FUNC_2(VAR_3);

 FUNC_5(VAR_3);

 FUNC_0("leave\n");
 FUNC_8(&VAR_3->mutex);
}
