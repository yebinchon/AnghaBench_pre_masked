
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int mc_filter_type; } ;
struct ixgbe_addr_filter_info {scalar_t__ mta_in_use; } ;
struct ixgbe_hw {TYPE_1__ mac; struct ixgbe_addr_filter_info addr_ctrl; } ;
typedef int s32 ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct ixgbe_hw*,int ,int) ;

s32 FUNC_1(struct ixgbe_hw *VAR_2)
{
 struct ixgbe_addr_filter_info *VAR_3 = &VAR_2->addr_ctrl;

 if (VAR_3->mta_in_use > 0)
  FUNC_0(VAR_2, VAR_0, VAR_1 |
                  VAR_2->mac.mc_filter_type);

 return 0;
}
