
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ixgbe_hw {int dummy; } ;
struct ixgbe_adapter {int num_vfs; TYPE_1__* vfinfo; struct ixgbe_hw hw; } ;
struct TYPE_2__ {scalar_t__ clear_to_send; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*,int *,int,int) ;

void FUNC_1(struct ixgbe_adapter *VAR_2)
{
 struct ixgbe_hw *VAR_3 = &VAR_2->hw;
 u32 VAR_4;
 int VAR_5;

 for (VAR_5 = 0 ; VAR_5 < VAR_2->num_vfs; VAR_5++) {
  VAR_4 = VAR_0;
  if (VAR_2->vfinfo[VAR_5].clear_to_send)
   VAR_4 |= VAR_1;
  FUNC_0(VAR_3, &VAR_4, 1, VAR_5);
 }
}
