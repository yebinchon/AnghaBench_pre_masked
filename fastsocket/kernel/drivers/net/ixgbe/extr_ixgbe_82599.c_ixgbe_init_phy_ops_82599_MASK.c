
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_4__ {int * get_firmware_version; int * setup_link; int * check_link; int (* identify ) (struct ixgbe_hw*) ;int * write_i2c_byte; int * read_i2c_byte; } ;
struct ixgbe_phy_info {int qsfp_shared_i2c_bus; int type; TYPE_2__ ops; } ;
struct TYPE_3__ {scalar_t__ (* get_media_type ) (struct ixgbe_hw*) ;int * get_link_capabilities; int * setup_link; } ;
struct ixgbe_mac_info {TYPE_1__ ops; } ;
struct ixgbe_hw {scalar_t__ device_id; struct ixgbe_phy_info phy; struct ixgbe_mac_info mac; } ;
typedef int s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_3 (struct ixgbe_hw*) ;
 scalar_t__ VAR_10 ;

 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int FUNC_4 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_5 (struct ixgbe_hw*) ;

__attribute__((used)) static s32 FUNC_6(struct ixgbe_hw *VAR_15)
{
 struct ixgbe_mac_info *VAR_16 = &VAR_15->mac;
 struct ixgbe_phy_info *VAR_17 = &VAR_15->phy;
 s32 VAR_18 = 0;
 u32 VAR_19;

 if (VAR_15->device_id == VAR_0) {

  VAR_15->phy.qsfp_shared_i2c_bus = 1;


  VAR_19 = FUNC_0(VAR_15, VAR_1);
  VAR_19 |= VAR_3;
  VAR_19 &= ~VAR_5;
  VAR_19 &= ~VAR_2;
  VAR_19 &= ~VAR_4;
  VAR_19 &= ~VAR_6;
  FUNC_2(VAR_15, VAR_1, VAR_19);
  FUNC_1(VAR_15);

  VAR_17->ops.read_i2c_byte = &VAR_11;
  VAR_17->ops.write_i2c_byte = &VAR_14;
 }


 VAR_18 = VAR_17->ops.identify(VAR_15);


 FUNC_3(VAR_15);


 if (VAR_16->ops.get_media_type(VAR_15) == VAR_10) {
  VAR_16->ops.setup_link = &VAR_12;
  VAR_16->ops.get_link_capabilities =
   &VAR_8;
 }


 switch (VAR_15->phy.type) {
 case 128:
  VAR_17->ops.check_link = &VAR_7;
  VAR_17->ops.setup_link = &VAR_13;
  VAR_17->ops.get_firmware_version =
               &VAR_9;
  break;
 default:
  break;
 }

 return VAR_18;
}
