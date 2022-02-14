
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_hw {scalar_t__ phy_type; scalar_t__ autoneg; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (struct e1000_hw*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 scalar_t__ FUNC_4 (struct e1000_hw*) ;
 scalar_t__ FUNC_5 (struct e1000_hw*) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_6 (struct e1000_hw*,int ,int*) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (struct e1000_hw*) ;
 int FUNC_9 (int) ;

__attribute__((used)) static s32 FUNC_10(struct e1000_hw *VAR_5)
{
 s32 VAR_6;
 u16 VAR_7;
 u16 VAR_8;

 FUNC_7("e1000_setup_copper_link");


 VAR_6 = FUNC_4(VAR_5);
 if (VAR_6)
  return VAR_6;

 if (VAR_5->phy_type == VAR_3) {
  VAR_6 = FUNC_1(VAR_5);
  if (VAR_6)
   return VAR_6;
 } else if (VAR_5->phy_type == VAR_4) {
  VAR_6 = FUNC_2(VAR_5);
  if (VAR_6)
   return VAR_6;
 } else {
  VAR_6 = FUNC_8(VAR_5);
  if (VAR_6) {
   FUNC_7("gbe_dhg_phy_setup failed!\n");
   return VAR_6;
  }
 }

 if (VAR_5->autoneg) {


  VAR_6 = FUNC_0(VAR_5);
  if (VAR_6)
   return VAR_6;
 } else {


  FUNC_7("Forcing speed and duplex\n");
  VAR_6 = FUNC_5(VAR_5);
  if (VAR_6) {
   FUNC_7("Error Forcing Speed and Duplex\n");
   return VAR_6;
  }
 }




 for (VAR_7 = 0; VAR_7 < 10; VAR_7++) {
  VAR_6 = FUNC_6(VAR_5, VAR_2, &VAR_8);
  if (VAR_6)
   return VAR_6;
  VAR_6 = FUNC_6(VAR_5, VAR_2, &VAR_8);
  if (VAR_6)
   return VAR_6;

  if (VAR_8 & VAR_1) {

   VAR_6 = FUNC_3(VAR_5);
   if (VAR_6)
    return VAR_6;

   FUNC_7("Valid link established!!!\n");
   return VAR_0;
  }
  FUNC_9(10);
 }

 FUNC_7("Unable to establish link!!!\n");
 return VAR_0;
}
