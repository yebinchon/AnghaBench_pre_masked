
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {scalar_t__ mac_type; int phy_reset_disable; int phy_id; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*,int ,int) ;
 int FUNC_5 (char*,...) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ,int) ;

__attribute__((used)) static s32 FUNC_8(struct e1000_hw *VAR_13)
{
 u32 VAR_14;
 s32 VAR_15;
 u16 VAR_16;

 FUNC_5("e1000_copper_link_preconfig");

 VAR_14 = FUNC_6(VAR_0);




 if (VAR_13->mac_type > VAR_8) {
  VAR_14 |= VAR_3;
  VAR_14 &= ~(VAR_2 | VAR_1);
  FUNC_7(VAR_0, VAR_14);
 } else {
  VAR_14 |=
      (VAR_2 | VAR_1 | VAR_3);
  FUNC_7(VAR_0, VAR_14);
  VAR_15 = FUNC_1(VAR_13);
  if (VAR_15)
   return VAR_15;
 }


 VAR_15 = FUNC_0(VAR_13);
 if (VAR_15) {
  FUNC_5("Error, did not detect valid phy.\n");
  return VAR_15;
 }
 FUNC_5("Phy ID = %x\n", VAR_13->phy_id);


 VAR_15 = FUNC_3(VAR_13);
 if (VAR_15)
  return VAR_15;

 if ((VAR_13->mac_type == VAR_9) ||
     (VAR_13->mac_type == VAR_10)) {
  VAR_15 =
      FUNC_2(VAR_13, VAR_5, &VAR_16);
  VAR_16 |= 0x00000008;
  VAR_15 =
      FUNC_4(VAR_13, VAR_5, VAR_16);
 }

 if (VAR_13->mac_type <= VAR_8 ||
     VAR_13->mac_type == VAR_6 || VAR_13->mac_type == VAR_11 ||
     VAR_13->mac_type == VAR_7
     || VAR_13->mac_type == VAR_12)
  VAR_13->phy_reset_disable = 0;

 return VAR_4;
}
