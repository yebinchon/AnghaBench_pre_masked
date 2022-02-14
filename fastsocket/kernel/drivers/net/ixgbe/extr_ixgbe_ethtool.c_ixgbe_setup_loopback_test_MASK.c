
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct TYPE_3__ {int (* write_analog_reg8 ) (struct ixgbe_hw*,int ,int ) ;int (* read_analog_reg8 ) (struct ixgbe_hw*,int ,int *) ;} ;
struct TYPE_4__ {scalar_t__ type; int orig_autoc; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int) ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_3 (struct ixgbe_hw*,int ,int *) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_5 (struct ixgbe_hw*,int ,int *) ;
 int FUNC_6 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_7 (struct ixgbe_hw*,int ,int *) ;
 int FUNC_8 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_9 (struct ixgbe_hw*,int ,int *) ;
 int FUNC_10 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_11 (int,int) ;

__attribute__((used)) static int FUNC_12(struct ixgbe_adapter *VAR_20)
{
 struct ixgbe_hw *VAR_21 = &VAR_20->hw;
 u32 VAR_22;



 VAR_22 = FUNC_0(VAR_21, VAR_14);
 VAR_22 |= VAR_15;
 FUNC_2(VAR_21, VAR_14, VAR_22);

 VAR_22 = FUNC_0(VAR_21, VAR_10);
 VAR_22 |= VAR_11 | VAR_13 | VAR_12;
 FUNC_2(VAR_21, VAR_10, VAR_22);


 if (VAR_20->hw.mac.type == VAR_19) {
  VAR_22 = FUNC_0(VAR_21, VAR_16);
  VAR_22 |= VAR_17;
  FUNC_2(VAR_21, VAR_16, VAR_22);
 } else {
  if (VAR_21->mac.orig_autoc) {
   VAR_22 = VAR_21->mac.orig_autoc | VAR_9;
   FUNC_2(VAR_21, VAR_8, VAR_22);
  } else {
   return 10;
  }
 }
 FUNC_1(VAR_21);
 FUNC_11(10000, 20000);


 if (VAR_21->mac.type == VAR_18) {
  u8 VAR_23;

  VAR_21->mac.ops.read_analog_reg8(VAR_21, VAR_3, &VAR_23);
  VAR_23 |= VAR_7;
  VAR_21->mac.ops.write_analog_reg8(VAR_21, VAR_3, VAR_23);

  VAR_21->mac.ops.read_analog_reg8(VAR_21, VAR_0, &VAR_23);
  VAR_23 |= VAR_4;
  VAR_21->mac.ops.write_analog_reg8(VAR_21, VAR_0, VAR_23);

  VAR_21->mac.ops.read_analog_reg8(VAR_21, VAR_1, &VAR_23);
  VAR_23 |= VAR_5;
  VAR_21->mac.ops.write_analog_reg8(VAR_21, VAR_1, VAR_23);

  VAR_21->mac.ops.read_analog_reg8(VAR_21, VAR_2, &VAR_23);
  VAR_23 |= VAR_6;
  VAR_21->mac.ops.write_analog_reg8(VAR_21, VAR_2, VAR_23);
 }

 return 0;
}
