
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int current_mode; } ;
struct e1000_hw {TYPE_1__ fc; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;




 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int) ;

s32 FUNC_3(struct e1000_hw *VAR_4)
{
 u32 VAR_5;

 VAR_5 = FUNC_1(VAR_0);
 FUNC_0("hw->fc.current_mode = %u\n", VAR_4->fc.current_mode);

 switch (VAR_4->fc.current_mode) {
 case 130:
  VAR_5 &= (~(VAR_2 | VAR_1));
  break;
 case 129:
  VAR_5 &= (~VAR_2);
  VAR_5 |= VAR_1;
  break;
 case 128:
  VAR_5 &= (~VAR_1);
  VAR_5 |= VAR_2;
  break;
 case 131:
  VAR_5 |= (VAR_2 | VAR_1);
  break;
 default:
  FUNC_0("Flow control param set incorrectly\n");
  return -VAR_3;
 }

 FUNC_2(VAR_0, VAR_5);

 return 0;
}
