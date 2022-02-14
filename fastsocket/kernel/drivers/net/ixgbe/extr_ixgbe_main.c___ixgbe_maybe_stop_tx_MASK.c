
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u16 ;
struct TYPE_2__ {int restart_queue; } ;
struct ixgbe_ring {TYPE_1__ tx_stats; int queue_index; int netdev; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct ixgbe_ring*) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;

__attribute__((used)) static int FUNC_5(struct ixgbe_ring *VAR_1, u16 VAR_2)
{
 FUNC_3(VAR_1->netdev, VAR_1->queue_index);



 FUNC_4();



 if (FUNC_1(FUNC_0(VAR_1) < VAR_2))
  return -VAR_0;


 FUNC_2(VAR_1->netdev, VAR_1->queue_index);
 ++VAR_1->tx_stats.restart_queue;
 return 0;
}
