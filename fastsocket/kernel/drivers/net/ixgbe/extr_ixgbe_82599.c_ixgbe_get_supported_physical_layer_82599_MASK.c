
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct TYPE_3__ {int (* read_i2c_eeprom ) (struct ixgbe_hw*,int ,int*) ;int (* identify_sfp ) (struct ixgbe_hw*) ;int (* read_reg ) (struct ixgbe_hw*,int ,int ,int*) ;int (* identify ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {int type; scalar_t__ sfp_type; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ phy; } ;


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
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int VAR_29 ;
 int VAR_30 ;
 int VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 int VAR_34 ;
 int VAR_35 ;
 int VAR_36 ;
 int VAR_37 ;
 int VAR_38 ;
 int VAR_39 ;
 scalar_t__ VAR_40 ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ,int*) ;
 int FUNC_3 (struct ixgbe_hw*) ;
 int FUNC_4 (struct ixgbe_hw*,int ,int*) ;
 int FUNC_5 (struct ixgbe_hw*,int ,int*) ;
 int FUNC_6 (struct ixgbe_hw*,int ,int*) ;

__attribute__((used)) static u32 FUNC_7(struct ixgbe_hw *VAR_41)
{
 u32 VAR_42 = VAR_28;
 u32 VAR_43 = FUNC_0(VAR_41, VAR_0);
 u32 VAR_44 = FUNC_0(VAR_41, VAR_1);
 u32 VAR_45 = VAR_44 & VAR_3;
 u32 VAR_46 = VAR_43 & VAR_7;
 u32 VAR_47 = VAR_43 & VAR_10;
 u16 VAR_48 = 0;
 u8 VAR_49 = 0;
 u8 VAR_50 = 0;

 VAR_41->phy.ops.identify(VAR_41);

 switch (VAR_41->phy.type) {
 case 128:
 case 141:
  VAR_41->phy.ops.read_reg(VAR_41, VAR_36, VAR_35,
        &VAR_48);
  if (VAR_48 & VAR_39)
   VAR_42 |= VAR_24;
  if (VAR_48 & VAR_37)
   VAR_42 |= VAR_17;
  if (VAR_48 & VAR_38)
   VAR_42 |= VAR_18;
  goto out;
 default:
  break;
 }

 switch (VAR_43 & VAR_14) {
 case 145:
 case 144:
  if (VAR_47 == VAR_9) {
   VAR_42 = VAR_16 |
       VAR_15;
   goto out;
  } else

   goto sfp_check;
  break;
 case 147:
  if (VAR_46 == VAR_5)
   VAR_42 = VAR_19;
  else if (VAR_46 == VAR_6)
   VAR_42 = VAR_21;
  else if (VAR_46 == VAR_8)
   VAR_42 = VAR_25;
  goto out;
  break;
 case 146:
  if (VAR_45 == VAR_2) {
   VAR_42 = VAR_20;
   goto out;
  } else if (VAR_45 == VAR_4)
   goto sfp_check;
  break;
 case 143:
 case 142:
  if (VAR_43 & VAR_13)
   VAR_42 |= VAR_16;
  if (VAR_43 & VAR_12)
   VAR_42 |= VAR_21;
  if (VAR_43 & VAR_11)
   VAR_42 |= VAR_20;
  goto out;
  break;
 default:
  goto out;
  break;
 }

sfp_check:



 VAR_41->phy.ops.identify_sfp(VAR_41);
 if (VAR_41->phy.sfp_type == VAR_40)
  goto out;

 switch (VAR_41->phy.type) {
 case 131:
 case 130:
 case 138:
  VAR_42 = VAR_27;
  break;
 case 133:
 case 136:
 case 140:
  VAR_42 = VAR_26;
  break;
 case 135:
 case 134:
 case 132:
 case 129:
  VAR_41->phy.ops.read_i2c_eeprom(VAR_41,
        VAR_33, &VAR_50);
  VAR_41->phy.ops.read_i2c_eeprom(VAR_41,
        VAR_31, &VAR_49);
  if (VAR_49 & VAR_30)
   VAR_42 = VAR_23;
  else if (VAR_49 & VAR_29)
   VAR_42 = VAR_22;
  else if (VAR_50 & VAR_32)
   VAR_42 = VAR_17;
  break;
 case 139:
 case 137:
  VAR_41->phy.ops.read_i2c_eeprom(VAR_41,
   VAR_34, &VAR_49);
  if (VAR_49 & VAR_30)
   VAR_42 = VAR_23;
  else if (VAR_49 & VAR_29)
   VAR_42 = VAR_22;
  break;
 default:
  break;
 }

out:
 return VAR_42;
}
