
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct e1000_hw {int mac_type; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;


 scalar_t__ FUNC_0 (struct e1000_hw*,int ,int*) ;
 scalar_t__ FUNC_1 (struct e1000_hw*,int ,int) ;
 int FUNC_2 (char*) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_5)
{
 s32 VAR_6;
 u16 VAR_7 = 0;
 u16 VAR_8;

 FUNC_2("e1000_set_vco_speed");

 switch (VAR_5->mac_type) {
 case 129:
 case 128:
  break;
 default:
  return VAR_0;
 }



 VAR_6 =
     FUNC_0(VAR_5, VAR_2, &VAR_7);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_1(VAR_5, VAR_2, 0x0005);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_1, &VAR_8);
 if (VAR_6)
  return VAR_6;

 VAR_8 &= ~VAR_4;
 VAR_6 = FUNC_1(VAR_5, VAR_1, VAR_8);
 if (VAR_6)
  return VAR_6;



 VAR_6 = FUNC_1(VAR_5, VAR_2, 0x0004);
 if (VAR_6)
  return VAR_6;

 VAR_6 = FUNC_0(VAR_5, VAR_1, &VAR_8);
 if (VAR_6)
  return VAR_6;

 VAR_8 |= VAR_3;
 VAR_6 = FUNC_1(VAR_5, VAR_1, VAR_8);
 if (VAR_6)
  return VAR_6;

 VAR_6 =
     FUNC_1(VAR_5, VAR_2, VAR_7);
 if (VAR_6)
  return VAR_6;

 return VAR_0;
}
