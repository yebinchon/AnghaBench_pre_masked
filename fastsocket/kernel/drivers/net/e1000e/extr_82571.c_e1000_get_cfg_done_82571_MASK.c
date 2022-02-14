
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int,int) ;

__attribute__((used)) static s32 FUNC_3(struct e1000_hw *VAR_4)
{
 s32 VAR_5 = VAR_3;

 while (VAR_5) {
  if (FUNC_1(VAR_2) & VAR_1)
   break;
  FUNC_2(1000, 2000);
  VAR_5--;
 }
 if (!VAR_5) {
  FUNC_0("MNG configuration cycle has not completed.\n");
  return -VAR_0;
 }

 return 0;
}
