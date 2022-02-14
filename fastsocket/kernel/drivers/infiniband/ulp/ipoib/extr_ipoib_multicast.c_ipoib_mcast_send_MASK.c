
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef union ib_gid {int dummy; } ib_gid ;
typedef int u8 ;
struct sk_buff {int dummy; } ;
struct TYPE_9__ {int tx_dropped; } ;
struct net_device {TYPE_4__ stats; } ;
struct ipoib_neigh {int list; TYPE_5__* ah; } ;
struct TYPE_7__ {int raw; } ;
struct TYPE_8__ {TYPE_2__ mgid; } ;
struct ipoib_mcast {TYPE_5__* ah; int neigh_list; int flags; int pkt_queue; int list; TYPE_3__ mcmember; } ;
struct ipoib_dev_priv {int lock; int multicast_list; TYPE_1__* broadcast; int flags; } ;
struct TYPE_10__ {int ref; } ;
struct TYPE_6__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct net_device*,struct ipoib_mcast*) ;
 struct ipoib_mcast* FUNC_1 (struct net_device*,void*) ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (struct ipoib_dev_priv*,char*,...) ;
 struct ipoib_mcast* FUNC_4 (struct net_device*,int ) ;
 int FUNC_5 (struct ipoib_mcast*) ;
 struct ipoib_neigh* FUNC_6 (int *,struct net_device*) ;
 struct ipoib_neigh* FUNC_7 (struct net_device*,int *) ;
 int FUNC_8 (struct ipoib_neigh*) ;
 int FUNC_9 (struct net_device*,struct sk_buff*,TYPE_5__*,int ) ;
 int FUNC_10 (struct ipoib_dev_priv*,char*) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *,int *) ;
 int FUNC_13 (int ,void*,int) ;
 struct ipoib_dev_priv* FUNC_14 (struct net_device*) ;
 int FUNC_15 (int ,int *) ;
 scalar_t__ FUNC_16 (int *) ;
 int FUNC_17 (int *,struct sk_buff*) ;
 int FUNC_18 (int *,unsigned long) ;
 int FUNC_19 (int *,unsigned long) ;
 scalar_t__ FUNC_20 (int ,int *) ;

void FUNC_21(struct net_device *VAR_6, u8 *VAR_7, struct sk_buff *VAR_8)
{
 struct ipoib_dev_priv *VAR_9 = FUNC_14(VAR_6);
 struct ipoib_mcast *VAR_10;
 unsigned long VAR_11;
 void *VAR_12 = VAR_7 + 4;

 FUNC_18(&VAR_9->lock, VAR_11);

 if (!FUNC_20(VAR_1, &VAR_9->flags) ||
     !VAR_9->broadcast ||
     !FUNC_20(VAR_3, &VAR_9->broadcast->flags)) {
  ++VAR_6->stats.tx_dropped;
  FUNC_2(VAR_8);
  goto unlock;
 }

 VAR_10 = FUNC_1(VAR_6, VAR_12);
 if (!VAR_10) {

  FUNC_3(VAR_9, "setting up send only multicast group for %pI6\n",
    VAR_12);

  VAR_10 = FUNC_4(VAR_6, 0);
  if (!VAR_10) {
   FUNC_10(VAR_9, "unable to allocate memory for "
       "multicast structure\n");
   ++VAR_6->stats.tx_dropped;
   FUNC_2(VAR_8);
   goto out;
  }

  FUNC_15(VAR_5, &VAR_10->flags);
  FUNC_13(VAR_10->mcmember.mgid.raw, VAR_12, sizeof (union ib_gid));
  FUNC_0(VAR_6, VAR_10);
  FUNC_12(&VAR_10->list, &VAR_9->multicast_list);
 }

 if (!VAR_10->ah) {
  if (FUNC_16(&VAR_10->pkt_queue) < VAR_2)
   FUNC_17(&VAR_10->pkt_queue, VAR_8);
  else {
   ++VAR_6->stats.tx_dropped;
   FUNC_2(VAR_8);
  }

  if (FUNC_20(VAR_4, &VAR_10->flags))
   FUNC_3(VAR_9, "no address vector, "
     "but multicast join already started\n");
  else if (FUNC_20(VAR_5, &VAR_10->flags))
   FUNC_5(VAR_10);





  VAR_10 = ((void*)0);
 }

out:
 if (VAR_10 && VAR_10->ah) {
  struct ipoib_neigh *VAR_13;

  FUNC_19(&VAR_9->lock, VAR_11);
  VAR_13 = FUNC_7(VAR_6, VAR_7);
  FUNC_18(&VAR_9->lock, VAR_11);
  if (!VAR_13) {
   VAR_13 = FUNC_6(VAR_7, VAR_6);
   if (VAR_13) {
    FUNC_11(&VAR_10->ah->ref);
    VAR_13->ah = VAR_10->ah;
    FUNC_12(&VAR_13->list, &VAR_10->neigh_list);
   }
  }

  FUNC_19(&VAR_9->lock, VAR_11);
  FUNC_9(VAR_6, VAR_8, VAR_10->ah, VAR_0);
  if (VAR_13)
   FUNC_8(VAR_13);
  return;
 }

unlock:
 FUNC_19(&VAR_9->lock, VAR_11);
}
