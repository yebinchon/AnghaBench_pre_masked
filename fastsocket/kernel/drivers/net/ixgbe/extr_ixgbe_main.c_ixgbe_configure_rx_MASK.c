
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_3__ {int (* enable_rx_dma ) (struct ixgbe_hw*,int) ;} ;
struct TYPE_4__ {scalar_t__ type; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbe_adapter {int num_rx_queues; int * rx_ring; struct ixgbe_hw hw; } ;


 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 int FUNC_2 (struct ixgbe_adapter*,int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct ixgbe_adapter*) ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 int FUNC_5 (struct ixgbe_adapter*) ;
 int FUNC_6 (struct ixgbe_adapter*) ;
 int FUNC_7 (struct ixgbe_hw*,int) ;

__attribute__((used)) static void FUNC_8(struct ixgbe_adapter *VAR_4)
{
 struct ixgbe_hw *VAR_5 = &VAR_4->hw;
 int VAR_6;
 u32 VAR_7;


 VAR_7 = FUNC_0(VAR_5, VAR_0);
 FUNC_1(VAR_5, VAR_0, VAR_7 & ~VAR_2);

 FUNC_5(VAR_4);
 FUNC_6(VAR_4);


 FUNC_4(VAR_4);


 FUNC_3(VAR_4);





 for (VAR_6 = 0; VAR_6 < VAR_4->num_rx_queues; VAR_6++)
  FUNC_2(VAR_4, VAR_4->rx_ring[VAR_6]);


 if (VAR_5->mac.type == VAR_3)
  VAR_7 |= VAR_1;


 VAR_7 |= VAR_2;
 VAR_5->mac.ops.enable_rx_dma(VAR_5, VAR_7);
}
