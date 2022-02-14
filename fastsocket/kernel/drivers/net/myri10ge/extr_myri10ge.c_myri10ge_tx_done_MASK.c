
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct pci_dev {int dummy; } ;
struct netdev_queue {int dummy; } ;
struct myri10ge_tx_buf {int pkt_done; int done; int mask; int req; int wake_queue; int send_stop; scalar_t__ queue_active; TYPE_4__* info; } ;
struct TYPE_7__ {int tx_packets; int tx_bytes; } ;
struct myri10ge_slice_state {TYPE_3__* mgp; int dev; TYPE_1__ stats; struct myri10ge_tx_buf tx; } ;
struct TYPE_10__ {scalar_t__ last; struct sk_buff* skb; } ;
struct TYPE_9__ {int ss; TYPE_2__* dev; struct pci_dev* pdev; } ;
struct TYPE_8__ {int real_num_tx_queues; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct netdev_queue*) ;
 int FUNC_1 (struct netdev_queue*) ;
 int VAR_1 ;
 int FUNC_2 (struct sk_buff*) ;
 int FUNC_3 (int) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 struct netdev_queue* FUNC_6 (int ,struct myri10ge_slice_state*) ;
 scalar_t__ FUNC_7 (struct netdev_queue*) ;
 int FUNC_8 (struct netdev_queue*) ;
 int FUNC_9 (TYPE_4__*,int ) ;
 int FUNC_10 (TYPE_4__*,int) ;
 int FUNC_11 (TYPE_4__*,int,int ) ;
 int FUNC_12 (struct pci_dev*,int ,int,int ) ;
 int FUNC_13 (struct pci_dev*,int ,int,int ) ;
 int FUNC_14 (int ,int ) ;

__attribute__((used)) static inline void
FUNC_15(struct myri10ge_slice_state *VAR_2, int VAR_3)
{
 struct pci_dev *VAR_4 = VAR_2->mgp->pdev;
 struct myri10ge_tx_buf *VAR_5 = &VAR_2->tx;
 struct netdev_queue *VAR_6;
 struct sk_buff *VAR_7;
 int VAR_8, VAR_9;

 while (VAR_5->pkt_done != VAR_3) {
  VAR_8 = VAR_5->done & VAR_5->mask;
  VAR_7 = VAR_5->info[VAR_8].skb;


  VAR_5->info[VAR_8].skb = ((void*)0);
  if (VAR_5->info[VAR_8].last) {
   VAR_5->pkt_done++;
   VAR_5->info[VAR_8].last = 0;
  }
  VAR_5->done++;
  VAR_9 = FUNC_10(&VAR_5->info[VAR_8], VAR_9);
  FUNC_11(&VAR_5->info[VAR_8], VAR_9, 0);
  if (VAR_7) {
   VAR_2->stats.tx_bytes += VAR_7->len;
   VAR_2->stats.tx_packets++;
   FUNC_2(VAR_7);
   if (VAR_9)
    FUNC_13(VAR_4,
       FUNC_9(&VAR_5->info[VAR_8],
        VAR_1), VAR_9,
       VAR_0);
  } else {
   if (VAR_9)
    FUNC_12(VAR_4,
            FUNC_9(&VAR_5->info[VAR_8],
             VAR_1), VAR_9,
            VAR_0);
  }
 }

 VAR_6 = FUNC_6(VAR_2->dev, VAR_2 - VAR_2->mgp->ss);
 if ((VAR_2->mgp->dev->real_num_tx_queues > 1) &&
     FUNC_0(VAR_6)) {
  if (VAR_5->req == VAR_5->done) {
   VAR_5->queue_active = 0;
   FUNC_14(FUNC_3(1), VAR_5->send_stop);
   FUNC_4();
   FUNC_5();
  }
  FUNC_1(VAR_6);
 }


 if (FUNC_7(VAR_6)
     && VAR_5->req - VAR_5->done < (VAR_5->mask >> 1)) {
  VAR_5->wake_queue++;
  FUNC_8(VAR_6);
 }
}
