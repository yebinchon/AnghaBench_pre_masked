
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct e1000_mac_info {int txcw; } ;
struct TYPE_2__ {int current_mode; } ;
struct e1000_hw {TYPE_1__ fc; struct e1000_mac_info mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;




 int FUNC_0 (char*) ;
 int FUNC_1 (int ,int) ;

__attribute__((used)) static s32 FUNC_2(struct e1000_hw *VAR_6)
{
 struct e1000_mac_info *VAR_7 = &VAR_6->mac;
 u32 VAR_8;
 switch (VAR_6->fc.current_mode) {
 case 130:

  VAR_8 = (VAR_1 | VAR_3);
  break;
 case 129:







  VAR_8 = (VAR_1 | VAR_3 | VAR_4);
  break;
 case 128:



  VAR_8 = (VAR_1 | VAR_3 | VAR_2);
  break;
 case 131:



  VAR_8 = (VAR_1 | VAR_3 | VAR_4);
  break;
 default:
  FUNC_0("Flow control param set incorrectly\n");
  return -VAR_0;
  break;
 }

 FUNC_1(VAR_5, VAR_8);
 VAR_7->txcw = VAR_8;

 return 0;
}
