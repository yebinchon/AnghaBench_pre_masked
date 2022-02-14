
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct igb_ring {int reg_idx; int netdev; int * dev; int count; } ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {int vfs_allocated_count; int netdev; TYPE_1__* pdev; struct e1000_hw hw; struct igb_ring test_rx_ring; struct igb_ring test_tx_ring; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct igb_ring*,int ) ;
 int FUNC_1 (struct igb_adapter*,struct igb_ring*) ;
 int FUNC_2 (struct igb_adapter*,struct igb_ring*) ;
 int FUNC_3 (struct igb_ring*) ;
 int FUNC_4 (struct igb_adapter*) ;
 int FUNC_5 (struct igb_adapter*) ;
 scalar_t__ FUNC_6 (struct igb_ring*) ;
 int FUNC_7 (struct igb_adapter*) ;
 scalar_t__ FUNC_8 (struct igb_ring*) ;
 int FUNC_9 (int ,int) ;

__attribute__((used)) static int FUNC_10(struct igb_adapter *VAR_3)
{
 struct igb_ring *VAR_4 = &VAR_3->test_tx_ring;
 struct igb_ring *VAR_5 = &VAR_3->test_rx_ring;
 struct e1000_hw *VAR_6 = &VAR_3->hw;
 int VAR_7;


 VAR_4->count = VAR_2;
 VAR_4->dev = &VAR_3->pdev->dev;
 VAR_4->netdev = VAR_3->netdev;
 VAR_4->reg_idx = VAR_3->vfs_allocated_count;

 if (FUNC_8(VAR_4)) {
  VAR_7 = 1;
  goto err_nomem;
 }

 FUNC_7(VAR_3);
 FUNC_2(VAR_3, VAR_4);


 VAR_5->count = VAR_1;
 VAR_5->dev = &VAR_3->pdev->dev;
 VAR_5->netdev = VAR_3->netdev;
 VAR_5->reg_idx = VAR_3->vfs_allocated_count;

 if (FUNC_6(VAR_5)) {
  VAR_7 = 3;
  goto err_nomem;
 }


 FUNC_9(VAR_0, VAR_3->vfs_allocated_count << 3);


 FUNC_5(VAR_3);
 FUNC_1(VAR_3, VAR_5);

 FUNC_0(VAR_5, FUNC_3(VAR_5));

 return 0;

err_nomem:
 FUNC_4(VAR_3);
 return VAR_7;
}
