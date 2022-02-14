
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct ixgbe_ring {size_t dcb_tc; int state; } ;
struct ixgbe_hw_stats {int * pxoffrxc; } ;
struct TYPE_6__ {int type; } ;
struct ixgbe_hw {TYPE_3__ mac; } ;
struct TYPE_4__ {int pfc_mode_enable; } ;
struct ixgbe_adapter {int flags; int num_tx_queues; struct ixgbe_ring** tx_ring; int netdev; TYPE_2__* ixgbe_ieee_pfc; TYPE_1__ dcb_cfg; struct ixgbe_hw_stats stats; struct ixgbe_hw hw; } ;
struct TYPE_5__ {int pfc_en; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_3 (int ,int *) ;

 int FUNC_4 (struct ixgbe_adapter*) ;
 size_t FUNC_5 (int ,int) ;

__attribute__((used)) static void FUNC_6(struct ixgbe_adapter *VAR_3)
{
 struct ixgbe_hw *VAR_4 = &VAR_3->hw;
 struct ixgbe_hw_stats *VAR_5 = &VAR_3->stats;
 u32 VAR_6[8] = {0};
 u8 VAR_7;
 int VAR_8;
 bool VAR_9 = VAR_3->dcb_cfg.pfc_mode_enable;

 if (VAR_3->ixgbe_ieee_pfc)
  VAR_9 |= !!(VAR_3->ixgbe_ieee_pfc->pfc_en);

 if (!(VAR_3->flags & VAR_0) || !VAR_9) {
  FUNC_4(VAR_3);
  return;
 }


 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  u32 VAR_10;

  switch (VAR_4->mac.type) {
  case 128:
   VAR_10 = FUNC_2(VAR_4, FUNC_0(VAR_8));
   break;
  default:
   VAR_10 = FUNC_2(VAR_4, FUNC_1(VAR_8));
  }
  VAR_5->pxoffrxc[VAR_8] += VAR_10;

  VAR_7 = FUNC_5(VAR_3->netdev, VAR_8);
  VAR_6[VAR_7] += VAR_10;
 }


 for (VAR_8 = 0; VAR_8 < VAR_3->num_tx_queues; VAR_8++) {
  struct ixgbe_ring *VAR_11 = VAR_3->tx_ring[VAR_8];

  VAR_7 = VAR_11->dcb_tc;
  if (VAR_6[VAR_7])
   FUNC_3(VAR_2, &VAR_11->state);
 }
}
