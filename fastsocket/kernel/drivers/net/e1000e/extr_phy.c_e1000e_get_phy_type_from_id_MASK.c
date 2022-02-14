
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef enum e1000_phy_type { ____Placeholder_e1000_phy_type } e1000_phy_type ;
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

enum e1000_phy_type FUNC_0(u32 VAR_11)
{
 enum e1000_phy_type VAR_12 = VAR_10;

 switch (VAR_11) {
 case 130:
 case 131:
 case 128:
 case 129:
  VAR_12 = VAR_9;
  break;
 case 133:
  VAR_12 = VAR_7;
  break;
 case 141:
  VAR_12 = VAR_4;
  break;
 case 132:
  VAR_12 = VAR_8;
  break;
 case 135:
 case 134:
 case 136:
  VAR_12 = VAR_6;
  break;
 case 143:
 case 142:
  VAR_12 = VAR_3;
  break;
 case 138:
  VAR_12 = VAR_1;
  break;
 case 139:
  VAR_12 = VAR_0;
  break;
 case 137:
  VAR_12 = VAR_2;
  break;
 case 140:
  VAR_12 = VAR_5;
  break;
 default:
  VAR_12 = VAR_10;
  break;
 }
 return VAR_12;
}
