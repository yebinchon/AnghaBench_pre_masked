
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sk_buff {unsigned int len; } ;
struct netdev_queue {unsigned int tx_bytes; int tx_dropped; int tx_packets; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct sk_buff*,struct net_device*) ;
 struct netdev_queue* FUNC_2 (struct net_device*,int) ;
 int FUNC_3 (struct sk_buff*) ;

netdev_tx_t FUNC_4(struct sk_buff *VAR_2,
          struct net_device *VAR_3)
{
 int VAR_4 = FUNC_3(VAR_2);
 struct netdev_queue *VAR_5 = FUNC_2(VAR_3, VAR_4);
 unsigned int VAR_6 = VAR_2->len;
 int VAR_7;

 VAR_7 = FUNC_1(VAR_2, VAR_3);
 if (FUNC_0(VAR_7 == VAR_1)) {
  VAR_5->tx_packets++;
  VAR_5->tx_bytes += VAR_6;
 } else
  VAR_5->tx_dropped++;

 return VAR_0;
}
