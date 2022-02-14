
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {int len; } ;
struct net_device {int trans_start; int dev; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; int tx_errors; } ;
struct kaweth_device {int device_lock; TYPE_1__ stats; int tx_urb; scalar_t__ end; int dev; struct sk_buff* tx_skb; int status; } ;
typedef int netdev_tx_t ;
typedef int __le16 ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct sk_buff*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct sk_buff*) ;
 int FUNC_4 (int *,char*,int) ;
 int VAR_2 ;
 int FUNC_5 (struct kaweth_device*) ;
 int VAR_3 ;
 struct kaweth_device* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 scalar_t__ FUNC_9 (struct sk_buff*) ;
 struct sk_buff* FUNC_10 (struct sk_buff*,int,int ,int ) ;
 int FUNC_11 (struct sk_buff*) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int ,int ,int ,int *,int ,int ,struct kaweth_device*) ;
 int FUNC_15 (int ,int) ;
 int FUNC_16 (int ,int ) ;

__attribute__((used)) static netdev_tx_t FUNC_17(struct sk_buff *VAR_4,
        struct net_device *VAR_5)
{
 struct kaweth_device *VAR_6 = FUNC_6(VAR_5);
 __le16 *VAR_7;

 int VAR_8;

 FUNC_12(&VAR_6->device_lock);

 FUNC_5(VAR_6);
 FUNC_8(VAR_5);
 if (FUNC_0(VAR_6->status)) {
  goto skip;
 }


 if (FUNC_9(VAR_4) || FUNC_11(VAR_4) < 2) {

  struct sk_buff *VAR_9;
  VAR_9 = FUNC_10(VAR_4, 2, 0, VAR_0);
  FUNC_3(VAR_4);
  VAR_4 = VAR_9;
  if (!VAR_9) {
   VAR_6->stats.tx_errors++;
   FUNC_7(VAR_5);
   FUNC_13(&VAR_6->device_lock);
   return VAR_1;
  }
 }

 VAR_7 = (__le16 *)FUNC_1(VAR_4, 2);
 *VAR_7 = FUNC_2(VAR_4->len-2);
 VAR_6->tx_skb = VAR_4;

 FUNC_14(VAR_6->tx_urb,
        VAR_6->dev,
        FUNC_15(VAR_6->dev, 2),
        VAR_7,
        VAR_4->len,
        VAR_3,
        VAR_6);
 VAR_6->end = 0;

 if((VAR_8 = FUNC_16(VAR_6->tx_urb, VAR_0)))
 {
  FUNC_4(&VAR_5->dev, "kaweth failed tx_urb %d\n", VAR_8);
skip:
  VAR_6->stats.tx_errors++;

  FUNC_7(VAR_5);
  FUNC_3(VAR_4);
 }
 else
 {
  VAR_6->stats.tx_packets++;
  VAR_6->stats.tx_bytes += VAR_4->len;
  VAR_5->trans_start = VAR_2;
 }

 FUNC_13(&VAR_6->device_lock);

 return VAR_1;
}
