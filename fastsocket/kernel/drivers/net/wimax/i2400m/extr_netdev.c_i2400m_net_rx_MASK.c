
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int protocol; struct net_device* dev; scalar_t__ data; } ;
struct TYPE_4__ {int rx_bytes; int rx_packets; int rx_dropped; } ;
struct net_device {TYPE_2__ stats; } ;
struct TYPE_3__ {struct net_device* net_dev; } ;
struct i2400m {TYPE_1__ wimax_dev; } ;
struct device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct sk_buff* FUNC_0 (struct net_device*,int,int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,struct device*,void const*,int) ;
 int FUNC_3 (int,struct device*,char*,struct i2400m*,void const*,int) ;
 int FUNC_4 (int,struct device*,char*,struct i2400m*,void const*,int) ;
 int FUNC_5 (int,struct device*,char*,...) ;
 int FUNC_6 (struct device*,char*) ;
 int FUNC_7 (int ) ;
 struct device* FUNC_8 (struct i2400m*) ;
 int FUNC_9 (struct net_device*,scalar_t__,int ) ;
 int FUNC_10 (int ,void const*,int) ;
 int FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;
 struct sk_buff* FUNC_13 (struct sk_buff*) ;
 int FUNC_14 (struct sk_buff*,int) ;
 int FUNC_15 (struct sk_buff*,int) ;
 int FUNC_16 (struct sk_buff*,int ) ;
 int FUNC_17 (struct sk_buff*,int) ;

void FUNC_18(struct i2400m *VAR_3, struct sk_buff *VAR_4,
     unsigned VAR_5, const void *VAR_6, int VAR_7)
{
 struct net_device *VAR_8 = VAR_3->wimax_dev.net_dev;
 struct device *VAR_9 = FUNC_8(VAR_3);
 struct sk_buff *VAR_10;

 FUNC_4(2, VAR_9, "(i2400m %p buf %p buf_len %d)\n",
    VAR_3, VAR_6, VAR_7);
 if (VAR_5) {
  VAR_10 = FUNC_13(VAR_4);
  FUNC_5(2, VAR_9, "RX: reusing first payload skb %p\n", VAR_10);
  FUNC_14(VAR_10, VAR_6 - (void *) VAR_10->data);
  FUNC_17(VAR_10, (void *) FUNC_12(VAR_10) - VAR_6);
 } else {


  VAR_10 = FUNC_0(VAR_8, VAR_7, VAR_2);
  if (VAR_10 == ((void*)0)) {
   FUNC_6(VAR_9, "NETRX: no memory to realloc skb\n");
   VAR_8->stats.rx_dropped++;
   goto error_skb_realloc;
  }
  FUNC_10(FUNC_15(VAR_10, VAR_7), VAR_6, VAR_7);
 }
 FUNC_9(VAR_3->wimax_dev.net_dev,
      VAR_10->data - VAR_0,
      FUNC_1(VAR_1));
 FUNC_16(VAR_10, -VAR_0);
 VAR_10->dev = VAR_3->wimax_dev.net_dev;
 VAR_10->protocol = FUNC_7(VAR_1);
 VAR_8->stats.rx_packets++;
 VAR_8->stats.rx_bytes += VAR_7;
 FUNC_5(3, VAR_9, "NETRX: receiving %d bytes to network stack\n",
  VAR_7);
 FUNC_2(4, VAR_9, VAR_6, VAR_7);
 FUNC_11(VAR_10);
error_skb_realloc:
 FUNC_3(2, VAR_9, "(i2400m %p buf %p buf_len %d) = void\n",
  VAR_3, VAR_6, VAR_7);
}
