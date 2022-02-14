
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct ixgbe_hw {scalar_t__ adapter_stopped; } ;
struct ixgbevf_adapter {int state; int num_msix_vectors; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (struct ixgbevf_adapter*) ;
 int FUNC_2 (struct ixgbevf_adapter*) ;
 int FUNC_3 (struct ixgbevf_adapter*) ;
 int FUNC_4 (struct ixgbevf_adapter*) ;
 int FUNC_5 (struct ixgbevf_adapter*) ;
 int FUNC_6 (struct ixgbevf_adapter*) ;
 int FUNC_7 (struct ixgbevf_adapter*) ;
 int FUNC_8 (struct ixgbevf_adapter*) ;
 int FUNC_9 (struct ixgbevf_adapter*) ;
 int FUNC_10 (struct ixgbevf_adapter*) ;
 int FUNC_11 (struct ixgbevf_adapter*) ;
 int FUNC_12 (struct ixgbevf_adapter*) ;
 struct ixgbevf_adapter* FUNC_13 (struct net_device*) ;
 int FUNC_14 (char*) ;
 scalar_t__ FUNC_15 (int ,int *) ;

__attribute__((used)) static int FUNC_16(struct net_device *VAR_5)
{
 struct ixgbevf_adapter *VAR_6 = FUNC_13(VAR_5);
 struct ixgbe_hw *VAR_7 = &VAR_6->hw;
 int VAR_8;







 if (!VAR_6->num_msix_vectors)
  return -VAR_1;


 if (FUNC_15(VAR_4, &VAR_6->state))
  return -VAR_0;

 if (VAR_7->adapter_stopped) {
  FUNC_8(VAR_6);


  if (VAR_7->adapter_stopped) {
   VAR_8 = VAR_2;
   FUNC_14("Unable to start - perhaps the PF Driver isn't "
          "up yet\n");
   goto err_setup_reset;
  }
 }


 VAR_8 = FUNC_11(VAR_6);
 if (VAR_8)
  goto err_setup_queues;


 VAR_8 = FUNC_10(VAR_6);
 if (VAR_8)
  goto err_setup_tx;


 VAR_8 = FUNC_9(VAR_6);
 if (VAR_8)
  goto err_setup_rx;

 FUNC_1(VAR_6);






 FUNC_6(VAR_6);

 FUNC_12(VAR_6);


 FUNC_0(VAR_7, VAR_3);
 VAR_8 = FUNC_7(VAR_6);
 if (VAR_8)
  goto err_req_irq;

 FUNC_5(VAR_6);

 return 0;

err_req_irq:
 FUNC_2(VAR_6);
err_setup_rx:
 FUNC_3(VAR_6);
err_setup_tx:
 FUNC_4(VAR_6);
err_setup_queues:
 FUNC_8(VAR_6);

err_setup_reset:

 return VAR_8;
}
