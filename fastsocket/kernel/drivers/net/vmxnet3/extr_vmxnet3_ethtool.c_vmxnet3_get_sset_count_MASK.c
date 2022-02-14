
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxnet3_adapter {int num_tx_queues; int num_rx_queues; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;

 struct vmxnet3_adapter* FUNC_1 (struct net_device*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_6, int VAR_7)
{
 struct vmxnet3_adapter *VAR_8 = FUNC_1(VAR_6);
 switch (VAR_7) {
 case 128:
  return (FUNC_0(VAR_4) +
   FUNC_0(VAR_5)) *
         VAR_8->num_tx_queues +
         (FUNC_0(VAR_2) +
   FUNC_0(VAR_3)) *
         VAR_8->num_rx_queues +
   FUNC_0(VAR_1);
 default:
  return -VAR_0;
 }
}
