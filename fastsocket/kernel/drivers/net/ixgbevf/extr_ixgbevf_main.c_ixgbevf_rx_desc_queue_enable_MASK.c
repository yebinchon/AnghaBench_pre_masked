
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ixgbe_hw {int dummy; } ;
struct ixgbevf_adapter {TYPE_1__* rx_ring; struct ixgbe_hw hw; } ;
struct TYPE_2__ {int reg_idx; scalar_t__ count; } ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_1 ;
 int FUNC_1 (int) ;
 int FUNC_2 (struct ixgbe_hw*,char*,int) ;
 int FUNC_3 (struct ixgbe_hw*,TYPE_1__*,scalar_t__) ;
 int FUNC_4 (int) ;

__attribute__((used)) static inline void FUNC_5(struct ixgbevf_adapter *VAR_2,
      int VAR_3)
{
 struct ixgbe_hw *VAR_4 = &VAR_2->hw;
 int VAR_5 = VAR_2->rx_ring[VAR_3].reg_idx;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  if (FUNC_0(VAR_4, FUNC_1(VAR_5)) & VAR_1)
   break;
  else
   FUNC_4(1);
 }
 if (VAR_6 >= VAR_0) {
  FUNC_2(VAR_4, "RXDCTL.ENABLE on Rx queue %d "
         "not set within the polling period\n", VAR_3);
 }

 FUNC_3(VAR_4, &VAR_2->rx_ring[VAR_3],
    VAR_2->rx_ring[VAR_3].count - 1);
}
