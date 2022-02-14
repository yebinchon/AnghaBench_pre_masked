
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,scalar_t__*) ;

bool FUNC_1(struct e1000_hw *VAR_4)
{
 u16 VAR_5 = 0;
 u16 VAR_6 = 0;
 s32 VAR_7;




 VAR_7 = FUNC_0(VAR_4, VAR_2, &VAR_6);
 if (VAR_7)
  return 0;
 if (VAR_6 == VAR_3) {
  VAR_7 = FUNC_0(VAR_4, VAR_0, &VAR_5);
  if (VAR_7)
   return 0;
  if ((VAR_5 & VAR_1) ==
      VAR_1)
   return 1;
 }

 return 0;
}
