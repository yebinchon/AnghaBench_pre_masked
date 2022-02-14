
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct TYPE_4__ {int (* identify_sfp ) (struct ixgbe_hw*) ;int * reset; int * get_firmware_version; int * check_link; int * setup_link; int (* identify ) (struct ixgbe_hw*) ;} ;
struct ixgbe_phy_info {int type; int sfp_type; TYPE_2__ ops; } ;
struct TYPE_3__ {scalar_t__ (* get_media_type ) (struct ixgbe_hw*) ;int * get_link_capabilities; int * setup_link; } ;
struct ixgbe_mac_info {TYPE_1__ ops; } ;
struct ixgbe_hw {struct ixgbe_phy_info phy; struct ixgbe_mac_info mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct ixgbe_hw*,int *,int *) ;
 scalar_t__ VAR_4 ;


 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*) ;

__attribute__((used)) static s32 FUNC_4(struct ixgbe_hw *VAR_9)
{
 struct ixgbe_mac_info *VAR_10 = &VAR_9->mac;
 struct ixgbe_phy_info *VAR_11 = &VAR_9->phy;
 s32 VAR_12 = 0;
 u16 VAR_13, VAR_14;


 VAR_11->ops.identify(VAR_9);


 if (VAR_10->ops.get_media_type(VAR_9) == VAR_4) {
  VAR_10->ops.setup_link = &VAR_6;
  VAR_10->ops.get_link_capabilities =
   &VAR_2;
 }

 switch (VAR_9->phy.type) {
 case 128:
  VAR_11->ops.setup_link = &VAR_7;
  VAR_11->ops.check_link = &VAR_1;
  VAR_11->ops.get_firmware_version =
               &VAR_3;
  break;
 case 129:
  VAR_11->ops.reset = &VAR_5;


  VAR_12 = VAR_11->ops.identify_sfp(VAR_9);
  if (VAR_12 != 0)
   goto out;
  else if (VAR_9->phy.sfp_type == VAR_8) {
   VAR_12 = VAR_0;
   goto out;
  }


  VAR_12 = FUNC_0(VAR_9,
                                              &VAR_13,
                                              &VAR_14);
  if (VAR_12 != 0) {
   VAR_12 = VAR_0;
   goto out;
  }
  break;
 default:
  break;
 }

out:
 return VAR_12;
}
