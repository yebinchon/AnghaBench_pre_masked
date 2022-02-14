
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct e1000_hw {int mac_type; int phy_spd_default; int ledctl_default; int ledctl_mode1; int media_type; } ;
typedef int s32 ;


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
 int FUNC_0 (struct e1000_hw*,int ,int*) ;
 int FUNC_1 (struct e1000_hw*,int ,int ) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,int) ;

s32 FUNC_5(struct e1000_hw *VAR_11)
{
 u32 VAR_12;
 s32 VAR_13 = VAR_5;

 FUNC_2("e1000_setup_led");

 switch (VAR_11->mac_type) {
 case 133:
 case 132:
 case 131:
 case 130:

  break;
 case 135:
 case 129:
 case 134:
 case 128:

  VAR_13 = FUNC_0(VAR_11, VAR_6,
          &VAR_11->phy_spd_default);
  if (VAR_13)
   return VAR_13;
  VAR_13 = FUNC_1(VAR_11, VAR_6,
           (u16) (VAR_11->phy_spd_default &
           ~VAR_7));
  if (VAR_13)
   return VAR_13;

 default:
  if (VAR_11->media_type == VAR_10) {
   VAR_12 = FUNC_3(VAR_8);

   VAR_11->ledctl_default = VAR_12;

   VAR_12 &= ~(VAR_1 |
        VAR_0 |
        VAR_2);
   VAR_12 |= (VAR_4 <<
       VAR_3);
   FUNC_4(VAR_8, VAR_12);
  } else if (VAR_11->media_type == VAR_9)
   FUNC_4(VAR_8, VAR_11->ledctl_mode1);
  break;
 }

 return VAR_5;
}
