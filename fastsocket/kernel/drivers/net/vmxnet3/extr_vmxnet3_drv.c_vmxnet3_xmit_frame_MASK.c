
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxnet3_adapter {size_t num_tx_queues; int * tx_queue; } ;
struct sk_buff {size_t queue_mapping; } ;
struct net_device {int dummy; } ;
typedef int netdev_tx_t ;


 int FUNC_0 (int) ;
 struct vmxnet3_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct sk_buff*,int *,struct vmxnet3_adapter*,struct net_device*) ;

__attribute__((used)) static netdev_tx_t
FUNC_3(struct sk_buff *VAR_0, struct net_device *VAR_1)
{
 struct vmxnet3_adapter *VAR_2 = FUNC_1(VAR_1);

 FUNC_0(VAR_0->queue_mapping > VAR_2->num_tx_queues);
 return FUNC_2(VAR_0,
          &VAR_2->tx_queue[VAR_0->queue_mapping],
          VAR_2, VAR_1);
}
