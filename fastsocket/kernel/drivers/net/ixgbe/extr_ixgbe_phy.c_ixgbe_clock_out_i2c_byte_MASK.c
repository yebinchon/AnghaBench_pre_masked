
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_3 (struct ixgbe_hw*,int) ;

__attribute__((used)) static s32 FUNC_4(struct ixgbe_hw *VAR_2, u8 VAR_3)
{
 s32 VAR_4 = 0;
 s32 VAR_5;
 u32 VAR_6;
 bool VAR_7 = 0;

 for (VAR_5 = 7; VAR_5 >= 0; VAR_5--) {
  VAR_7 = (VAR_3 >> VAR_5) & 0x1;
  VAR_4 = FUNC_3(VAR_2, VAR_7);

  if (VAR_4 != 0)
   break;
 }


 VAR_6 = FUNC_0(VAR_2, VAR_0);
 VAR_6 |= VAR_1;
 FUNC_2(VAR_2, VAR_0, VAR_6);
 FUNC_1(VAR_2);

 return VAR_4;
}
