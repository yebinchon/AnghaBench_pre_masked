
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct ixgbe_ring_feature {int offset; int mask; int indices; } ;
struct ixgbe_adapter {int flags; int num_rx_queues; int num_tx_queues; TYPE_2__** tx_ring; TYPE_1__** rx_ring; struct ixgbe_ring_feature* ring_feature; } ;
struct TYPE_4__ {int reg_idx; } ;
struct TYPE_3__ {int reg_idx; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 size_t VAR_2 ;
 size_t VAR_3 ;
 int FUNC_0 (int,int) ;

__attribute__((used)) static bool FUNC_1(struct ixgbe_adapter *VAR_4)
{



 struct ixgbe_ring_feature *VAR_5 = &VAR_4->ring_feature[VAR_3];
 struct ixgbe_ring_feature *VAR_6 = &VAR_4->ring_feature[VAR_2];
 int VAR_7;
 u16 VAR_8;


 if (!(VAR_4->flags & VAR_0))
  return 0;


 VAR_8 = VAR_5->offset * FUNC_0(1, ~VAR_5->mask);
 for (VAR_7 = 0; VAR_7 < VAR_4->num_rx_queues; VAR_7++, VAR_8++) {






  if ((VAR_8 & ~VAR_5->mask) >= VAR_6->indices)
   VAR_8 = FUNC_0(VAR_8, ~VAR_5->mask);
  VAR_4->rx_ring[VAR_7]->reg_idx = VAR_8;
 }







 VAR_8 = VAR_5->offset * FUNC_0(1, ~VAR_5->mask);
 for (VAR_7 = 0; VAR_7 < VAR_4->num_tx_queues; VAR_7++, VAR_8++) {






  if ((VAR_8 & VAR_6->mask) >= VAR_6->indices)
   VAR_8 = FUNC_0(VAR_8, ~VAR_5->mask);
  VAR_4->tx_ring[VAR_7]->reg_idx = VAR_8;
 }
 return 1;
}
