
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vmxnet3_adapter {int netdev; int work; int tx_timeout_count; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (int ,char*) ;
 struct vmxnet3_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void
FUNC_4(struct net_device *VAR_0)
{
 struct vmxnet3_adapter *VAR_1 = FUNC_1(VAR_0);
 VAR_1->tx_timeout_count++;

 FUNC_0(VAR_1->netdev, "tx hang\n");
 FUNC_3(&VAR_1->work);
 FUNC_2(VAR_1->netdev);
}
