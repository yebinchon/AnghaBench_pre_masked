
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum ixgbe_phy_type { ____Placeholder_ixgbe_phy_type } ixgbe_phy_type ;






 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

__attribute__((used)) static enum ixgbe_phy_type FUNC_0(u32 VAR_5)
{
 enum ixgbe_phy_type VAR_6;

 switch (VAR_5) {
 case 129:
  VAR_6 = VAR_3;
  break;
 case 128:
  VAR_6 = VAR_0;
  break;
 case 130:
  VAR_6 = VAR_2;
  break;
 case 131:
  VAR_6 = VAR_1;
  break;
 default:
  VAR_6 = VAR_4;
  break;
 }

 return VAR_6;
}
