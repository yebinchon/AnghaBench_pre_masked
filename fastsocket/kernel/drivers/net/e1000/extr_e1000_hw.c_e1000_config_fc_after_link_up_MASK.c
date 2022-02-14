
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_hw {scalar_t__ media_type; scalar_t__ original_fc; void* fc; scalar_t__ fc_strict_ieee; scalar_t__ autoneg; scalar_t__ autoneg_failed; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 void* VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int*,int*) ;
 scalar_t__ VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_17)
{
 s32 VAR_18;
 u16 VAR_19;
 u16 VAR_20;
 u16 VAR_21;
 u16 VAR_22;
 u16 VAR_23;

 FUNC_3("e1000_config_fc_after_link_up");





 if (((VAR_17->media_type == VAR_15) && (VAR_17->autoneg_failed))
     || ((VAR_17->media_type == VAR_16)
  && (VAR_17->autoneg_failed))
     || ((VAR_17->media_type == VAR_14)
  && (!VAR_17->autoneg))) {
  VAR_18 = FUNC_0(VAR_17);
  if (VAR_18) {
   FUNC_3("Error forcing flow control settings\n");
   return VAR_18;
  }
 }






 if ((VAR_17->media_type == VAR_14) && VAR_17->autoneg) {




  VAR_18 = FUNC_2(VAR_17, VAR_13, &VAR_19);
  if (VAR_18)
   return VAR_18;
  VAR_18 = FUNC_2(VAR_17, VAR_13, &VAR_19);
  if (VAR_18)
   return VAR_18;

  if (VAR_19 & VAR_6) {






   VAR_18 = FUNC_2(VAR_17, VAR_11,
           &VAR_20);
   if (VAR_18)
    return VAR_18;
   VAR_18 = FUNC_2(VAR_17, VAR_12,
           &VAR_21);
   if (VAR_18)
    return VAR_18;
   if ((VAR_20 & VAR_8) &&
       (VAR_21 & VAR_10)) {






    if (VAR_17->original_fc == VAR_0) {
     VAR_17->fc = VAR_0;
     FUNC_3("Flow Control = FULL.\n");
    } else {
     VAR_17->fc = VAR_2;
     FUNC_3
         ("Flow Control = RX PAUSE frames only.\n");
    }
   }
   else if (!(VAR_20 & VAR_8) &&
     (VAR_20 & VAR_7) &&
     (VAR_21 & VAR_10) &&
     (VAR_21 & VAR_9))
   {
    VAR_17->fc = VAR_3;
    FUNC_3
        ("Flow Control = TX PAUSE frames only.\n");
   }
   else if ((VAR_20 & VAR_8) &&
     (VAR_20 & VAR_7) &&
     !(VAR_21 & VAR_10) &&
     (VAR_21 & VAR_9))
   {
    VAR_17->fc = VAR_2;
    FUNC_3
        ("Flow Control = RX PAUSE frames only.\n");
   }
   else if ((VAR_17->original_fc == VAR_1 ||
      VAR_17->original_fc == VAR_3) ||
     VAR_17->fc_strict_ieee) {
    VAR_17->fc = VAR_1;
    FUNC_3("Flow Control = NONE.\n");
   } else {
    VAR_17->fc = VAR_2;
    FUNC_3
        ("Flow Control = RX PAUSE frames only.\n");
   }





   VAR_18 =
       FUNC_1(VAR_17, &VAR_22, &VAR_23);
   if (VAR_18) {
    FUNC_3
        ("Error getting link speed and duplex\n");
    return VAR_18;
   }

   if (VAR_23 == VAR_5)
    VAR_17->fc = VAR_1;




   VAR_18 = FUNC_0(VAR_17);
   if (VAR_18) {
    FUNC_3
        ("Error forcing flow control settings\n");
    return VAR_18;
   }
  } else {
   FUNC_3
       ("Copper PHY and Auto Neg has not completed.\n");
  }
 }
 return VAR_4;
}
