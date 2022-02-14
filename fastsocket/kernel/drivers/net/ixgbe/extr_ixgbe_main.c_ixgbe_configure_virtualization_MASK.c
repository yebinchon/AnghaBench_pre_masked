
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_5__ {int (* set_mac_anti_spoofing ) (struct ixgbe_hw*,int,scalar_t__) ;int (* set_vmdq ) (struct ixgbe_hw*,int ,int) ;} ;
struct TYPE_6__ {TYPE_2__ ops; } ;
struct ixgbe_hw {TYPE_3__ mac; } ;
struct ixgbe_adapter {int flags; int antispoofing_enabled; scalar_t__ num_vfs; TYPE_1__* ring_feature; struct ixgbe_hw hw; } ;
struct TYPE_4__ {int mask; } ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (struct ixgbe_hw*,int ,int) ;
 size_t VAR_12 ;
 int FUNC_4 (int ) ;
 int FUNC_5 (struct ixgbe_hw*,int ,int) ;
 int FUNC_6 (struct ixgbe_hw*,int,scalar_t__) ;

__attribute__((used)) static void FUNC_7(struct ixgbe_adapter *VAR_13)
{
 struct ixgbe_hw *VAR_14 = &VAR_13->hw;
 u32 VAR_15, VAR_16;
 u32 VAR_17, VAR_18;

 if (!(VAR_13->flags & VAR_0))
  return;

 VAR_18 = FUNC_0(VAR_14, VAR_8);
 VAR_18 |= VAR_7;
 VAR_18 &= ~VAR_9;
 VAR_18 |= FUNC_4(0) << VAR_10;
 VAR_18 |= VAR_11;
 FUNC_3(VAR_14, VAR_8, VAR_18);

 VAR_16 = FUNC_4(0) % 32;
 VAR_15 = (FUNC_4(0) >= 32) ? 1 : 0;


 FUNC_3(VAR_14, FUNC_1(VAR_15), (~0) << VAR_16);
 FUNC_3(VAR_14, FUNC_1(VAR_15 ^ 1), VAR_15 - 1);
 FUNC_3(VAR_14, FUNC_2(VAR_15), (~0) << VAR_16);
 FUNC_3(VAR_14, FUNC_2(VAR_15 ^ 1), VAR_15 - 1);
 FUNC_3(VAR_14, VAR_5, VAR_6);


 VAR_14->mac.ops.set_vmdq(VAR_14, 0, FUNC_4(0));





 switch (VAR_13->ring_feature[VAR_12].mask) {
 case 128:
  VAR_17 = VAR_2;
  break;
 case 129:
  VAR_17 = VAR_3;
  break;
 default:
  VAR_17 = VAR_4;
  break;
 }

 FUNC_3(VAR_14, VAR_1, VAR_17);


 FUNC_3(VAR_14, VAR_5, VAR_6);


 VAR_14->mac.ops.set_mac_anti_spoofing(VAR_14,
       (VAR_13->antispoofing_enabled =
        (VAR_13->num_vfs != 0)),
       VAR_13->num_vfs);
}
