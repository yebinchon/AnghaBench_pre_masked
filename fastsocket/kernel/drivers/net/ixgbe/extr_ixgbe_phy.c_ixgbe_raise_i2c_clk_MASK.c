
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ixgbe_hw {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct ixgbe_hw*,int ) ;
 int FUNC_1 (struct ixgbe_hw*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,scalar_t__) ;
 int FUNC_3 (int ) ;

__attribute__((used)) static void FUNC_4(struct ixgbe_hw *VAR_5, u32 *VAR_6)
{
 u32 VAR_7 = 0;
 u32 VAR_8 = VAR_3;
 u32 VAR_9 = 0;

 for (VAR_7 = 0; VAR_7 < VAR_8; VAR_7++) {
  *VAR_6 |= VAR_2;
  FUNC_2(VAR_5, VAR_0, *VAR_6);
  FUNC_1(VAR_5);

  FUNC_3(VAR_4);

  VAR_9 = FUNC_0(VAR_5, VAR_0);
  if (VAR_9 & VAR_1)
   break;
 }
}
