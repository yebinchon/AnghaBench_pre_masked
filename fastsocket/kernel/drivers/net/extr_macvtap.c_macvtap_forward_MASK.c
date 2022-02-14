
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {struct sk_buff* next; struct net_device* dev; } ;
struct net_device {scalar_t__ tx_queue_len; } ;
struct TYPE_2__ {int sk_sleep; int sk_receive_queue; } ;
struct macvtap_queue {int flags; TYPE_1__ sk; } ;
struct macvlan_dev {unsigned long tap_features; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned long VAR_6 ;
 struct sk_buff* FUNC_1 (struct sk_buff*,unsigned long,int) ;
 int FUNC_2 (struct sk_buff*) ;
 struct macvtap_queue* FUNC_3 (struct net_device*,struct sk_buff*) ;
 struct macvlan_dev* FUNC_4 (struct net_device*) ;
 scalar_t__ FUNC_5 (struct sk_buff*,unsigned long) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *,struct sk_buff*) ;
 int FUNC_8 (int ,int) ;

__attribute__((used)) static int FUNC_9(struct net_device *VAR_7, struct sk_buff *VAR_8)
{
 struct macvlan_dev *VAR_9 = FUNC_4(VAR_7);
 struct macvtap_queue *VAR_10 = FUNC_3(VAR_7, VAR_8);
 unsigned long VAR_11 = VAR_6;

 if (!VAR_10)
  goto drop;

 if (FUNC_6(&VAR_10->sk.sk_receive_queue) >= VAR_7->tx_queue_len)
  goto drop;

 VAR_8->dev = VAR_7;




 if (VAR_10->flags & VAR_0)
  VAR_11 |= VAR_9->tap_features;
 if (FUNC_5(VAR_8, VAR_11)) {
  struct sk_buff *VAR_12 = FUNC_1(VAR_8, VAR_11, 0);

  if (FUNC_0(VAR_12))
   goto drop;

  if (!VAR_12) {
   FUNC_7(&VAR_10->sk.sk_receive_queue, VAR_8);
   goto wake_up;
  }

  FUNC_2(VAR_8);
  while (VAR_12) {
   struct sk_buff *VAR_13 = VAR_12->next;

   VAR_12->next = ((void*)0);
   FUNC_7(&VAR_10->sk.sk_receive_queue, VAR_12);
   VAR_12 = VAR_13;
  }
 } else {
  FUNC_7(&VAR_10->sk.sk_receive_queue, VAR_8);
 }

wake_up:
 FUNC_8(VAR_10->sk.sk_sleep, VAR_3 | VAR_5 | VAR_4);
 return VAR_2;

drop:
 FUNC_2(VAR_8);
 return VAR_1;
}
