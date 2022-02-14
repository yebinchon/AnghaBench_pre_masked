
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef scalar_t__ u32 ;
typedef int u16 ;
struct TYPE_7__ {scalar_t__ (* read_i2c_eeprom ) (struct ixgbe_hw*,int ,scalar_t__*) ;} ;
struct TYPE_10__ {int sfp_type; scalar_t__ type; int sfp_setup_needed; int multispeed_fiber; scalar_t__ id; TYPE_2__ ops; } ;
struct TYPE_8__ {scalar_t__ (* get_media_type ) (struct ixgbe_hw*) ;int (* get_device_caps ) (struct ixgbe_hw*,int*) ;int (* set_lan_id ) (struct ixgbe_hw*) ;} ;
struct TYPE_9__ {TYPE_3__ ops; } ;
struct TYPE_6__ {scalar_t__ lan_id; } ;
struct ixgbe_hw {int allow_unsupported_sfp; TYPE_5__ phy; TYPE_4__ mac; TYPE_1__ bus; struct ixgbe_adapter* back; } ;
struct ixgbe_adapter {int dummy; } ;
typedef scalar_t__ s32 ;
typedef enum ixgbe_sfp_type { ____Placeholder_ixgbe_sfp_type } ixgbe_sfp_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 int FUNC_0 (struct ixgbe_hw*,char*) ;
 int FUNC_1 (struct ixgbe_hw*,char*) ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ VAR_24 ;
 void* VAR_25 ;
 scalar_t__ VAR_26 ;
 int VAR_27 ;
 int VAR_28 ;
 int VAR_29 ;
 int VAR_30 ;
 void* VAR_31 ;
 int VAR_32 ;
 int VAR_33 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ,scalar_t__*) ;
 int FUNC_4 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_6 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_8 (struct ixgbe_hw*,int ,scalar_t__*) ;
 int FUNC_9 (struct ixgbe_hw*,int*) ;

s32 FUNC_10(struct ixgbe_hw *VAR_34)
{
 struct ixgbe_adapter *VAR_35 = VAR_34->back;
 s32 VAR_36 = VAR_1;
 u32 VAR_37 = 0;
 enum ixgbe_sfp_type VAR_38 = VAR_34->phy.sfp_type;
 u8 VAR_39 = 0;
 u8 VAR_40 = 0;
 u8 VAR_41 = 0;
 u8 VAR_42[3] = {0, 0, 0};
 u16 VAR_43 = 0;

 if (VAR_34->mac.ops.get_media_type(VAR_34) != VAR_20) {
  VAR_34->phy.sfp_type = VAR_31;
  VAR_36 = VAR_2;
  goto out;
 }

 VAR_36 = VAR_34->phy.ops.read_i2c_eeprom(VAR_34, VAR_8,
          &VAR_39);

 if (VAR_36 != 0)
  goto err_read_i2c_eeprom;

 if (VAR_39 != VAR_9) {
  VAR_34->phy.type = VAR_25;
  VAR_36 = VAR_3;
  goto out;
 }

 VAR_34->phy.id = VAR_39;


 VAR_34->mac.ops.set_lan_id(VAR_34);

 VAR_36 = VAR_34->phy.ops.read_i2c_eeprom(VAR_34, VAR_10,
          &VAR_41);

 if (VAR_36 != 0)
  goto err_read_i2c_eeprom;

 if (VAR_41 & VAR_12) {
  VAR_34->phy.type = VAR_23;
  if (VAR_34->bus.lan_id == 0)
   VAR_34->phy.sfp_type = VAR_29;
  else
   VAR_34->phy.sfp_type = VAR_30;
 } else if (VAR_41 & VAR_11) {
  VAR_34->phy.type = VAR_21;
  if (VAR_34->bus.lan_id == 0)
   VAR_34->phy.sfp_type = VAR_27;
  else
   VAR_34->phy.sfp_type = VAR_28;
 } else if (VAR_41 & (VAR_5 |
         VAR_4)) {
  if (VAR_34->bus.lan_id == 0)
   VAR_34->phy.sfp_type = VAR_32;
  else
   VAR_34->phy.sfp_type = VAR_33;
 } else {

  VAR_34->phy.type = VAR_25;
  VAR_36 = VAR_3;
  goto out;
 }

 if (VAR_34->phy.sfp_type != VAR_38)
  VAR_34->phy.sfp_setup_needed = 1;


 VAR_34->phy.multispeed_fiber = 0;
 if (((VAR_40 & VAR_7) &&
      (VAR_41 & VAR_5)) ||
     ((VAR_40 & VAR_6) &&
      (VAR_41 & VAR_4)))
  VAR_34->phy.multispeed_fiber = 1;


 if (VAR_41 & (VAR_5 |
         VAR_4)) {
  VAR_36 = VAR_34->phy.ops.read_i2c_eeprom(VAR_34,
     VAR_13,
     &VAR_42[0]);

  if (VAR_36 != 0)
   goto err_read_i2c_eeprom;

  VAR_36 = VAR_34->phy.ops.read_i2c_eeprom(VAR_34,
     VAR_14,
     &VAR_42[1]);

  if (VAR_36 != 0)
   goto err_read_i2c_eeprom;

  VAR_36 = VAR_34->phy.ops.read_i2c_eeprom(VAR_34,
     VAR_15,
     &VAR_42[2]);

  if (VAR_36 != 0)
   goto err_read_i2c_eeprom;

  VAR_37 =
   ((VAR_42[0] << VAR_16) |
    (VAR_42[1] << VAR_17) |
    (VAR_42[2] << VAR_18));

  if (VAR_37 == VAR_19)
   VAR_34->phy.type = VAR_22;
  else
   VAR_34->phy.type = VAR_24;

  VAR_34->mac.ops.get_device_caps(VAR_34, &VAR_43);
  if (!(VAR_43 & VAR_0)) {

   if (VAR_34->phy.type == VAR_22) {
    VAR_36 = 0;
   } else {
    if (VAR_34->allow_unsupported_sfp == 1) {
     FUNC_0(VAR_34, "WARNING: Intel (R) Network Connections are quality tested using Intel (R) Ethernet Optics. Using untested modules is not supported and may cause unstable operation or damage to the module or the adapter. Intel Corporation is not responsible for any harm caused by using untested modules.\n");
     VAR_36 = 0;
    } else {
     FUNC_1(VAR_34,
            "QSFP module not supported\n");
     VAR_34->phy.type =
      VAR_25;
     VAR_36 = VAR_3;
    }
   }
  } else {
   VAR_36 = 0;
  }
 }

out:
 return VAR_36;

err_read_i2c_eeprom:
 VAR_34->phy.sfp_type = VAR_31;
 VAR_34->phy.id = 0;
 VAR_34->phy.type = VAR_26;

 return VAR_2;
}
