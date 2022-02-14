
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ixgbe_adapter {int num_rx_pools; int num_tx_queues; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_adapter*) ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 int FUNC_3 (struct ixgbe_adapter*) ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 int FUNC_5 (struct ixgbe_adapter*) ;
 int FUNC_6 (struct ixgbe_adapter*) ;
 int FUNC_7 (struct ixgbe_adapter*) ;
 int FUNC_8 (struct ixgbe_adapter*) ;
 struct ixgbe_adapter* FUNC_9 (struct net_device*) ;
 int FUNC_10 (struct net_device*) ;
 int FUNC_11 (struct net_device*,int) ;
 scalar_t__ FUNC_12 (int ,int *) ;

__attribute__((used)) static int FUNC_13(struct net_device *VAR_2)
{
 struct ixgbe_adapter *VAR_3 = FUNC_9(VAR_2);
 int VAR_4;


 if (FUNC_12(VAR_1, &VAR_3->state))
  return -VAR_0;

 FUNC_10(VAR_2);


 VAR_4 = FUNC_7(VAR_3);
 if (VAR_4)
  goto err_setup_tx;


 VAR_4 = FUNC_6(VAR_3);
 if (VAR_4)
  goto err_setup_rx;

 FUNC_0(VAR_3);

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4)
  goto err_req_irq;


 FUNC_11(VAR_2,
         VAR_3->num_rx_pools > 1 ? 1 :
         VAR_3->num_tx_queues);





 FUNC_8(VAR_3);

 return 0;

err_req_irq:
 FUNC_1(VAR_3);
err_setup_rx:
 FUNC_2(VAR_3);
err_setup_tx:
 FUNC_5(VAR_3);

 return VAR_4;
}
