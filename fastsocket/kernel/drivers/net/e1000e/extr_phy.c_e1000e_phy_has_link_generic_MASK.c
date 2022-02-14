
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
typedef scalar_t__ u16 ;
struct e1000_hw {int dummy; } ;
typedef scalar_t__ s32 ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (struct e1000_hw*,int ,scalar_t__*) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;

s32 FUNC_3(struct e1000_hw *VAR_2, u32 VAR_3,
          u32 VAR_4, bool *VAR_5)
{
 s32 VAR_6 = 0;
 u16 VAR_7, VAR_8;

 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {




  VAR_6 = FUNC_0(VAR_2, VAR_1, &VAR_8);
  if (VAR_6)




   FUNC_2(VAR_4);
  VAR_6 = FUNC_0(VAR_2, VAR_1, &VAR_8);
  if (VAR_6)
   break;
  if (VAR_8 & VAR_0)
   break;
  if (VAR_4 >= 1000)
   FUNC_1(VAR_4 / 1000);
  else
   FUNC_2(VAR_4);
 }

 *VAR_5 = (VAR_7 < VAR_3);

 return VAR_6;
}
