
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_6__ {scalar_t__ (* get_speed_and_duplex ) (struct e1000_hw*,scalar_t__*,scalar_t__*) ;} ;
struct e1000_mac_info {scalar_t__ autoneg; TYPE_2__ ops; scalar_t__ autoneg_failed; } ;
struct TYPE_8__ {scalar_t__ requested_mode; void* current_mode; scalar_t__ strict_ieee; } ;
struct TYPE_5__ {scalar_t__ (* read_reg ) (struct e1000_hw*,int ,scalar_t__*) ;} ;
struct TYPE_7__ {scalar_t__ media_type; TYPE_1__ ops; } ;
struct e1000_hw {TYPE_4__ fc; TYPE_3__ phy; struct e1000_mac_info mac; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 void* VAR_19 ;
 scalar_t__ VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct e1000_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,scalar_t__*) ;
 scalar_t__ FUNC_7 (struct e1000_hw*,scalar_t__*,scalar_t__*) ;
 int FUNC_8 (int ,int) ;

s32 FUNC_9(struct e1000_hw *VAR_23)
{
 struct e1000_mac_info *VAR_24 = &VAR_23->mac;
 s32 VAR_25 = 0;
 u32 VAR_26, VAR_27, VAR_28, VAR_29;
 u16 VAR_30, VAR_31, VAR_32;
 u16 VAR_33, VAR_34;





 if (VAR_24->autoneg_failed) {
  if (VAR_23->phy.media_type == VAR_22)
   VAR_25 = FUNC_1(VAR_23);
 } else {
  if (VAR_23->phy.media_type == VAR_21)
   VAR_25 = FUNC_1(VAR_23);
 }

 if (VAR_25) {
  FUNC_0("Error forcing flow control settings\n");
  goto out;
 }






 if ((VAR_23->phy.media_type == VAR_21) && VAR_24->autoneg) {




  VAR_25 = VAR_23->phy.ops.read_reg(VAR_23, VAR_16,
         &VAR_30);
  if (VAR_25)
   goto out;
  VAR_25 = VAR_23->phy.ops.read_reg(VAR_23, VAR_16,
         &VAR_30);
  if (VAR_25)
   goto out;

  if (!(VAR_30 & VAR_9)) {
   FUNC_0("Copper PHY and Auto Neg "
     "has not completed.\n");
   goto out;
  }







  VAR_25 = VAR_23->phy.ops.read_reg(VAR_23, VAR_14,
         &VAR_31);
  if (VAR_25)
   goto out;
  VAR_25 = VAR_23->phy.ops.read_reg(VAR_23, VAR_15,
         &VAR_32);
  if (VAR_25)
   goto out;
  if ((VAR_31 & VAR_11) &&
      (VAR_32 & VAR_13)) {






   if (VAR_23->fc.requested_mode == VAR_17) {
    VAR_23->fc.current_mode = VAR_17;
    FUNC_0("Flow Control = FULL.\r\n");
   } else {
    VAR_23->fc.current_mode = VAR_19;
    FUNC_0("Flow Control = "
           "RX PAUSE frames only.\r\n");
   }
  }







  else if (!(VAR_31 & VAR_11) &&
     (VAR_31 & VAR_10) &&
     (VAR_32 & VAR_13) &&
     (VAR_32 & VAR_12)) {
   VAR_23->fc.current_mode = VAR_20;
   FUNC_0("Flow Control = TX PAUSE frames only.\r\n");
  }







  else if ((VAR_31 & VAR_11) &&
    (VAR_31 & VAR_10) &&
    !(VAR_32 & VAR_13) &&
    (VAR_32 & VAR_12)) {
   VAR_23->fc.current_mode = VAR_19;
   FUNC_0("Flow Control = RX PAUSE frames only.\r\n");
  }
  else if ((VAR_23->fc.requested_mode == VAR_18) ||
    (VAR_23->fc.requested_mode == VAR_20) ||
    (VAR_23->fc.strict_ieee)) {
   VAR_23->fc.current_mode = VAR_18;
   FUNC_0("Flow Control = NONE.\r\n");
  } else {
   VAR_23->fc.current_mode = VAR_19;
   FUNC_0("Flow Control = RX PAUSE frames only.\r\n");
  }





  VAR_25 = VAR_23->mac.ops.get_speed_and_duplex(VAR_23, &VAR_33, &VAR_34);
  if (VAR_25) {
   FUNC_0("Error getting link speed and duplex\n");
   goto out;
  }

  if (VAR_34 == VAR_8)
   VAR_23->fc.current_mode = VAR_18;




  VAR_25 = FUNC_1(VAR_23);
  if (VAR_25) {
   FUNC_0("Error forcing flow control settings\n");
   goto out;
  }
 }





 if ((VAR_23->phy.media_type == VAR_22)
  && VAR_24->autoneg) {



  VAR_26 = FUNC_2(VAR_4);

  if (!(VAR_26 & VAR_5)) {
   FUNC_0("PCS Auto Neg has not completed.\n");
   return VAR_25;
  }







  VAR_27 = FUNC_2(VAR_0);
  VAR_28 = FUNC_2(VAR_3);
  if ((VAR_27 & VAR_7) &&
      (VAR_28 & VAR_7)) {






   if (VAR_23->fc.requested_mode == VAR_17) {
    VAR_23->fc.current_mode = VAR_17;
    FUNC_0("Flow Control = FULL.\n");
   } else {
    VAR_23->fc.current_mode = VAR_19;
    FUNC_0("Flow Control = Rx PAUSE frames only.\n");
   }
  }







  else if (!(VAR_27 & VAR_7) &&
     (VAR_27 & VAR_6) &&
     (VAR_28 & VAR_7) &&
     (VAR_28 & VAR_6)) {
   VAR_23->fc.current_mode = VAR_20;
   FUNC_0("Flow Control = Tx PAUSE frames only.\n");
  }







  else if ((VAR_27 & VAR_7) &&
    (VAR_27 & VAR_6) &&
    !(VAR_28 & VAR_7) &&
    (VAR_28 & VAR_6)) {
   VAR_23->fc.current_mode = VAR_19;
   FUNC_0("Flow Control = Rx PAUSE frames only.\n");
  } else {



   VAR_23->fc.current_mode = VAR_18;
   FUNC_0("Flow Control = NONE.\n");
  }




  VAR_29 = FUNC_2(VAR_1);
  VAR_29 |= VAR_2;
  FUNC_8(VAR_1, VAR_29);

  VAR_25 = FUNC_1(VAR_23);
  if (VAR_25) {
   FUNC_0("Error forcing flow control settings\n");
   return VAR_25;
  }
 }

out:
 return VAR_25;
}
