
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u32 ;
struct ixgbe_ring {int reg_idx; int netdev; int * dev; scalar_t__ queue_index; int count; } ;
struct TYPE_8__ {int type; } ;
struct TYPE_11__ {TYPE_2__ mac; } ;
struct ixgbe_adapter {TYPE_5__ hw; TYPE_4__** rx_ring; int netdev; TYPE_3__* pdev; TYPE_1__** tx_ring; struct ixgbe_ring test_rx_ring; struct ixgbe_ring test_tx_ring; } ;
struct TYPE_10__ {int reg_idx; } ;
struct TYPE_9__ {int dev; } ;
struct TYPE_7__ {int reg_idx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_5__*,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (TYPE_5__*,int ,int) ;
 int FUNC_2 (struct ixgbe_adapter*,struct ixgbe_ring*) ;
 int FUNC_3 (struct ixgbe_adapter*,struct ixgbe_ring*) ;
 int FUNC_4 (struct ixgbe_adapter*) ;


 int FUNC_5 (struct ixgbe_ring*) ;
 int FUNC_6 (struct ixgbe_ring*) ;

__attribute__((used)) static int FUNC_7(struct ixgbe_adapter *VAR_7)
{
 struct ixgbe_ring *VAR_8 = &VAR_7->test_tx_ring;
 struct ixgbe_ring *VAR_9 = &VAR_7->test_rx_ring;
 u32 VAR_10, VAR_11;
 int VAR_12;
 int VAR_13;


 VAR_8->count = VAR_1;
 VAR_8->queue_index = 0;
 VAR_8->dev = &VAR_7->pdev->dev;
 VAR_8->netdev = VAR_7->netdev;
 VAR_8->reg_idx = VAR_7->tx_ring[0]->reg_idx;

 VAR_13 = FUNC_6(VAR_8);
 if (VAR_13)
  return 1;

 switch (VAR_7->hw.mac.type) {
 case 129:
 case 128:
  VAR_11 = FUNC_0(&VAR_7->hw, VAR_2);
  VAR_11 |= VAR_3;
  FUNC_1(&VAR_7->hw, VAR_2, VAR_11);
  break;
 default:
  break;
 }

 FUNC_3(VAR_7, VAR_8);


 VAR_9->count = VAR_0;
 VAR_9->queue_index = 0;
 VAR_9->dev = &VAR_7->pdev->dev;
 VAR_9->netdev = VAR_7->netdev;
 VAR_9->reg_idx = VAR_7->rx_ring[0]->reg_idx;

 VAR_13 = FUNC_5(VAR_9);
 if (VAR_13) {
  VAR_12 = 4;
  goto err_nomem;
 }

 VAR_10 = FUNC_0(&VAR_7->hw, VAR_4);
 FUNC_1(&VAR_7->hw, VAR_4, VAR_10 & ~VAR_6);

 FUNC_2(VAR_7, VAR_9);

 VAR_10 |= VAR_6 | VAR_5;
 FUNC_1(&VAR_7->hw, VAR_4, VAR_10);

 return 0;

err_nomem:
 FUNC_4(VAR_7);
 return VAR_12;
}
