
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_hw {scalar_t__ phy_type; int autoneg_advertised; int fc; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;




 scalar_t__ VAR_8 ;
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
 scalar_t__ VAR_19 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int) ;
 int FUNC_2 (char*,...) ;

s32 FUNC_3(struct e1000_hw *VAR_20)
{
 s32 VAR_21;
 u16 VAR_22;
 u16 VAR_23;

 FUNC_2("e1000_phy_setup_autoneg");


 VAR_21 = FUNC_0(VAR_20, VAR_16, &VAR_22);
 if (VAR_21)
  return VAR_21;


 VAR_21 = FUNC_0(VAR_20, VAR_15, &VAR_23);
 if (VAR_21)
  return VAR_21;
 else if (VAR_20->phy_type == VAR_19)
  VAR_23 &= ~VAR_18;
 VAR_22 &= ~VAR_17;
 VAR_23 &= ~VAR_18;

 FUNC_2("autoneg_advertised %x\n", VAR_20->autoneg_advertised);


 if (VAR_20->autoneg_advertised & VAR_5) {
  FUNC_2("Advertise 10mb Half duplex\n");
  VAR_22 |= VAR_12;
 }


 if (VAR_20->autoneg_advertised & VAR_4) {
  FUNC_2("Advertise 10mb Full duplex\n");
  VAR_22 |= VAR_11;
 }


 if (VAR_20->autoneg_advertised & VAR_3) {
  FUNC_2("Advertise 100mb Half duplex\n");
  VAR_22 |= VAR_10;
 }


 if (VAR_20->autoneg_advertised & VAR_2) {
  FUNC_2("Advertise 100mb Full duplex\n");
  VAR_22 |= VAR_9;
 }


 if (VAR_20->autoneg_advertised & VAR_1) {
  FUNC_2
      ("Advertise 1000mb Half duplex requested, request denied!\n");
 }


 if (VAR_20->autoneg_advertised & VAR_0) {
  FUNC_2("Advertise 1000mb Full duplex\n");
  VAR_23 |= VAR_6;
 }
 switch (VAR_20->fc) {
 case 130:



  VAR_22 &= ~(VAR_13 | VAR_14);
  break;
 case 129:
  VAR_22 |= (VAR_13 | VAR_14);
  break;
 case 128:



  VAR_22 |= VAR_13;
  VAR_22 &= ~VAR_14;
  break;
 case 131:



  VAR_22 |= (VAR_13 | VAR_14);
  break;
 default:
  FUNC_2("Flow control param set incorrectly\n");
  return -VAR_7;
 }

 VAR_21 = FUNC_1(VAR_20, VAR_16, VAR_22);
 if (VAR_21)
  return VAR_21;

 FUNC_2("Auto-Neg Advertising %x\n", VAR_22);

 if (VAR_20->phy_type == VAR_19) {
  VAR_23 = 0;
 } else {
  VAR_21 = FUNC_1(VAR_20, VAR_15,
                                VAR_23);
  if (VAR_21)
   return VAR_21;
 }

 return VAR_8;
}
