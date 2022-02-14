
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct ixgbe_hw*,int*) ;

__attribute__((used)) static s32 FUNC_1(struct ixgbe_hw *VAR_0, u8 *VAR_1)
{
 s32 VAR_2;
 bool VAR_3 = 0;

 for (VAR_2 = 7; VAR_2 >= 0; VAR_2--) {
  FUNC_0(VAR_0, &VAR_3);
  *VAR_1 |= VAR_3 << VAR_2;
 }

 return 0;
}
