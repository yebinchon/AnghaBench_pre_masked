
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {int mac_type; int ledctl_default; int phy_spd_default; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct e1000_hw*,int ,int ) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int ) ;

s32 FUNC_3(struct e1000_hw *VAR_3)
{
 s32 VAR_4 = VAR_0;

 FUNC_1("e1000_cleanup_led");

 switch (VAR_3->mac_type) {
 case 133:
 case 132:
 case 131:
 case 130:

  break;
 case 135:
 case 129:
 case 134:
 case 128:

  VAR_4 = FUNC_0(VAR_3, VAR_1,
           VAR_3->phy_spd_default);
  if (VAR_4)
   return VAR_4;

 default:

  FUNC_2(VAR_2, VAR_3->ledctl_default);
  break;
 }

 return VAR_0;
}
