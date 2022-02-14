
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u32 ;
typedef scalar_t__ u16 ;
struct TYPE_4__ {scalar_t__ (* get_link_up_info ) (struct e1000_hw*,scalar_t__*,scalar_t__*) ;} ;
struct e1000_mac_info {scalar_t__ autoneg; TYPE_1__ ops; scalar_t__ autoneg_failed; } ;
struct TYPE_6__ {scalar_t__ requested_mode; void* current_mode; } ;
struct TYPE_5__ {scalar_t__ media_type; } ;
struct e1000_hw {TYPE_3__ fc; TYPE_2__ phy; struct e1000_mac_info mac; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 void* VAR_18 ;
 void* VAR_19 ;
 void* VAR_20 ;
 scalar_t__ VAR_21 ;
 scalar_t__ VAR_22 ;
 scalar_t__ VAR_23 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,scalar_t__*) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;
 scalar_t__ FUNC_5 (struct e1000_hw*,scalar_t__*,scalar_t__*) ;

s32 FUNC_6(struct e1000_hw *VAR_24)
{
 struct e1000_mac_info *VAR_25 = &VAR_24->mac;
 s32 VAR_26 = 0;
 u32 VAR_27, VAR_28, VAR_29, VAR_30;
 u16 VAR_31, VAR_32, VAR_33;
 u16 VAR_34, VAR_35;





 if (VAR_25->autoneg_failed) {
  if (VAR_24->phy.media_type == VAR_22 ||
      VAR_24->phy.media_type == VAR_23)
   VAR_26 = FUNC_0(VAR_24);
 } else {
  if (VAR_24->phy.media_type == VAR_21)
   VAR_26 = FUNC_0(VAR_24);
 }

 if (VAR_26) {
  FUNC_2("Error forcing flow control settings\n");
  return VAR_26;
 }






 if ((VAR_24->phy.media_type == VAR_21) && VAR_25->autoneg) {




  VAR_26 = FUNC_1(VAR_24, VAR_11, &VAR_31);
  if (VAR_26)
   return VAR_26;
  VAR_26 = FUNC_1(VAR_24, VAR_11, &VAR_31);
  if (VAR_26)
   return VAR_26;

  if (!(VAR_31 & VAR_2)) {
   FUNC_2("Copper PHY and Auto Neg has not completed.\n");
   return VAR_26;
  }







  VAR_26 = FUNC_1(VAR_24, VAR_10, &VAR_32);
  if (VAR_26)
   return VAR_26;
  VAR_26 = FUNC_1(VAR_24, VAR_12, &VAR_33);
  if (VAR_26)
   return VAR_26;
  if ((VAR_32 & VAR_1) &&
      (VAR_33 & VAR_9)) {






   if (VAR_24->fc.requested_mode == VAR_17) {
    VAR_24->fc.current_mode = VAR_17;
    FUNC_2("Flow Control = FULL.\n");
   } else {
    VAR_24->fc.current_mode = VAR_19;
    FUNC_2("Flow Control = Rx PAUSE frames only.\n");
   }
  }







  else if (!(VAR_32 & VAR_1) &&
    (VAR_32 & VAR_0) &&
    (VAR_33 & VAR_9) &&
    (VAR_33 & VAR_8)) {
   VAR_24->fc.current_mode = VAR_20;
   FUNC_2("Flow Control = Tx PAUSE frames only.\n");
  }







  else if ((VAR_32 & VAR_1) &&
    (VAR_32 & VAR_0) &&
    !(VAR_33 & VAR_9) &&
    (VAR_33 & VAR_8)) {
   VAR_24->fc.current_mode = VAR_19;
   FUNC_2("Flow Control = Rx PAUSE frames only.\n");
  } else {



   VAR_24->fc.current_mode = VAR_18;
   FUNC_2("Flow Control = NONE.\n");
  }





  VAR_26 = VAR_25->ops.get_link_up_info(VAR_24, &VAR_34, &VAR_35);
  if (VAR_26) {
   FUNC_2("Error getting link speed and duplex\n");
   return VAR_26;
  }

  if (VAR_35 == VAR_7)
   VAR_24->fc.current_mode = VAR_18;




  VAR_26 = FUNC_0(VAR_24);
  if (VAR_26) {
   FUNC_2("Error forcing flow control settings\n");
   return VAR_26;
  }
 }






 if ((VAR_24->phy.media_type == VAR_23) &&
     VAR_25->autoneg) {



  VAR_27 = FUNC_3(VAR_16);

  if (!(VAR_27 & VAR_4)) {
   FUNC_2("PCS Auto Neg has not completed.\n");
   return VAR_26;
  }







  VAR_28 = FUNC_3(VAR_13);
  VAR_29 = FUNC_3(VAR_15);
  if ((VAR_28 & VAR_6) &&
      (VAR_29 & VAR_6)) {






   if (VAR_24->fc.requested_mode == VAR_17) {
    VAR_24->fc.current_mode = VAR_17;
    FUNC_2("Flow Control = FULL.\n");
   } else {
    VAR_24->fc.current_mode = VAR_19;
    FUNC_2("Flow Control = Rx PAUSE frames only.\n");
   }
  }







  else if (!(VAR_28 & VAR_6) &&
    (VAR_28 & VAR_5) &&
    (VAR_29 & VAR_6) &&
    (VAR_29 & VAR_5)) {
   VAR_24->fc.current_mode = VAR_20;
   FUNC_2("Flow Control = Tx PAUSE frames only.\n");
  }







  else if ((VAR_28 & VAR_6) &&
    (VAR_28 & VAR_5) &&
    !(VAR_29 & VAR_6) &&
    (VAR_29 & VAR_5)) {
   VAR_24->fc.current_mode = VAR_19;
   FUNC_2("Flow Control = Rx PAUSE frames only.\n");
  } else {



   VAR_24->fc.current_mode = VAR_18;
   FUNC_2("Flow Control = NONE.\n");
  }




  VAR_30 = FUNC_3(VAR_14);
  VAR_30 |= VAR_3;
  FUNC_4(VAR_14, VAR_30);

  VAR_26 = FUNC_0(VAR_24);
  if (VAR_26) {
   FUNC_2("Error forcing flow control settings\n");
   return VAR_26;
  }
 }

 return 0;
}
