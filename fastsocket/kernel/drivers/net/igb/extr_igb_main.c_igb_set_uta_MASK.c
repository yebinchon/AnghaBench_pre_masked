
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ type; int uta_reg_count; } ;
struct e1000_hw {TYPE_1__ mac; } ;
struct igb_adapter {int vfs_allocated_count; struct e1000_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ,int,int ) ;
 scalar_t__ VAR_1 ;

__attribute__((used)) static void FUNC_1(struct igb_adapter *VAR_2)
{
 struct e1000_hw *VAR_3 = &VAR_2->hw;
 int VAR_4;


 if (VAR_3->mac.type < VAR_1)
  return;


 if (!VAR_2->vfs_allocated_count)
  return;

 for (VAR_4 = 0; VAR_4 < VAR_3->mac.uta_reg_count; VAR_4++)
  FUNC_0(VAR_0, VAR_4, ~0);
}
