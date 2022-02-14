
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; int users; struct ll_header* data; } ;
struct TYPE_4__ {int tx_errors; } ;
struct netiucv_priv {TYPE_2__ stats; } ;
struct ll_header {scalar_t__ next; } ;
struct iucv_message {int tag; scalar_t__ class; } ;
struct TYPE_3__ {scalar_t__ txlen; scalar_t__ tx_pending; scalar_t__ tx_max_pending; int doios_single; int send_stamp; } ;
struct iucv_connection {scalar_t__ collect_len; scalar_t__ max_buffsize; int commit_queue; int netdev; TYPE_1__ prof; int fsm; int path; int collect_lock; int collect_queue; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int ,int,char*,int) ;
 scalar_t__ VAR_6 ;
 struct sk_buff* FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int VAR_7 ;
 int FUNC_5 (struct sk_buff*) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (int ,scalar_t__) ;
 int FUNC_8 (int ,struct iucv_message*,int ,int ,struct ll_header*,scalar_t__) ;
 int FUNC_9 (int ,struct ll_header*,scalar_t__) ;
 struct netiucv_priv* FUNC_10 (int ) ;
 int FUNC_11 (struct sk_buff*,scalar_t__) ;
 int FUNC_12 (struct sk_buff*,scalar_t__) ;
 int FUNC_13 (struct sk_buff*,scalar_t__) ;
 int FUNC_14 (int *,struct sk_buff*) ;
 int FUNC_15 (struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_16 (struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*) ;
 int FUNC_18 (struct sk_buff*,int ) ;
 int FUNC_19 (int *,unsigned long) ;
 int FUNC_20 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_21(struct iucv_connection *VAR_8,
    struct sk_buff *VAR_9)
{
 struct iucv_message VAR_10;
 unsigned long VAR_11;
 struct ll_header VAR_12;
 int VAR_13;

 if (FUNC_6(VAR_8->fsm) != VAR_0) {
  int VAR_14 = VAR_9->len + VAR_6;

  FUNC_19(&VAR_8->collect_lock, VAR_11);
  if (VAR_8->collect_len + VAR_14 >
      (VAR_8->max_buffsize - VAR_6)) {
   VAR_13 = -VAR_2;
   FUNC_0(VAR_7, 2,
          "EBUSY from netiucv_transmit_skb\n");
  } else {
   FUNC_3(&VAR_9->users);
   FUNC_14(&VAR_8->collect_queue, VAR_9);
   VAR_8->collect_len += VAR_14;
   VAR_13 = 0;
  }
  FUNC_20(&VAR_8->collect_lock, VAR_11);
 } else {
  struct sk_buff *VAR_15 = VAR_9;




  unsigned long VAR_16 = ((unsigned long)(FUNC_16(VAR_9) +
        VAR_6)) >> 31;
  int VAR_17 = 0;
  if (VAR_16 || (FUNC_17(VAR_9) < 2)) {
   VAR_15 = FUNC_2(VAR_9->len + VAR_6 +
      VAR_6, VAR_4 | VAR_5);
   if (!VAR_15) {
    FUNC_0(VAR_7, 2, "alloc_skb failed\n");
    VAR_13 = -VAR_3;
    return VAR_13;
   } else {
    FUNC_15(VAR_15, VAR_6);
    FUNC_9(FUNC_13(VAR_15, VAR_9->len),
           VAR_9->data, VAR_9->len);
   }
   VAR_17 = 1;
  }



  VAR_12.next = VAR_15->len + VAR_6;
  FUNC_9(FUNC_12(VAR_15, VAR_6), &VAR_12, VAR_6);
  VAR_12.next = 0;
  FUNC_9(FUNC_13(VAR_15, VAR_6), &VAR_12, VAR_6);

  FUNC_7(VAR_8->fsm, VAR_1);
  VAR_8->prof.send_stamp = FUNC_4();

  VAR_10.tag = 1;
  VAR_10.class = 0;
  VAR_13 = FUNC_8(VAR_8->path, &VAR_10, 0, 0,
           VAR_15->data, VAR_15->len);
  VAR_8->prof.doios_single++;
  VAR_8->prof.txlen += VAR_9->len;
  VAR_8->prof.tx_pending++;
  if (VAR_8->prof.tx_pending > VAR_8->prof.tx_max_pending)
   VAR_8->prof.tx_max_pending = VAR_8->prof.tx_pending;
  if (VAR_13) {
   struct netiucv_priv *VAR_18;
   FUNC_7(VAR_8->fsm, VAR_0);
   VAR_8->prof.tx_pending--;
   VAR_18 = FUNC_10(VAR_8->netdev);
   if (VAR_18)
    VAR_18->stats.tx_errors++;
   if (VAR_17)
    FUNC_5(VAR_15);
   else {




    FUNC_11(VAR_9, VAR_6);
    FUNC_18(VAR_9, VAR_9->len - VAR_6);
   }
   FUNC_1(VAR_7, 2, "rc %d from iucv_send\n", VAR_13);
  } else {
   if (VAR_17)
    FUNC_5(VAR_9);
   FUNC_3(&VAR_15->users);
   FUNC_14(&VAR_8->commit_queue, VAR_15);
  }
 }

 return VAR_13;
}
