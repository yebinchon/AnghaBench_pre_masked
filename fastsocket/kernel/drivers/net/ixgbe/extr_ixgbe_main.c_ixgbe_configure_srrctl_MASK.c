
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct ixgbe_ring {int reg_idx; } ;
struct TYPE_3__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {TYPE_2__* ring_feature; struct ixgbe_hw hw; } ;
struct TYPE_4__ {int mask; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 size_t VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_2 (struct ixgbe_ring*) ;

__attribute__((used)) static void FUNC_3(struct ixgbe_adapter *VAR_6,
       struct ixgbe_ring *VAR_7)
{
 struct ixgbe_hw *VAR_8 = &VAR_6->hw;
 u32 VAR_9;
 u8 VAR_10 = VAR_7->reg_idx;

 if (VAR_8->mac.type == VAR_5) {
  u16 VAR_11 = VAR_6->ring_feature[VAR_4].mask;





  VAR_10 &= VAR_11;
 }


 VAR_9 = VAR_0 << VAR_1;


 VAR_9 |= FUNC_2(VAR_7) >> VAR_2;


 VAR_9 |= VAR_3;

 FUNC_1(VAR_8, FUNC_0(VAR_10), VAR_9);
}
