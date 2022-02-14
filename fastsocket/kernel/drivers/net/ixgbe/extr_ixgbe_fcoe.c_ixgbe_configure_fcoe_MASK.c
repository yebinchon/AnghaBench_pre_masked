
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct ixgbe_ring_feature {int offset; int indices; } ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {int flags; TYPE_2__** rx_ring; TYPE_1__* netdev; struct ixgbe_hw hw; struct ixgbe_ring_feature* ring_feature; } ;
struct TYPE_4__ {int reg_idx; } ;
struct TYPE_3__ {int features; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_2 (int) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int FUNC_3 (struct ixgbe_hw*,int ,int) ;
 int VAR_20 ;
 size_t VAR_21 ;
 int FUNC_4 (int ) ;

void FUNC_5(struct ixgbe_adapter *VAR_22)
{
 struct ixgbe_ring_feature *VAR_23 = &VAR_22->ring_feature[VAR_21];
 struct ixgbe_hw *VAR_24 = &VAR_22->hw;
 int VAR_25, VAR_26, VAR_27;
 u32 VAR_28;


 if (!(VAR_22->netdev->features & VAR_20))
  return;


 VAR_28 = VAR_0 | VAR_3 | VAR_4;
 if (VAR_22->flags & VAR_19) {
  VAR_28 |= VAR_7;
  VAR_28 |= FUNC_4(0) << VAR_8;
 }
 FUNC_3(VAR_24, FUNC_0(VAR_5), VAR_28);
 FUNC_3(VAR_24, FUNC_1(VAR_5), 0);


 if (!(VAR_22->flags & VAR_18))
  return;


 for (VAR_25 = 0; VAR_25 < VAR_14; VAR_25++) {
  VAR_27 = VAR_23->offset + (VAR_25 % VAR_23->indices);
  VAR_27 &= VAR_13;
  VAR_26 = VAR_22->rx_ring[VAR_27]->reg_idx;
  FUNC_3(VAR_24, FUNC_2(VAR_25), VAR_26);
 }
 FUNC_3(VAR_24, VAR_11, VAR_12);


 VAR_28 = VAR_1 | VAR_4;
 if (VAR_22->flags & VAR_19) {
  VAR_28 |= VAR_7;
  VAR_28 |= FUNC_4(0) << VAR_8;
 }
 FUNC_3(VAR_24, FUNC_0(VAR_6), VAR_28);


 VAR_26 = VAR_22->rx_ring[VAR_23->offset]->reg_idx;
 FUNC_3(VAR_24, FUNC_1(VAR_6),
   VAR_9 |
   (VAR_26 << VAR_10));


 FUNC_3(VAR_24, VAR_15,
   VAR_16 |
   (VAR_2 << VAR_17));
}
