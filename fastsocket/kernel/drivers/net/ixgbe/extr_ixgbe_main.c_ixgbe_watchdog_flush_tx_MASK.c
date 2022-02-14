
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ixgbe_ring {scalar_t__ next_to_use; scalar_t__ next_to_clean; } ;
struct ixgbe_adapter {int num_tx_queues; int flags2; struct ixgbe_ring** tx_ring; int netdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void FUNC_2(struct ixgbe_adapter *VAR_2)
{
 int VAR_3;
 int VAR_4 = 0;

 if (!FUNC_1(VAR_2->netdev)) {
  for (VAR_3 = 0; VAR_3 < VAR_2->num_tx_queues; VAR_3++) {
   struct ixgbe_ring *VAR_5 = VAR_2->tx_ring[VAR_3];
   if (VAR_5->next_to_use != VAR_5->next_to_clean) {
    VAR_4 = 1;
    break;
   }
  }

  if (VAR_4) {





   FUNC_0(VAR_1, "initiating reset to clear Tx work after link loss\n");
   VAR_2->flags2 |= VAR_0;
  }
 }
}
