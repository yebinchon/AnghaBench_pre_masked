
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
typedef int u16 ;
struct TYPE_2__ {int phy_id; scalar_t__ force_media; } ;
struct nic {int phy; scalar_t__ mac; int flags; int* eeprom; TYPE_1__ mii; int mdio_ctrl; struct net_device* netdev; } ;
struct net_device {int dummy; } ;


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
 scalar_t__ FUNC_0 (struct nic*) ;
 size_t VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 scalar_t__ VAR_22 ;
 int VAR_23 ;
 int FUNC_1 (struct net_device*,int,int ) ;
 int FUNC_2 (struct net_device*,int,int ,int) ;
 int FUNC_3 (struct nic*,int ,struct net_device*,char*) ;
 int FUNC_4 (struct nic*,int ,int ,struct net_device*,char*,int) ;
 int VAR_24 ;
 int VAR_25 ;

__attribute__((used)) static int FUNC_5(struct nic *VAR_26)
{
 struct net_device *VAR_27 = VAR_26->netdev;
 u32 VAR_28;
 u16 VAR_29, VAR_30, VAR_31, VAR_32, VAR_33;


 for (VAR_28 = 0; VAR_28 < 32; VAR_28++) {
  VAR_26->mii.phy_id = (VAR_28 == 0) ? 1 : (VAR_28 == 1) ? 0 : VAR_28;
  VAR_29 = FUNC_1(VAR_27, VAR_26->mii.phy_id, VAR_7);
  VAR_30 = FUNC_1(VAR_27, VAR_26->mii.phy_id, VAR_8);
  VAR_30 = FUNC_1(VAR_27, VAR_26->mii.phy_id, VAR_8);
  if (!((VAR_29 == 0xFFFF) || ((VAR_30 == 0) && (VAR_29 == 0))))
   break;
 }
 if (VAR_28 == 32) {




  if (FUNC_0(VAR_26))
   return 0;
  else {

   FUNC_3(VAR_26, VAR_20, VAR_26->netdev,
      "Failed to locate any known PHY, aborting\n");
   return -VAR_4;
  }
 } else
  FUNC_4(VAR_26, VAR_20, VAR_5, VAR_26->netdev,
        "phy_addr = %d\n", VAR_26->mii.phy_id);


 VAR_31 = FUNC_1(VAR_27, VAR_26->mii.phy_id, VAR_11);
 VAR_32 = FUNC_1(VAR_27, VAR_26->mii.phy_id, VAR_12);
 VAR_26->phy = (u32)VAR_32 << 16 | (u32)VAR_31;
 FUNC_4(VAR_26, VAR_20, VAR_5, VAR_26->netdev,
       "phy ID = 0x%08X\n", VAR_26->phy);


 for (VAR_28 = 0; VAR_28 < 32; VAR_28++) {
  if (VAR_28 != VAR_26->mii.phy_id) {
   FUNC_2(VAR_27, VAR_28, VAR_7, VAR_2);
  } else if (VAR_26->phy != VAR_24) {
   VAR_29 = FUNC_1(VAR_27, VAR_28, VAR_7);
   FUNC_2(VAR_27, VAR_28, VAR_7,
    VAR_29 & ~VAR_2);
  }
 }





 if (VAR_26->phy == VAR_24)
  FUNC_2(VAR_27, VAR_26->mii.phy_id, VAR_7,
   VAR_29 & ~VAR_2);



 if ((VAR_26->phy & 0xFFF0FFFF) == VAR_25) {

  VAR_33 = FUNC_1(VAR_27, VAR_26->mii.phy_id, VAR_10);
  VAR_33 |= VAR_17;
  VAR_33 &= ~VAR_16;
  FUNC_2(VAR_27, VAR_26->mii.phy_id, VAR_10, VAR_33);
 }

 if (VAR_26->phy == VAR_24) {
  u16 VAR_34 = FUNC_1(VAR_27, VAR_26->mii.phy_id, VAR_6);


  VAR_26->mdio_ctrl = VAR_23;


  VAR_34 |= VAR_1 | VAR_0;
  FUNC_2(VAR_27, VAR_26->mii.phy_id, VAR_6, VAR_34);


  VAR_29 = FUNC_1(VAR_27, VAR_26->mii.phy_id, VAR_7);
  VAR_29 |= VAR_3;
  FUNC_2(VAR_27, VAR_26->mii.phy_id, VAR_7, VAR_29);
 } else if ((VAR_26->mac >= VAR_22) || ((VAR_26->flags & VAR_21) &&
    (FUNC_1(VAR_27, VAR_26->mii.phy_id, VAR_13) & 0x8000) &&
  !(VAR_26->eeprom[VAR_18] & VAR_19))) {

  FUNC_2(VAR_27, VAR_26->mii.phy_id, VAR_9,
    VAR_26->mii.force_media ? 0 : VAR_14);
 }

 return 0;
}
