
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
typedef int s32 ;


 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int) ;

__attribute__((used)) static s32 FUNC_4(struct ixgbe_hw *VAR_0)
{
 u32 VAR_1 = 0;
 u8 VAR_2 = 0;
 u8 VAR_3 = 0;


 for (VAR_2 = 0, VAR_3 = 0; VAR_2 < 15 && VAR_3 < 8; VAR_2 = VAR_2 + 2, VAR_3++) {
  VAR_1 = FUNC_0(VAR_0, FUNC_1(VAR_2));
  VAR_1 |= ((0x1010101) * VAR_3);
  FUNC_3(VAR_0, FUNC_1(VAR_2), VAR_1);
  VAR_1 = FUNC_0(VAR_0, FUNC_1(VAR_2 + 1));
  VAR_1 |= ((0x1010101) * VAR_3);
  FUNC_3(VAR_0, FUNC_1(VAR_2 + 1), VAR_1);
 }

 for (VAR_2 = 0; VAR_2 < 8; VAR_2++) {
  VAR_1 = FUNC_0(VAR_0, FUNC_2(VAR_2));
  VAR_1 |= ((0x1010101) * VAR_2);
  FUNC_3(VAR_0, FUNC_2(VAR_2), VAR_1);
 }

 return 0;
}
