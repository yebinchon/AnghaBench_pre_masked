
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
typedef int u16 ;
struct ixgbe_hw {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*,int ,int ) ;
 int FUNC_2 (struct ixgbe_hw*) ;
 int FUNC_3 (struct ixgbe_hw*) ;

void FUNC_4(struct ixgbe_hw *VAR_1, u16 VAR_2)
{
 u32 VAR_3;
 u32 VAR_4 = VAR_2;

 FUNC_2(VAR_1);

 VAR_3 = FUNC_0(VAR_1, VAR_0);
 VAR_3 &= ~VAR_4;
 FUNC_1(VAR_1, VAR_0, VAR_3);

 FUNC_3(VAR_1);
}
