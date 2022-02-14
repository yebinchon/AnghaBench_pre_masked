
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*,int*,int) ;

__attribute__((used)) static s32 FUNC_1(struct ixgbe_hw *VAR_2, u32 VAR_3, u32 VAR_4,
          bool VAR_5)
{
 u32 VAR_6[2];

 VAR_6[0] = VAR_0;
 VAR_6[1] = VAR_3;

 VAR_6[0] |= VAR_5 << VAR_1;

 FUNC_0(VAR_2, VAR_6, 2);

 return 0;
}
