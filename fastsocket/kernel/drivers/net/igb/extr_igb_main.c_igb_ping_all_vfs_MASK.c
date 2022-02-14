
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct e1000_hw {int dummy; } ;
struct igb_adapter {int vfs_allocated_count; TYPE_1__* vf_data; struct e1000_hw hw; } ;
struct TYPE_2__ {int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct e1000_hw*,int *,int,int) ;

__attribute__((used)) static void FUNC_1(struct igb_adapter *VAR_3)
{
 struct e1000_hw *VAR_4 = &VAR_3->hw;
 u32 VAR_5;
 int VAR_6;

 for (VAR_6 = 0 ; VAR_6 < VAR_3->vfs_allocated_count; VAR_6++) {
  VAR_5 = VAR_0;
  if (VAR_3->vf_data[VAR_6].flags & VAR_2)
   VAR_5 |= VAR_1;
  FUNC_0(VAR_4, &VAR_5, 1, VAR_6);
 }
}
