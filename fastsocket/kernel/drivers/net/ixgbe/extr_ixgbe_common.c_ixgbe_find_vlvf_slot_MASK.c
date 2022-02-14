
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 int FUNC_2 (struct ixgbe_hw*,char*) ;

__attribute__((used)) static s32 FUNC_3(struct ixgbe_hw *VAR_2, u32 VAR_3)
{
 u32 VAR_4 = 0;
 u32 VAR_5 = 0;
 s32 VAR_6;


 if (VAR_3 == 0)
  return 0;





 for (VAR_6 = 1; VAR_6 < VAR_1; VAR_6++) {
  VAR_4 = FUNC_0(VAR_2, FUNC_1(VAR_6));
  if (!VAR_4 && !(VAR_5))
   VAR_5 = VAR_6;
  else if ((VAR_4 & 0x0FFF) == VAR_3)
   break;
 }






 if (VAR_6 >= VAR_1) {
  if (VAR_5)
   VAR_6 = VAR_5;
  else {
   FUNC_2(VAR_2, "No space in VLVF.\n");
   VAR_6 = VAR_0;
  }
 }

 return VAR_6;
}
