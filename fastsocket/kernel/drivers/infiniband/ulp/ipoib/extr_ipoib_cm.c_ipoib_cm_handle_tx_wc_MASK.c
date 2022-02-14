
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_2__ stats; } ;
struct ipoib_neigh {int * cm; } ;
struct TYPE_7__ {int reap_task; int reap_list; } ;
struct ipoib_dev_priv {unsigned int tx_outstanding; int lock; TYPE_3__ cm; int flags; int ca; } ;
struct ipoib_cm_tx_buf {TYPE_4__* skb; int mapping; } ;
struct ipoib_cm_tx {int flags; int list; struct ipoib_neigh* neigh; int tx_tail; struct ipoib_cm_tx_buf* tx_ring; } ;
struct ib_wc {unsigned int wr_id; int vendor_err; int status; TYPE_1__* qp; } ;
struct TYPE_8__ {scalar_t__ len; } ;
struct TYPE_5__ {struct ipoib_cm_tx* qp_context; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_4__*) ;
 int FUNC_2 (int ,int ,scalar_t__,int ) ;
 int FUNC_3 (struct ipoib_dev_priv*,char*,int ,unsigned int,int ) ;
 int FUNC_4 (struct ipoib_dev_priv*,char*,unsigned int,int ) ;
 int FUNC_5 (struct ipoib_neigh*) ;
 unsigned int VAR_7 ;
 int FUNC_6 (struct ipoib_dev_priv*,char*,unsigned int,unsigned int) ;
 int VAR_8 ;
 int FUNC_7 (int *,int *) ;
 struct ipoib_dev_priv* FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*) ;
 int FUNC_12 (struct net_device*) ;
 int FUNC_13 (int ,int *) ;
 int FUNC_14 (int *,unsigned long) ;
 int FUNC_15 (int *,unsigned long) ;
 scalar_t__ FUNC_16 (int ,int *) ;
 scalar_t__ FUNC_17 (int ,int *) ;
 scalar_t__ FUNC_18 (int) ;

void FUNC_19(struct net_device *VAR_9, struct ib_wc *VAR_10)
{
 struct ipoib_dev_priv *VAR_11 = FUNC_8(VAR_9);
 struct ipoib_cm_tx *VAR_12 = VAR_10->qp->qp_context;
 unsigned int VAR_13 = VAR_10->wr_id & ~VAR_6;
 struct ipoib_cm_tx_buf *VAR_14;
 unsigned long VAR_15;

 FUNC_4(VAR_11, "cm send completion: id %d, status: %d\n",
         VAR_13, VAR_10->status);

 if (FUNC_18(VAR_13 >= VAR_7)) {
  FUNC_6(VAR_11, "cm send completion event with wrid %d (> %d)\n",
      VAR_13, VAR_7);
  return;
 }

 VAR_14 = &VAR_12->tx_ring[VAR_13];

 FUNC_2(VAR_11->ca, VAR_14->mapping, VAR_14->skb->len, VAR_0);


 ++VAR_9->stats.tx_packets;
 VAR_9->stats.tx_bytes += VAR_14->skb->len;

 FUNC_1(VAR_14->skb);

 FUNC_10(VAR_9);

 ++VAR_12->tx_tail;
 if (FUNC_18(--VAR_11->tx_outstanding == VAR_7 >> 1) &&
     FUNC_9(VAR_9) &&
     FUNC_17(VAR_3, &VAR_11->flags))
  FUNC_12(VAR_9);

 if (VAR_10->status != VAR_1 &&
     VAR_10->status != VAR_2) {
  struct ipoib_neigh *VAR_16;

  FUNC_3(VAR_11, "failed cm send event "
      "(status=%d, wrid=%d vend_err %x)\n",
      VAR_10->status, VAR_13, VAR_10->vendor_err);

  FUNC_14(&VAR_11->lock, VAR_15);
  VAR_16 = VAR_12->neigh;

  if (VAR_16) {
   VAR_16->cm = ((void*)0);
   FUNC_5(VAR_16);

   VAR_12->neigh = ((void*)0);
  }

  if (FUNC_16(VAR_4, &VAR_12->flags)) {
   FUNC_7(&VAR_12->list, &VAR_11->cm.reap_list);
   FUNC_13(VAR_8, &VAR_11->cm.reap_task);
  }

  FUNC_0(VAR_5, &VAR_12->flags);

  FUNC_15(&VAR_11->lock, VAR_15);
 }

 FUNC_11(VAR_9);
}
