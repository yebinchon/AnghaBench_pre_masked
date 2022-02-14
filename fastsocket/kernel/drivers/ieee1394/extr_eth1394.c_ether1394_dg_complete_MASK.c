
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; struct net_device* dev; } ;
struct packet_task {struct sk_buff* skb; } ;
struct TYPE_2__ {int tx_packets; int tx_bytes; int tx_errors; int tx_dropped; } ;
struct net_device {TYPE_1__ stats; } ;
struct eth1394_priv {int lock; } ;


 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (int ,struct packet_task*) ;
 struct eth1394_priv* FUNC_2 (struct net_device*) ;
 int VAR_0 ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_5(struct packet_task *VAR_1, int VAR_2)
{
 struct sk_buff *VAR_3 = VAR_1->skb;
 struct net_device *VAR_4 = VAR_3->dev;
 struct eth1394_priv *VAR_5 = FUNC_2(VAR_4);
 unsigned long VAR_6;


 FUNC_3(&VAR_5->lock, VAR_6);
 if (VAR_2) {
  VAR_4->stats.tx_dropped++;
  VAR_4->stats.tx_errors++;
 } else {
  VAR_4->stats.tx_bytes += VAR_3->len;
  VAR_4->stats.tx_packets++;
 }
 FUNC_4(&VAR_5->lock, VAR_6);

 FUNC_0(VAR_3);
 FUNC_1(VAR_0, VAR_1);
}
