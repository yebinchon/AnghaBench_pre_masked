
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
typedef int u32 ;
typedef int u16 ;
struct TYPE_10__ {scalar_t__ (* read_i2c_eeprom ) (struct ixgbe_hw*,int ,scalar_t__*) ;} ;
struct TYPE_9__ {int sfp_type; scalar_t__ type; int sfp_setup_needed; int multispeed_fiber; scalar_t__ id; TYPE_5__ ops; } ;
struct TYPE_7__ {scalar_t__ (* get_media_type ) (struct ixgbe_hw*) ;int (* get_device_caps ) (struct ixgbe_hw*,int*) ;int (* set_lan_id ) (struct ixgbe_hw*) ;} ;
struct TYPE_8__ {scalar_t__ type; TYPE_2__ ops; } ;
struct TYPE_6__ {scalar_t__ lan_id; } ;
struct ixgbe_hw {TYPE_4__ phy; scalar_t__ allow_unsupported_sfp; TYPE_3__ mac; TYPE_1__ bus; struct ixgbe_adapter* back; } ;
struct ixgbe_adapter {int dummy; } ;
typedef scalar_t__ s32 ;
typedef enum ixgbe_sfp_type { ____Placeholder_ixgbe_sfp_type } ixgbe_sfp_type ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;

 int VAR_18 ;
 scalar_t__ VAR_19 ;
 int VAR_20 ;
 scalar_t__ VAR_21 ;
 int VAR_22 ;
 scalar_t__ VAR_23 ;



 int VAR_24 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct ixgbe_hw*,char*) ;
 scalar_t__ VAR_25 ;
 scalar_t__ VAR_26 ;
 scalar_t__ VAR_27 ;
 scalar_t__ VAR_28 ;
 scalar_t__ VAR_29 ;
 scalar_t__ VAR_30 ;
 scalar_t__ VAR_31 ;
 scalar_t__ VAR_32 ;
 scalar_t__ VAR_33 ;
 scalar_t__ VAR_34 ;
 scalar_t__ VAR_35 ;
 scalar_t__ VAR_36 ;
 void* VAR_37 ;
 scalar_t__ VAR_38 ;
 scalar_t__ VAR_39 ;
 scalar_t__ VAR_40 ;
 scalar_t__ VAR_41 ;
 scalar_t__ VAR_42 ;
 scalar_t__ VAR_43 ;
 scalar_t__ VAR_44 ;
 int VAR_45 ;
 int VAR_46 ;
 int VAR_47 ;
 int VAR_48 ;
 int VAR_49 ;
 int VAR_50 ;
 void* VAR_51 ;
 int VAR_52 ;
 int VAR_53 ;
 int VAR_54 ;
 void* VAR_55 ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_3 (struct ixgbe_hw*,int ,scalar_t__*) ;
 int FUNC_4 (struct ixgbe_hw*,int*) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*,int ,scalar_t__*) ;
 int FUNC_6 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_7 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_8 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_9 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_10 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_11 (struct ixgbe_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_12 (struct ixgbe_hw*,int ,scalar_t__*) ;

s32 FUNC_13(struct ixgbe_hw *VAR_56)
{
 struct ixgbe_adapter *VAR_57 = VAR_56->back;
 s32 VAR_58 = VAR_1;
 u32 VAR_59 = 0;
 enum ixgbe_sfp_type VAR_60 = VAR_56->phy.sfp_type;
 u8 VAR_61 = 0;
 u8 VAR_62 = 0;
 u8 VAR_63 = 0;
 u8 VAR_64[3] = {0, 0, 0};
 u8 VAR_65 = 0;
 u8 VAR_66 = 0;
 u16 VAR_67 = 0;

 if (VAR_56->mac.ops.get_media_type(VAR_56) != VAR_27) {
  VAR_56->phy.sfp_type = VAR_51;
  VAR_58 = VAR_2;
  goto out;
 }

 VAR_58 = VAR_56->phy.ops.read_i2c_eeprom(VAR_56,
          VAR_16,
          &VAR_61);

 if (VAR_58 != 0)
  goto err_read_i2c_eeprom;


 VAR_56->mac.ops.set_lan_id(VAR_56);

 if (VAR_61 != VAR_17) {
  VAR_56->phy.type = VAR_37;
  VAR_58 = VAR_3;
 } else {
  VAR_58 = VAR_56->phy.ops.read_i2c_eeprom(VAR_56,
           VAR_10,
           &VAR_62);

  if (VAR_58 != 0)
   goto err_read_i2c_eeprom;

  VAR_58 = VAR_56->phy.ops.read_i2c_eeprom(VAR_56,
           VAR_6,
           &VAR_63);

  if (VAR_58 != 0)
   goto err_read_i2c_eeprom;
  VAR_58 = VAR_56->phy.ops.read_i2c_eeprom(VAR_56,
           VAR_12,
           &VAR_65);

  if (VAR_58 != 0)
   goto err_read_i2c_eeprom;
  if (VAR_56->mac.type == VAR_25) {
   if (VAR_65 & VAR_14)
    VAR_56->phy.sfp_type = VAR_47;
   else if (VAR_63 & VAR_5)
    VAR_56->phy.sfp_type = VAR_52;
   else if (VAR_63 & VAR_4)
    VAR_56->phy.sfp_type = VAR_50;
   else
    VAR_56->phy.sfp_type = VAR_55;
  } else if (VAR_56->mac.type == VAR_26) {
   if (VAR_65 & VAR_14) {
    if (VAR_56->bus.lan_id == 0)
     VAR_56->phy.sfp_type =
                  VAR_48;
    else
     VAR_56->phy.sfp_type =
                  VAR_49;
   } else if (VAR_65 & VAR_13) {
    VAR_56->phy.ops.read_i2c_eeprom(
      VAR_56, VAR_11,
      &VAR_66);
    if (VAR_66 &
        VAR_15) {
     if (VAR_56->bus.lan_id == 0)
      VAR_56->phy.sfp_type =
      VAR_45;
     else
      VAR_56->phy.sfp_type =
      VAR_46;
    } else {
     VAR_56->phy.sfp_type =
       VAR_55;
    }
   } else if (VAR_63 &
       (VAR_5 |
        VAR_4)) {
    if (VAR_56->bus.lan_id == 0)
     VAR_56->phy.sfp_type =
                   VAR_53;
    else
     VAR_56->phy.sfp_type =
                   VAR_54;
   } else if (VAR_62 & VAR_9) {
    if (VAR_56->bus.lan_id == 0)
     VAR_56->phy.sfp_type =
      VAR_39;
    else
     VAR_56->phy.sfp_type =
      VAR_40;
   } else if (VAR_62 & VAR_8) {
    if (VAR_56->bus.lan_id == 0)
     VAR_56->phy.sfp_type =
      VAR_43;
    else
     VAR_56->phy.sfp_type =
      VAR_44;
   } else if (VAR_62 & VAR_7) {
    if (VAR_56->bus.lan_id == 0)
     VAR_56->phy.sfp_type =
      VAR_41;
    else
     VAR_56->phy.sfp_type =
      VAR_42;
   } else {
    VAR_56->phy.sfp_type = VAR_55;
   }
  }

  if (VAR_56->phy.sfp_type != VAR_60)
   VAR_56->phy.sfp_setup_needed = 1;


  VAR_56->phy.multispeed_fiber = 0;
  if (((VAR_62 & VAR_8) &&
     (VAR_63 & VAR_5)) ||
     ((VAR_62 & VAR_7) &&
     (VAR_63 & VAR_4)))
   VAR_56->phy.multispeed_fiber = 1;


  if (VAR_56->phy.type != VAR_28) {
   VAR_56->phy.id = VAR_61;
   VAR_58 = VAR_56->phy.ops.read_i2c_eeprom(VAR_56,
          VAR_18,
          &VAR_64[0]);

   if (VAR_58 != 0)
    goto err_read_i2c_eeprom;

   VAR_58 = VAR_56->phy.ops.read_i2c_eeprom(VAR_56,
                               VAR_20,
                               &VAR_64[1]);

   if (VAR_58 != 0)
    goto err_read_i2c_eeprom;

   VAR_58 = VAR_56->phy.ops.read_i2c_eeprom(VAR_56,
                               VAR_22,
                               &VAR_64[2]);

   if (VAR_58 != 0)
    goto err_read_i2c_eeprom;

   VAR_59 =
     ((VAR_64[0] << VAR_19) |
      (VAR_64[1] << VAR_21) |
      (VAR_64[2] << VAR_23));

   switch (VAR_59) {
   case 128:
    if (VAR_65 & VAR_14)
     VAR_56->phy.type =
          VAR_34;
    break;
   case 130:
    if (VAR_65 & VAR_13)
     VAR_56->phy.type = VAR_32;
    else
     VAR_56->phy.type = VAR_31;
    break;
   case 131:
    VAR_56->phy.type = VAR_30;
    break;
   case 129:
    VAR_56->phy.type = VAR_33;
    break;
   default:
    if (VAR_65 & VAR_14)
     VAR_56->phy.type =
       VAR_35;
    else if (VAR_65 & VAR_13)
     VAR_56->phy.type =
      VAR_29;
    else
     VAR_56->phy.type = VAR_36;
    break;
   }
  }


  if (VAR_65 & (VAR_14 |
      VAR_13)) {
   VAR_58 = 0;
   goto out;
  }


  if (VAR_63 == 0 &&
      !(VAR_56->phy.sfp_type == VAR_40 ||
        VAR_56->phy.sfp_type == VAR_39 ||
        VAR_56->phy.sfp_type == VAR_41 ||
        VAR_56->phy.sfp_type == VAR_42 ||
        VAR_56->phy.sfp_type == VAR_43 ||
        VAR_56->phy.sfp_type == VAR_44)) {
   VAR_56->phy.type = VAR_37;
   VAR_58 = VAR_3;
   goto out;
  }


  if (VAR_56->mac.type == VAR_25) {
   VAR_58 = 0;
   goto out;
  }

  VAR_56->mac.ops.get_device_caps(VAR_56, &VAR_67);
  if (!(VAR_67 & VAR_0) &&
      !(VAR_56->phy.sfp_type == VAR_39 ||
        VAR_56->phy.sfp_type == VAR_40 ||
        VAR_56->phy.sfp_type == VAR_41 ||
        VAR_56->phy.sfp_type == VAR_42 ||
        VAR_56->phy.sfp_type == VAR_43 ||
        VAR_56->phy.sfp_type == VAR_44)) {

   if (VAR_56->phy.type == VAR_33) {
    VAR_58 = 0;
   } else {
    if (VAR_56->allow_unsupported_sfp) {
     FUNC_0(VAR_24, "WARNING: Intel (R) Network Connections are quality tested using Intel (R) Ethernet Optics.  Using untested modules is not supported and may cause unstable operation or damage to the module or the adapter.  Intel Corporation is not responsible for any harm caused by using untested modules.");
     VAR_58 = 0;
    } else {
     FUNC_1(VAR_56,
            "SFP+ module not supported\n");
     VAR_56->phy.type =
      VAR_37;
     VAR_58 = VAR_3;
    }
   }
  } else {
   VAR_58 = 0;
  }
 }

out:
 return VAR_58;

err_read_i2c_eeprom:
 VAR_56->phy.sfp_type = VAR_51;
 if (VAR_56->phy.type != VAR_28) {
  VAR_56->phy.id = 0;
  VAR_56->phy.type = VAR_38;
 }
 return VAR_2;
}
