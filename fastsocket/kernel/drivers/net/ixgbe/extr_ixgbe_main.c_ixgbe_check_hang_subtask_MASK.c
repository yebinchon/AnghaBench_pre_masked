
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_4__ {scalar_t__ ring; } ;
struct TYPE_3__ {scalar_t__ ring; } ;
struct ixgbe_q_vector {TYPE_2__ tx; TYPE_1__ rx; } ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {int num_tx_queues; int flags; int num_q_vectors; struct ixgbe_q_vector** q_vector; int * tx_ring; int netdev; int state; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixgbe_hw*,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (struct ixgbe_adapter*,int) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ,int *) ;

__attribute__((used)) static void FUNC_5(struct ixgbe_adapter *VAR_6)
{
 struct ixgbe_hw *VAR_7 = &VAR_6->hw;
 u64 VAR_8 = 0;
 int VAR_9;


 if (FUNC_4(VAR_4, &VAR_6->state) ||
     FUNC_4(VAR_5, &VAR_6->state))
  return;


 if (FUNC_2(VAR_6->netdev)) {
  for (VAR_9 = 0; VAR_9 < VAR_6->num_tx_queues; VAR_9++)
   FUNC_3(VAR_6->tx_ring[VAR_9]);
 }

 if (!(VAR_6->flags & VAR_3)) {





  FUNC_0(VAR_7, VAR_0,
   (VAR_2 | VAR_1));
 } else {

  for (VAR_9 = 0; VAR_9 < VAR_6->num_q_vectors; VAR_9++) {
   struct ixgbe_q_vector *VAR_10 = VAR_6->q_vector[VAR_9];
   if (VAR_10->rx.ring || VAR_10->tx.ring)
    VAR_8 |= ((u64)1 << VAR_9);
  }
 }


 FUNC_1(VAR_6, VAR_8);

}
