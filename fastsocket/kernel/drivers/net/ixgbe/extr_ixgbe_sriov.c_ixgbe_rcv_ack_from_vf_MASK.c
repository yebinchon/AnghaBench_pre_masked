
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u32 ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {TYPE_1__* vfinfo; struct ixgbe_hw hw; } ;
struct TYPE_2__ {int clear_to_send; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct ixgbe_hw*,size_t*,int,size_t) ;

__attribute__((used)) static void FUNC_1(struct ixgbe_adapter *VAR_1, u32 VAR_2)
{
 struct ixgbe_hw *VAR_3 = &VAR_1->hw;
 u32 VAR_4 = VAR_0;


 if (!VAR_1->vfinfo[VAR_2].clear_to_send)
  FUNC_0(VAR_3, &VAR_4, 1, VAR_2);
}
