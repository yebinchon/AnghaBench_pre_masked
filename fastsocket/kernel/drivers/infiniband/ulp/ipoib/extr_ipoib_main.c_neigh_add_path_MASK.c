
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_3__ {int tx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;
struct ipoib_path {int query; TYPE_2__* ah; int neigh_list; } ;
struct ipoib_neigh {int queue; TYPE_2__* ah; int daddr; int list; } ;
struct ipoib_dev_priv {int lock; } ;
struct TYPE_4__ {int ref; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct net_device*,struct ipoib_path*) ;
 struct ipoib_path* FUNC_2 (struct net_device*,int *) ;
 int FUNC_3 (int *,struct sk_buff*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (struct net_device*,struct ipoib_path*,struct ipoib_neigh*) ;
 scalar_t__ FUNC_6 (struct net_device*,int ) ;
 int FUNC_7 (struct ipoib_neigh*) ;
 int FUNC_8 (struct ipoib_neigh*,int ) ;
 struct ipoib_neigh* FUNC_9 (int *,struct net_device*) ;
 int FUNC_10 (struct ipoib_neigh*) ;
 int FUNC_11 (struct ipoib_neigh*) ;
 int FUNC_12 (struct net_device*,struct sk_buff*,TYPE_2__*,int ) ;
 int FUNC_13 (struct ipoib_dev_priv*,char*,scalar_t__) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (int *,int *) ;
 struct ipoib_dev_priv* FUNC_16 (struct net_device*) ;
 struct ipoib_path* FUNC_17 (struct net_device*,int *) ;
 scalar_t__ FUNC_18 (struct net_device*,struct ipoib_path*) ;
 scalar_t__ FUNC_19 (int *) ;
 int FUNC_20 (int *,unsigned long) ;
 int FUNC_21 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_22(struct sk_buff *VAR_1, u8 *VAR_2,
      struct net_device *VAR_3)
{
 struct ipoib_dev_priv *VAR_4 = FUNC_16(VAR_3);
 struct ipoib_path *VAR_5;
 struct ipoib_neigh *VAR_6;
 unsigned long VAR_7;

 FUNC_20(&VAR_4->lock, VAR_7);
 VAR_6 = FUNC_9(VAR_2, VAR_3);
 if (!VAR_6) {
  FUNC_21(&VAR_4->lock, VAR_7);
  ++VAR_3->stats.tx_dropped;
  FUNC_4(VAR_1);
  return;
 }

 VAR_5 = FUNC_2(VAR_3, VAR_2 + 4);
 if (!VAR_5) {
  VAR_5 = FUNC_17(VAR_3, VAR_2 + 4);
  if (!VAR_5)
   goto err_path;

  FUNC_1(VAR_3, VAR_5);
 }

 FUNC_15(&VAR_6->list, &VAR_5->neigh_list);

 if (VAR_5->ah) {
  FUNC_14(&VAR_5->ah->ref);
  VAR_6->ah = VAR_5->ah;

  if (FUNC_6(VAR_3, VAR_6->daddr)) {
   if (!FUNC_7(VAR_6))
    FUNC_8(VAR_6, FUNC_5(VAR_3, VAR_5, VAR_6));
   if (!FUNC_7(VAR_6)) {
    FUNC_10(VAR_6);
    goto err_drop;
   }
   if (FUNC_19(&VAR_6->queue) < VAR_0)
    FUNC_3(&VAR_6->queue, VAR_1);
   else {
    FUNC_13(VAR_4, "queue length limit %d. Packet drop.\n",
        FUNC_19(&VAR_6->queue));
    goto err_drop;
   }
  } else {
   FUNC_21(&VAR_4->lock, VAR_7);
   FUNC_12(VAR_3, VAR_1, VAR_5->ah, FUNC_0(VAR_2));
   FUNC_11(VAR_6);
   return;
  }
 } else {
  VAR_6->ah = ((void*)0);

  if (!VAR_5->query && FUNC_18(VAR_3, VAR_5))
   goto err_path;

  FUNC_3(&VAR_6->queue, VAR_1);
 }

 FUNC_21(&VAR_4->lock, VAR_7);
 FUNC_11(VAR_6);
 return;

err_path:
 FUNC_10(VAR_6);
err_drop:
 ++VAR_3->stats.tx_dropped;
 FUNC_4(VAR_1);

 FUNC_21(&VAR_4->lock, VAR_7);
 FUNC_11(VAR_6);
}
