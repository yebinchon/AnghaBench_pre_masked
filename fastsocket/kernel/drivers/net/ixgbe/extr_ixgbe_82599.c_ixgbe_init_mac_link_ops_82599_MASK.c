
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ (* get_media_type ) (struct ixgbe_hw*) ;int * setup_link; int * flap_tx_laser; int * enable_tx_laser; int * disable_tx_laser; } ;
struct ixgbe_mac_info {TYPE_2__ ops; } ;
struct TYPE_3__ {scalar_t__ smart_speed; scalar_t__ multispeed_fiber; } ;
struct ixgbe_hw {TYPE_1__ phy; int mng_fw_enabled; struct ixgbe_mac_info mac; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_1 (struct ixgbe_hw*) ;
 scalar_t__ FUNC_2 (struct ixgbe_hw*) ;

__attribute__((used)) static void FUNC_3(struct ixgbe_hw *VAR_10)
{
 struct ixgbe_mac_info *VAR_11 = &VAR_10->mac;




 if ((VAR_11->ops.get_media_type(VAR_10) == VAR_4) &&
     !VAR_10->mng_fw_enabled) {
  VAR_11->ops.disable_tx_laser =
                         &VAR_0;
  VAR_11->ops.enable_tx_laser =
                          &VAR_1;
  VAR_11->ops.flap_tx_laser = &VAR_2;
 } else {
  VAR_11->ops.disable_tx_laser = ((void*)0);
  VAR_11->ops.enable_tx_laser = ((void*)0);
  VAR_11->ops.flap_tx_laser = ((void*)0);
 }

 if (VAR_10->phy.multispeed_fiber) {

  VAR_11->ops.setup_link = &VAR_6;
 } else {
  if ((VAR_11->ops.get_media_type(VAR_10) ==
       VAR_3) &&
      (VAR_10->phy.smart_speed == VAR_8 ||
       VAR_10->phy.smart_speed == VAR_9) &&
       !FUNC_0(VAR_10))
   VAR_11->ops.setup_link = &VAR_7;
  else
   VAR_11->ops.setup_link = &VAR_5;
 }
}
