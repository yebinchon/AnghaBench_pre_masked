
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {int flags; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct ixgbe_hw*,int ,int) ;
 int FUNC_1 (int ,char*) ;
 int VAR_3 ;

__attribute__((used)) static void FUNC_2(struct ixgbe_adapter *VAR_4, u32 VAR_5)
{
 struct ixgbe_hw *VAR_6 = &VAR_4->hw;

 if ((VAR_4->flags & VAR_2) &&
     (VAR_5 & VAR_1)) {
  FUNC_1(VAR_3, "Fan has stopped, replace the adapter\n");

  FUNC_0(VAR_6, VAR_0, VAR_1);
 }
}
