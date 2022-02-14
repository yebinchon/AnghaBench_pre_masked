
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tx_queue {int tx_ring_size; int tx_desc_count; int tx_packets; int tx_bytes; int tx_dropped; } ;
struct sk_buff {scalar_t__ len; } ;
struct netdev_queue {int dummy; } ;
struct net_device {int trans_start; int dev; } ;
struct mv643xx_eth_private {struct tx_queue* txq; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,int *,char*) ;
 scalar_t__ FUNC_2 (struct sk_buff*) ;
 int VAR_5 ;
 int FUNC_3 (struct sk_buff*) ;
 scalar_t__ FUNC_4 () ;
 struct netdev_queue* FUNC_5 (struct net_device*,int) ;
 struct mv643xx_eth_private* FUNC_6 (struct net_device*) ;
 int FUNC_7 (struct netdev_queue*) ;
 int FUNC_8 (struct sk_buff*) ;
 int FUNC_9 (struct tx_queue*,struct sk_buff*) ;

__attribute__((used)) static int FUNC_10(struct sk_buff *VAR_6, struct net_device *VAR_7)
{
 struct mv643xx_eth_private *VAR_8 = FUNC_6(VAR_7);
 int VAR_9;
 struct tx_queue *VAR_10;
 struct netdev_queue *VAR_11;

 VAR_9 = FUNC_8(VAR_6);
 VAR_10 = VAR_8->txq + VAR_9;
 VAR_11 = FUNC_5(VAR_7, VAR_9);

 if (FUNC_2(VAR_6) && FUNC_0(VAR_6)) {
  VAR_10->tx_dropped++;
  FUNC_1(VAR_0, &VAR_7->dev,
      "failed to linearize skb with tiny "
      "unaligned fragment\n");
  return VAR_3;
 }

 if (VAR_10->tx_ring_size - VAR_10->tx_desc_count < VAR_2 + 1) {
  if (FUNC_4())
   FUNC_1(VAR_1, &VAR_7->dev, "tx queue full?!\n");
  FUNC_3(VAR_6);
  return VAR_4;
 }

 if (!FUNC_9(VAR_10, VAR_6)) {
  int VAR_12;

  VAR_10->tx_bytes += VAR_6->len;
  VAR_10->tx_packets++;
  VAR_7->trans_start = VAR_5;

  VAR_12 = VAR_10->tx_ring_size - VAR_10->tx_desc_count;
  if (VAR_12 < VAR_2 + 1)
   FUNC_7(VAR_11);
 }

 return VAR_4;
}
