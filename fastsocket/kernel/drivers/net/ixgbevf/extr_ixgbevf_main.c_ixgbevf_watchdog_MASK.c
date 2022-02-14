
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {scalar_t__ ring; } ;
struct TYPE_3__ {scalar_t__ ring; } ;
struct ixgbevf_q_vector {TYPE_2__ tx; TYPE_1__ rx; } ;
struct ixgbe_hw {int dummy; } ;
struct ixgbevf_adapter {int num_msix_vectors; int watchdog_task; struct ixgbevf_q_vector** q_vector; int state; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,int ,int) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(unsigned long VAR_3)
{
 struct ixgbevf_adapter *VAR_4 = (struct ixgbevf_adapter *)VAR_3;
 struct ixgbe_hw *VAR_5 = &VAR_4->hw;
 u32 VAR_6 = 0;
 int VAR_7;






 if (FUNC_2(VAR_2, &VAR_4->state))
  goto watchdog_short_circuit;


 for (VAR_7 = 0; VAR_7 < VAR_4->num_msix_vectors - VAR_1; VAR_7++) {
  struct ixgbevf_q_vector *VAR_8 = VAR_4->q_vector[VAR_7];
  if (VAR_8->rx.ring || VAR_8->tx.ring)
   VAR_6 |= 1 << VAR_7;
 }

 FUNC_0(VAR_5, VAR_0, VAR_6);

watchdog_short_circuit:
 FUNC_1(&VAR_4->watchdog_task);
}
