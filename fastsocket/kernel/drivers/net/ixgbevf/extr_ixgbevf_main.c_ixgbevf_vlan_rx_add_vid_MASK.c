
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_3__ {int (* set_vfta ) (struct ixgbe_hw*,int ,int ,int) ;} ;
struct TYPE_4__ {TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbevf_adapter {int mbx_lock; struct ixgbe_hw hw; } ;


 struct ixgbevf_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct ixgbe_hw*,int ,int ,int) ;

__attribute__((used)) static void FUNC_4(struct net_device *VAR_0, u16 VAR_1)
{
 struct ixgbevf_adapter *VAR_2 = FUNC_0(VAR_0);
 struct ixgbe_hw *VAR_3 = &VAR_2->hw;

 FUNC_1(&VAR_2->mbx_lock);


 VAR_3->mac.ops.set_vfta(VAR_3, VAR_1, 0, 1);

 FUNC_2(&VAR_2->mbx_lock);
}
