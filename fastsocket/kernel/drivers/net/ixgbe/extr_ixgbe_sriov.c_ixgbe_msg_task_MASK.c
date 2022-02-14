
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u32 ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {scalar_t__ num_vfs; struct ixgbe_hw hw; } ;


 int FUNC_0 (struct ixgbe_hw*,scalar_t__) ;
 int FUNC_1 (struct ixgbe_hw*,scalar_t__) ;
 int FUNC_2 (struct ixgbe_hw*,scalar_t__) ;
 int FUNC_3 (struct ixgbe_adapter*,scalar_t__) ;
 int FUNC_4 (struct ixgbe_adapter*,scalar_t__) ;
 int FUNC_5 (struct ixgbe_adapter*,scalar_t__) ;

void FUNC_6(struct ixgbe_adapter *VAR_0)
{
 struct ixgbe_hw *VAR_1 = &VAR_0->hw;
 u32 VAR_2;

 for (VAR_2 = 0; VAR_2 < VAR_0->num_vfs; VAR_2++) {

  if (!FUNC_2(VAR_1, VAR_2))
   FUNC_5(VAR_0, VAR_2);


  if (!FUNC_1(VAR_1, VAR_2))
   FUNC_4(VAR_0, VAR_2);


  if (!FUNC_0(VAR_1, VAR_2))
   FUNC_3(VAR_0, VAR_2);
 }
}
