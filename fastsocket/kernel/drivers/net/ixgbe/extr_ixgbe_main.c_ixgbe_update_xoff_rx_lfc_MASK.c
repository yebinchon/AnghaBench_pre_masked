
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u32 ;
struct ixgbe_hw_stats {int lxoffrxc; } ;
struct TYPE_5__ {int type; } ;
struct TYPE_4__ {scalar_t__ current_mode; } ;
struct ixgbe_hw {TYPE_2__ mac; TYPE_1__ fc; } ;
struct ixgbe_adapter {int num_tx_queues; TYPE_3__** tx_ring; struct ixgbe_hw_stats stats; struct ixgbe_hw hw; } ;
struct TYPE_6__ {int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_2 ;
 int FUNC_1 (int ,int *) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;


__attribute__((used)) static void FUNC_2(struct ixgbe_adapter *VAR_5)
{
 struct ixgbe_hw *VAR_6 = &VAR_5->hw;
 struct ixgbe_hw_stats *VAR_7 = &VAR_5->stats;
 int VAR_8;
 u32 VAR_9;

 if ((VAR_6->fc.current_mode != VAR_3) &&
     (VAR_6->fc.current_mode != VAR_4))
  return;

 switch (VAR_6->mac.type) {
 case 128:
  VAR_9 = FUNC_0(VAR_6, VAR_0);
  break;
 default:
  VAR_9 = FUNC_0(VAR_6, VAR_1);
 }
 VAR_7->lxoffrxc += VAR_9;


 if (!VAR_9)
  return;

 for (VAR_8 = 0; VAR_8 < VAR_5->num_tx_queues; VAR_8++)
  FUNC_1(VAR_2,
     &VAR_5->tx_ring[VAR_8]->state);
}
