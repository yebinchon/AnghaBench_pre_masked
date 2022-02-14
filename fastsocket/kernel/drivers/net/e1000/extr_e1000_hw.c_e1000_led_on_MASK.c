
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int mac_type; int ledctl_mode2; int media_type; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;




 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;

s32 FUNC_3(struct e1000_hw *VAR_7)
{
 u32 VAR_8 = FUNC_1(VAR_0);

 FUNC_0("e1000_led_on");

 switch (VAR_7->mac_type) {
 case 131:
 case 130:
 case 129:

  VAR_8 |= VAR_1;
  VAR_8 |= VAR_2;
  break;
 case 128:
  if (VAR_7->media_type == VAR_6) {

   VAR_8 |= VAR_1;
   VAR_8 |= VAR_2;
  } else {

   VAR_8 &= ~VAR_1;
   VAR_8 |= VAR_2;
  }
  break;
 default:
  if (VAR_7->media_type == VAR_6) {

   VAR_8 &= ~VAR_1;
   VAR_8 |= VAR_2;
  } else if (VAR_7->media_type == VAR_5) {
   FUNC_2(VAR_4, VAR_7->ledctl_mode2);
   return VAR_3;
  }
  break;
 }

 FUNC_2(VAR_0, VAR_8);

 return VAR_3;
}
