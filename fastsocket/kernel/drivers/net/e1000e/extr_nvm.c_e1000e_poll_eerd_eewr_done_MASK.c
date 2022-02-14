
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct e1000_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int) ;

s32 FUNC_2(struct e1000_hw *VAR_5, int VAR_6)
{
 u32 VAR_7 = 100000;
 u32 VAR_8, VAR_9 = 0;

 for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8++) {
  if (VAR_6 == VAR_1)
   VAR_9 = FUNC_0(VAR_3);
  else
   VAR_9 = FUNC_0(VAR_4);

  if (VAR_9 & VAR_2)
   return 0;

  FUNC_1(5);
 }

 return -VAR_0;
}
