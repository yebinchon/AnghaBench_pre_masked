
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct sk_buff {scalar_t__ len; int ip_summed; int protocol; struct net_device* dev; scalar_t__ data; } ;
struct TYPE_2__ {int rx_bytes; int rx_packets; int rx_dropped; } ;
struct netiucv_priv {TYPE_1__ stats; } ;
struct net_device {int dummy; } ;
struct ll_header {scalar_t__ next; } ;
struct iucv_connection {struct net_device* netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int,char*) ;
 int FUNC_1 (int ,int,char*,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 struct sk_buff* FUNC_2 (scalar_t__) ;
 struct netiucv_priv* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct sk_buff*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*,int ,scalar_t__) ;
 int FUNC_7 (struct sk_buff*,scalar_t__) ;
 int FUNC_8 (struct sk_buff*,scalar_t__) ;
 int FUNC_9 (struct sk_buff*) ;
 scalar_t__ FUNC_10 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_11(struct iucv_connection *VAR_5,
          struct sk_buff *VAR_6)
{
 struct net_device *VAR_7 = VAR_5->netdev;
 struct netiucv_priv *VAR_8 = FUNC_3(VAR_7);
 u16 VAR_9 = 0;

 FUNC_8(VAR_6, VAR_3);
 VAR_6->dev = VAR_7;
 VAR_6->ip_summed = VAR_0;
 VAR_6->protocol = FUNC_5(VAR_2);

 while (1) {
  struct sk_buff *VAR_10;
  struct ll_header *VAR_11 = (struct ll_header *) VAR_6->data;

  if (!VAR_11->next)
   break;

  FUNC_7(VAR_6, VAR_3);
  VAR_11->next -= VAR_9;
  VAR_9 += VAR_11->next;
  VAR_11->next -= VAR_3;
  if (FUNC_10(VAR_6) < VAR_11->next) {
   FUNC_1(VAR_4, 2, "Illegal next field: %d > %d\n",
    VAR_11->next, FUNC_10(VAR_6));
   return;
  }
  FUNC_8(VAR_6, VAR_11->next);
  FUNC_9(VAR_6);
  VAR_10 = FUNC_2(VAR_6->len);
  if (!VAR_10) {
   FUNC_0(VAR_4, 2,
    "Out of memory in netiucv_unpack_skb\n");
   VAR_8->stats.rx_dropped++;
   return;
  }
  FUNC_6(VAR_6, FUNC_8(VAR_10, VAR_6->len),
       VAR_6->len);
  FUNC_9(VAR_10);
  VAR_10->dev = VAR_6->dev;
  VAR_10->protocol = VAR_6->protocol;
  VAR_6->ip_summed = VAR_1;
  VAR_8->stats.rx_packets++;
  VAR_8->stats.rx_bytes += VAR_10->len;




  FUNC_4(VAR_10);
  FUNC_7(VAR_6, VAR_11->next);
  FUNC_8(VAR_6, VAR_3);
 }
}
