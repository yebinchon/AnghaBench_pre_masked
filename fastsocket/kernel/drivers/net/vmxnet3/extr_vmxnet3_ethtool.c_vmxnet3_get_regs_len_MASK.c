
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct vmxnet3_adapter {int num_tx_queues; int num_rx_queues; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct vmxnet3_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static int
FUNC_1(struct net_device *VAR_2)
{
 struct vmxnet3_adapter *VAR_3 = FUNC_0(VAR_2);
 return (VAR_3->num_tx_queues * VAR_1 * sizeof(u32) +
  VAR_3->num_rx_queues * VAR_0 * sizeof(u32));
}
