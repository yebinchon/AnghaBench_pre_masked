
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {int flags; int state; int flags2; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct ixgbe_hw*,int ,int) ;
 int VAR_5 ;
 int FUNC_1 (struct ixgbe_adapter*) ;
 int FUNC_2 (int ,int *) ;

__attribute__((used)) static void FUNC_3(struct ixgbe_adapter *VAR_6, u32 VAR_7)
{
 struct ixgbe_hw *VAR_8 = &VAR_6->hw;

 if (VAR_7 & VAR_2) {

  FUNC_0(VAR_8, VAR_0, VAR_2);
  if (!FUNC_2(VAR_5, &VAR_6->state)) {
   VAR_6->flags2 |= VAR_3;
   FUNC_1(VAR_6);
  }
 }

 if (VAR_7 & VAR_1) {

  FUNC_0(VAR_8, VAR_0, VAR_1);
  if (!FUNC_2(VAR_5, &VAR_6->state)) {
   VAR_6->flags |= VAR_4;
   FUNC_1(VAR_6);
  }
 }
}
