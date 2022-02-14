
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sk_buff {scalar_t__ len; } ;
struct TYPE_2__ {int tx_bytes; int tx_packets; } ;
struct net_device {TYPE_1__ stats; } ;
typedef int netdev_tx_t ;


 int VAR_0 ;
 int FUNC_0 (struct sk_buff*) ;

__attribute__((used)) static netdev_tx_t FUNC_1(struct sk_buff *VAR_1, struct net_device *VAR_2)
{
 VAR_2->stats.tx_packets++;
 VAR_2->stats.tx_bytes += VAR_1->len;

 FUNC_0(VAR_1);
 return VAR_0;
}
