
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;

s32 FUNC_3(struct e1000_hw *VAR_4)
{
 s32 VAR_5 = 0;

 while (VAR_5 < VAR_0) {
  if (FUNC_1(VAR_3) & VAR_1)
   break;
  FUNC_2(1000, 2000);
  VAR_5++;
 }

 if (VAR_5 == VAR_0) {
  FUNC_0("Auto read by HW from NVM has not completed.\n");
  return -VAR_2;
 }

 return 0;
}
