
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct e1000_hw {int fc; scalar_t__ mac_type; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

s32 FUNC_3(struct e1000_hw *VAR_6)
{
 u32 VAR_7;

 FUNC_0("e1000_force_mac_fc");


 VAR_7 = FUNC_1(VAR_0);
 switch (VAR_6->fc) {
 case 130:
  VAR_7 &= (~(VAR_2 | VAR_1));
  break;
 case 129:
  VAR_7 &= (~VAR_2);
  VAR_7 |= VAR_1;
  break;
 case 128:
  VAR_7 &= (~VAR_1);
  VAR_7 |= VAR_2;
  break;
 case 131:
  VAR_7 |= (VAR_2 | VAR_1);
  break;
 default:
  FUNC_0("Flow control param set incorrectly\n");
  return -VAR_3;
 }


 if (VAR_6->mac_type == VAR_5)
  VAR_7 &= (~VAR_2);

 FUNC_2(VAR_0, VAR_7);
 return VAR_4;
}
