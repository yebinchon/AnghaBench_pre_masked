
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int (* update_mc_addr_list ) (struct ixgbe_hw*,struct net_device*) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbevf_adapter {int mbx_lock; struct ixgbe_hw hw; } ;


 int FUNC_0 (struct net_device*) ;
 struct ixgbevf_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct ixgbe_hw*,struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_0)
{
 struct ixgbevf_adapter *VAR_1 = FUNC_1(VAR_0);
 struct ixgbe_hw *VAR_2 = &VAR_1->hw;

 FUNC_2(&VAR_1->mbx_lock);


 VAR_2->mac.ops.update_mc_addr_list(VAR_2, VAR_0);

 FUNC_0(VAR_0);

 FUNC_3(&VAR_1->mbx_lock);
}
