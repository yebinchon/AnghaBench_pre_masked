
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_3__ {int (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;int (* write_reg ) (struct ixgbe_hw*,int ,int ,int) ;} ;
struct TYPE_4__ {int autoneg_advertised; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;
typedef int s32 ;
typedef int ixgbe_link_speed ;


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
 int FUNC_0 (struct ixgbe_hw*,char*) ;
 int FUNC_1 (struct ixgbe_hw*,int*,int*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ,int*) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int ,int) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int ,int*) ;
 int FUNC_5 (struct ixgbe_hw*,int ,int ,int) ;
 int FUNC_6 (struct ixgbe_hw*,int ,int ,int*) ;
 int FUNC_7 (struct ixgbe_hw*,int ,int ,int) ;
 int FUNC_8 (struct ixgbe_hw*,int ,int ,int*) ;
 int FUNC_9 (struct ixgbe_hw*,int ,int ,int) ;
 int FUNC_10 (struct ixgbe_hw*,int ,int ,int*) ;
 int FUNC_11 (int) ;

s32 FUNC_12(struct ixgbe_hw *VAR_17)
{
 s32 VAR_18 = 0;
 u32 VAR_19;
 u32 VAR_20 = 10;
 u16 VAR_21 = VAR_7;
 bool VAR_22 = 0;
 ixgbe_link_speed VAR_23;

 FUNC_1(VAR_17, &VAR_23, &VAR_22);

 if (VAR_23 & VAR_4) {

  VAR_17->phy.ops.read_reg(VAR_17, VAR_9,
         VAR_15,
         &VAR_21);

  VAR_21 &= ~VAR_10;
  if (VAR_17->phy.autoneg_advertised & VAR_4)
   VAR_21 |= VAR_10;

  VAR_17->phy.ops.write_reg(VAR_17, VAR_9,
          VAR_15,
          VAR_21);
 }

 if (VAR_23 & VAR_5) {

  VAR_17->phy.ops.read_reg(VAR_17,
         VAR_8,
         VAR_15,
         &VAR_21);

  VAR_21 &= ~VAR_6;
  if (VAR_17->phy.autoneg_advertised & VAR_5)
   VAR_21 |= VAR_6;

  VAR_17->phy.ops.write_reg(VAR_17,
          VAR_8,
          VAR_15,
          VAR_21);
 }

 if (VAR_23 & VAR_3) {

  VAR_17->phy.ops.read_reg(VAR_17, VAR_11,
         VAR_15,
         &VAR_21);

  VAR_21 &= ~(VAR_0 |
     VAR_1);
  if (VAR_17->phy.autoneg_advertised & VAR_3)
   VAR_21 |= VAR_0;

  VAR_17->phy.ops.write_reg(VAR_17, VAR_11,
          VAR_15,
          VAR_21);
 }


 VAR_17->phy.ops.read_reg(VAR_17, VAR_14,
        VAR_15, &VAR_21);

 VAR_21 |= VAR_12;

 VAR_17->phy.ops.write_reg(VAR_17, VAR_14,
         VAR_15, VAR_21);


 for (VAR_19 = 0; VAR_19 < VAR_20; VAR_19++) {
  FUNC_11(10);

  VAR_18 = VAR_17->phy.ops.read_reg(VAR_17, VAR_16,
           VAR_15,
           &VAR_21);

  VAR_21 &= VAR_13;
  if (VAR_21 == VAR_13) {
   break;
  }
 }

 if (VAR_19 == VAR_20) {
  VAR_18 = VAR_2;
  FUNC_0(VAR_17, "ixgbe_setup_phy_link_generic: time out");
 }

 return VAR_18;
}
