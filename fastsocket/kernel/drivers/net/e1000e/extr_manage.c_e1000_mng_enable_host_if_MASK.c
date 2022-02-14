
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u32 ;
struct TYPE_2__ {int arc_subsystem_valid; } ;
struct e1000_hw {TYPE_1__ mac; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_5)
{
 u32 VAR_6;
 u8 VAR_7;

 if (!VAR_5->mac.arc_subsystem_valid) {
  FUNC_0("ARC subsystem not valid.\n");
  return -VAR_0;
 }


 VAR_6 = FUNC_1(VAR_4);
 if (!(VAR_6 & VAR_2)) {
  FUNC_0("E1000_HOST_EN bit disabled.\n");
  return -VAR_0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  VAR_6 = FUNC_1(VAR_4);
  if (!(VAR_6 & VAR_1))
   break;
  FUNC_2(1);
 }

 if (VAR_7 == VAR_3) {
  FUNC_0("Previous command timeout failed .\n");
  return -VAR_0;
 }

 return 0;
}
