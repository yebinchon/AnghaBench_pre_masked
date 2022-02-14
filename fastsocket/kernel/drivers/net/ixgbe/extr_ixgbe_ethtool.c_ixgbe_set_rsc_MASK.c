
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_ring {int dummy; } ;
struct ixgbe_adapter {int num_rx_queues; int flags2; struct ixgbe_ring** rx_ring; } ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_adapter*,struct ixgbe_ring*) ;
 int FUNC_1 (struct ixgbe_adapter*,struct ixgbe_ring*) ;
 int FUNC_2 (struct ixgbe_ring*) ;

__attribute__((used)) static void FUNC_3(struct ixgbe_adapter *VAR_1)
{
 int VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_1->num_rx_queues; VAR_2++) {
  struct ixgbe_ring *VAR_3 = VAR_1->rx_ring[VAR_2];
  if (VAR_1->flags2 & VAR_0) {
   FUNC_2(VAR_3);
   FUNC_1(VAR_1, VAR_3);
  } else {
   FUNC_0(VAR_1, VAR_3);
  }
 }
}
