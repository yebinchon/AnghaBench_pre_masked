
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct sk_buff {scalar_t__ data; } ;
struct il_priv {TYPE_3__* ops; int lock; int timestamp; struct sk_buff* beacon_skb; int beacon_enabled; int mutex; } ;
struct ieee80211_vif {int dummy; } ;
struct TYPE_4__ {int timestamp; } ;
struct TYPE_5__ {TYPE_1__ beacon; } ;
struct ieee80211_mgmt {TYPE_2__ u; } ;
struct ieee80211_hw {struct il_priv* priv; } ;
typedef int __le64 ;
struct TYPE_6__ {int (* post_associate ) (struct il_priv*) ;} ;


 int FUNC_0 (char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct sk_buff*) ;
 struct sk_buff* FUNC_3 (struct ieee80211_hw*,struct ieee80211_vif*) ;
 int FUNC_4 (struct il_priv*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,unsigned long) ;
 int FUNC_8 (int *,unsigned long) ;
 int FUNC_9 (struct il_priv*) ;

__attribute__((used)) static void
FUNC_10(struct ieee80211_hw *VAR_0, struct ieee80211_vif *VAR_1)
{
 struct il_priv *VAR_2 = VAR_0->priv;
 unsigned long VAR_3;
 __le64 VAR_4;
 struct sk_buff *VAR_5 = FUNC_3(VAR_0, VAR_1);

 if (!VAR_5)
  return;

 FUNC_0("enter\n");

 FUNC_6(&VAR_2->mutex);

 if (!VAR_2->beacon_enabled) {
  FUNC_1("update beacon with no beaconing enabled\n");
  FUNC_2(VAR_5);
  return;
 }

 FUNC_7(&VAR_2->lock, VAR_3);

 if (VAR_2->beacon_skb)
  FUNC_2(VAR_2->beacon_skb);

 VAR_2->beacon_skb = VAR_5;

 VAR_4 = ((struct ieee80211_mgmt *)VAR_5->data)->u.beacon.timestamp;
 VAR_2->timestamp = FUNC_5(VAR_4);

 FUNC_0("leave\n");
 FUNC_8(&VAR_2->lock, VAR_3);

 if (!FUNC_4(VAR_2)) {
  FUNC_0("leave - RF not ready\n");
  return;
 }

 VAR_2->ops->post_associate(VAR_2);
}
