
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {scalar_t__ mac_type; scalar_t__ phy_type; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct e1000_hw*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int) ;
 scalar_t__ FUNC_2 (struct e1000_hw*) ;
 scalar_t__ FUNC_3 (struct e1000_hw*) ;
 scalar_t__ VAR_3 ;
 int FUNC_4 (char*) ;

__attribute__((used)) static s32 FUNC_5(struct e1000_hw *VAR_4)
{
 s32 VAR_5;
 FUNC_4("e1000_copper_link_postconfig");

 if ((VAR_4->mac_type >= VAR_1) && (VAR_4->mac_type != VAR_2)) {
  FUNC_0(VAR_4);
 } else {
  VAR_5 = FUNC_3(VAR_4);
  if (VAR_5) {
   FUNC_4("Error configuring MAC to PHY settings\n");
   return VAR_5;
  }
 }
 VAR_5 = FUNC_2(VAR_4);
 if (VAR_5) {
  FUNC_4("Error Configuring Flow Control\n");
  return VAR_5;
 }


 if (VAR_4->phy_type == VAR_3) {
  VAR_5 = FUNC_1(VAR_4, 1);
  if (VAR_5) {
   FUNC_4("Error Configuring DSP after link up\n");
   return VAR_5;
  }
 }

 return VAR_0;
}
