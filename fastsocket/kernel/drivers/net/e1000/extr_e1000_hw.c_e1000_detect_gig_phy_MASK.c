
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {scalar_t__ phy_id; int phy_revision; int mac_type; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
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
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int) ;

__attribute__((used)) static s32 FUNC_4(struct e1000_hw *VAR_13)
{
 s32 VAR_14, VAR_15;
 u16 VAR_16, VAR_17;
 bool VAR_18 = 0;

 FUNC_2("e1000_detect_gig_phy");

 if (VAR_13->phy_id != 0)
  return VAR_2;


 VAR_15 = FUNC_0(VAR_13, VAR_8, &VAR_16);
 if (VAR_15)
  return VAR_15;

 VAR_13->phy_id = (u32) (VAR_16 << 16);
 FUNC_3(20);
 VAR_15 = FUNC_0(VAR_13, VAR_9, &VAR_17);
 if (VAR_15)
  return VAR_15;

 VAR_13->phy_id |= (u32) (VAR_17 & VAR_10);
 VAR_13->phy_revision = (u32) VAR_17 & ~VAR_10;

 switch (VAR_13->mac_type) {
 case 136:
  if (VAR_13->phy_id == VAR_4)
   VAR_18 = 1;
  break;
 case 135:
  if (VAR_13->phy_id == VAR_5)
   VAR_18 = 1;
  break;
 case 139:
 case 134:
 case 133:
 case 132:
 case 131:
  if (VAR_13->phy_id == VAR_6)
   VAR_18 = 1;
  break;
 case 128:
  if ((VAR_13->phy_id == VAR_12) ||
      (VAR_13->phy_id == VAR_11) ||
      (VAR_13->phy_id == VAR_7))
   VAR_18 = 1;
  break;
 case 138:
 case 137:
 case 130:
 case 129:
  if (VAR_13->phy_id == VAR_3)
   VAR_18 = 1;
  break;
 default:
  FUNC_2("Invalid MAC type %d\n", VAR_13->mac_type);
  return -VAR_0;
 }
 VAR_14 = FUNC_1(VAR_13);

 if ((VAR_18) && (VAR_14 == VAR_2)) {
  FUNC_2("PHY ID 0x%X detected\n", VAR_13->phy_id);
  return VAR_2;
 }
 FUNC_2("Invalid PHY ID 0x%X\n", VAR_13->phy_id);
 return -VAR_1;
}
