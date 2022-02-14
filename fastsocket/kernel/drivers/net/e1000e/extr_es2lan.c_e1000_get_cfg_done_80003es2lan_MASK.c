
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct TYPE_2__ {int func; } ;
struct e1000_hw {TYPE_1__ bus; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_5)
{
 s32 VAR_6 = VAR_4;
 u32 VAR_7 = VAR_1;

 if (VAR_5->bus.func == 1)
  VAR_7 = VAR_2;

 while (VAR_6) {
  if (FUNC_1(VAR_3) & VAR_7)
   break;
  FUNC_2(1000, 2000);
  VAR_6--;
 }
 if (!VAR_6) {
  FUNC_0("MNG configuration cycle has not completed.\n");
  return -VAR_0;
 }

 return 0;
}
