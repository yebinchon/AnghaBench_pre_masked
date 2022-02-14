
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct sk_buff {unsigned long len; int users; struct ll_header* data; int protocol; } ;
struct net_device {struct ctcm_priv* ml_priv; } ;
struct ll_header {int length; scalar_t__ unused; int type; } ;
struct TYPE_5__ {int tx_bytes; int tx_packets; } ;
struct ctcm_priv {TYPE_1__ stats; } ;
struct TYPE_6__ {unsigned long txlen; int doios_single; int send_stamp; } ;
struct channel {int collect_len; int max_bufsize; struct net_device* netdev; int io_queue; int timer; TYPE_2__ prof; int cdev; TYPE_3__* ccw; int fsm; scalar_t__ retry; struct sk_buff* trans_skb; int collect_lock; int collect_queue; } ;
typedef int __u16 ;
struct TYPE_7__ {int count; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 unsigned long VAR_8 ;
 struct sk_buff* FUNC_0 (int,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,TYPE_3__*,unsigned long,int,int ) ;
 int FUNC_4 (struct channel*,int,char*) ;
 scalar_t__ FUNC_5 (struct channel*) ;
 int FUNC_6 (struct net_device*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (int *,int ,int ,struct channel*) ;
 int FUNC_10 (int *) ;
 scalar_t__ FUNC_11 (int ) ;
 int FUNC_12 (int ,int ) ;
 int * FUNC_13 (int ) ;
 int FUNC_14 (scalar_t__,struct ll_header*,unsigned long) ;
 scalar_t__ FUNC_15 (TYPE_3__*,struct ll_header*) ;
 int FUNC_16 (struct sk_buff*,scalar_t__,int) ;
 int FUNC_17 (int *) ;
 int FUNC_18 (struct sk_buff*,unsigned long) ;
 scalar_t__ FUNC_19 (struct sk_buff*,int) ;
 scalar_t__ FUNC_20 (struct sk_buff*,int) ;
 int FUNC_21 (int *,struct sk_buff*) ;
 int FUNC_22 (struct sk_buff*) ;
 scalar_t__ FUNC_23 (struct sk_buff*) ;
 int FUNC_24 (int *,unsigned long) ;
 int FUNC_25 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_26(struct channel *VAR_9, struct sk_buff *VAR_10)
{
 unsigned long VAR_11;
 struct ll_header VAR_12;
 int VAR_13 = 0;
 __u16 VAR_14;
 int VAR_15;
 struct sk_buff *VAR_16;
 unsigned long VAR_17;





 FUNC_24(&VAR_9->collect_lock, VAR_11);
 if (FUNC_11(VAR_9->fsm) != VAR_3) {
  int VAR_18 = VAR_10->len + VAR_8;

  if (VAR_9->collect_len + VAR_18 > VAR_9->max_bufsize - 2) {
   FUNC_25(&VAR_9->collect_lock, VAR_11);
   return -VAR_4;
  } else {
   FUNC_2(&VAR_10->users);
   VAR_12.length = VAR_18;
   VAR_12.type = VAR_10->protocol;
   VAR_12.unused = 0;
   FUNC_14(FUNC_19(VAR_10, VAR_8), &VAR_12,
          VAR_8);
   FUNC_21(&VAR_9->collect_queue, VAR_10);
   VAR_9->collect_len += VAR_18;
  }
  FUNC_25(&VAR_9->collect_lock, VAR_11);
    goto done;
 }
 FUNC_25(&VAR_9->collect_lock, VAR_11);




 FUNC_2(&VAR_10->users);
 VAR_9->prof.txlen += VAR_10->len;
 VAR_12.length = VAR_10->len + VAR_8;
 VAR_12.type = VAR_10->protocol;
 VAR_12.unused = 0;
 FUNC_14(FUNC_19(VAR_10, VAR_8), &VAR_12, VAR_8);
 VAR_14 = VAR_10->len + 2;
 *((__u16 *)FUNC_19(VAR_10, 2)) = VAR_14;





 VAR_17 = ((unsigned long)FUNC_23(VAR_10) + VAR_8) >> 31;
 if (VAR_17) {
  VAR_16 = FUNC_0(VAR_10->len, VAR_6 | VAR_7);
  if (!VAR_16) {
   FUNC_1(&VAR_10->users);
   FUNC_18(VAR_10, VAR_8 + 2);
   FUNC_6(VAR_9->netdev);
   return -VAR_5;
  } else {
   FUNC_14(FUNC_20(VAR_16, VAR_10->len), VAR_10->data, VAR_10->len);
   FUNC_2(&VAR_16->users);
   FUNC_1(&VAR_10->users);
   FUNC_8(VAR_10);
   VAR_10 = VAR_16;
  }
 }

 VAR_9->ccw[4].count = VAR_14;
 if (FUNC_15(&VAR_9->ccw[4], VAR_10->data)) {





  if (FUNC_5(VAR_9)) {




   FUNC_1(&VAR_10->users);
   FUNC_18(VAR_10, VAR_8 + 2);
   FUNC_6(VAR_9->netdev);
   return -VAR_5;
  }

  FUNC_22(VAR_9->trans_skb);
  VAR_9->trans_skb->len = 0;
  VAR_9->ccw[1].count = VAR_10->len;
  FUNC_16(VAR_10,
    FUNC_20(VAR_9->trans_skb, VAR_10->len), VAR_10->len);
  FUNC_1(&VAR_10->users);
  FUNC_8(VAR_10);
  VAR_15 = 0;
 } else {
  FUNC_21(&VAR_9->io_queue, VAR_10);
  VAR_15 = 3;
 }
 VAR_9->retry = 0;
 FUNC_12(VAR_9->fsm, VAR_2);
 FUNC_9(&VAR_9->timer, VAR_0, VAR_1, VAR_9);
 FUNC_24(FUNC_13(VAR_9->cdev), VAR_11);
 VAR_9->prof.send_stamp = FUNC_7();
 VAR_13 = FUNC_3(VAR_9->cdev, &VAR_9->ccw[VAR_15],
     (unsigned long)VAR_9, 0xff, 0);
 FUNC_25(FUNC_13(VAR_9->cdev), VAR_11);
 if (VAR_15 == 3)
  VAR_9->prof.doios_single++;
 if (VAR_13 != 0) {
  FUNC_10(&VAR_9->timer);
  FUNC_4(VAR_9, VAR_13, "single skb TX");
  if (VAR_15 == 3)
   FUNC_17(&VAR_9->io_queue);




  FUNC_18(VAR_10, VAR_8 + 2);
 } else if (VAR_15 == 0) {
  struct net_device *VAR_19 = VAR_9->netdev;
  struct ctcm_priv *VAR_20 = VAR_19->ml_priv;
  VAR_20->stats.tx_packets++;
  VAR_20->stats.tx_bytes += VAR_10->len - VAR_8;
 }
done:
 FUNC_6(VAR_9->netdev);
 return VAR_13;
}
