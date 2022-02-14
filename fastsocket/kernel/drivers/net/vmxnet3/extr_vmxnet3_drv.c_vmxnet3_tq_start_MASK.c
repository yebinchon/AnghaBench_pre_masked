
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxnet3_tx_queue {int stopped; } ;
struct vmxnet3_adapter {int tx_queue; int netdev; } ;


 int FUNC_0 (int ,struct vmxnet3_tx_queue*) ;

__attribute__((used)) static void
FUNC_1(struct vmxnet3_tx_queue *VAR_0, struct vmxnet3_adapter *VAR_1)
{
 VAR_0->stopped = 0;
 FUNC_0(VAR_1->netdev, VAR_0 - VAR_1->tx_queue);
}
