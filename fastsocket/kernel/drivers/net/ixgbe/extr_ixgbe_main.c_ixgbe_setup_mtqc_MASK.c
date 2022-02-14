
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {scalar_t__ type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {int flags; TYPE_2__* ring_feature; int netdev; struct ixgbe_hw hw; } ;
struct TYPE_4__ {int indices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_1 (struct ixgbe_hw*,int ,int) ;
 size_t VAR_13 ;
 scalar_t__ VAR_14 ;
 int FUNC_2 (int ) ;

__attribute__((used)) static void FUNC_3(struct ixgbe_adapter *VAR_15)
{
 struct ixgbe_hw *VAR_16 = &VAR_15->hw;
 u32 VAR_17, VAR_18;
 u8 VAR_19 = FUNC_2(VAR_15->netdev);

 if (VAR_16->mac.type == VAR_14)
  return;


 VAR_17 = FUNC_0(VAR_16, VAR_9);
 VAR_17 |= VAR_10;
 FUNC_1(VAR_16, VAR_9, VAR_17);


 if (VAR_15->flags & VAR_0) {
  VAR_18 = VAR_8;
  if (VAR_19 > 4)
   VAR_18 |= VAR_7 | VAR_6;
  else if (VAR_19 > 1)
   VAR_18 |= VAR_7 | VAR_3;
  else if (VAR_15->ring_feature[VAR_13].indices == 4)
   VAR_18 |= VAR_2;
  else
   VAR_18 |= VAR_5;
 } else {
  if (VAR_19 > 4)
   VAR_18 = VAR_7 | VAR_6;
  else if (VAR_19 > 1)
   VAR_18 = VAR_7 | VAR_3;
  else
   VAR_18 = VAR_4;
 }

 FUNC_1(VAR_16, VAR_1, VAR_18);


 if (VAR_19) {
  u32 VAR_20 = FUNC_0(VAR_16, VAR_11);
  VAR_20 |= VAR_12;
  FUNC_1(VAR_16, VAR_11, VAR_20);
 }


 VAR_17 &= ~VAR_10;
 FUNC_1(VAR_16, VAR_9, VAR_17);
}
