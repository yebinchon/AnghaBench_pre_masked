
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pch_gbe_hw {int dummy; } ;
struct pch_gbe_adapter {int tx_ring; int rx_ring; int wake_up_evt; struct pch_gbe_hw hw; } ;
struct net_device {int dummy; } ;


 struct pch_gbe_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct pch_gbe_adapter*,int ) ;
 int FUNC_2 (struct pch_gbe_adapter*,int ) ;
 int FUNC_3 (struct pch_gbe_hw*) ;
 int FUNC_4 (struct pch_gbe_hw*) ;
 int FUNC_5 (struct pch_gbe_adapter*) ;
 int FUNC_6 (struct pch_gbe_adapter*,int ) ;
 int FUNC_7 (struct pch_gbe_adapter*,int ) ;
 int FUNC_8 (struct pch_gbe_adapter*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11(struct net_device *VAR_0)
{
 struct pch_gbe_adapter *VAR_1 = FUNC_0(VAR_0);
 struct pch_gbe_hw *VAR_2 = &VAR_1->hw;
 int VAR_3;


 VAR_3 = FUNC_7(VAR_1, VAR_1->tx_ring);
 if (VAR_3)
  goto err_setup_tx;

 VAR_3 = FUNC_6(VAR_1, VAR_1->rx_ring);
 if (VAR_3)
  goto err_setup_rx;
 FUNC_4(VAR_2);
 VAR_3 = FUNC_8(VAR_1);
 if (VAR_3)
  goto err_up;
 FUNC_9("Success End\n");
 return 0;

err_up:
 if (!VAR_1->wake_up_evt)
  FUNC_3(VAR_2);
 FUNC_1(VAR_1, VAR_1->rx_ring);
err_setup_rx:
 FUNC_2(VAR_1, VAR_1->tx_ring);
err_setup_tx:
 FUNC_5(VAR_1);
 FUNC_10("Error End\n");
 return VAR_3;
}
