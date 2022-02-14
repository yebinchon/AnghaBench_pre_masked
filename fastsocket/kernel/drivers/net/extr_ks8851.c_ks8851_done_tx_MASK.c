
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct TYPE_2__ {int tx_packets; int tx_bytes; } ;
struct net_device {TYPE_1__ stats; } ;
struct ks8851_net {struct net_device* netdev; } ;


 int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static void FUNC_1(struct ks8851_net *VAR_0, struct sk_buff *VAR_1)
{
 struct net_device *VAR_2 = VAR_0->netdev;

 VAR_2->stats.tx_bytes += VAR_1->len;
 VAR_2->stats.tx_packets++;

 FUNC_0(VAR_1);
}
