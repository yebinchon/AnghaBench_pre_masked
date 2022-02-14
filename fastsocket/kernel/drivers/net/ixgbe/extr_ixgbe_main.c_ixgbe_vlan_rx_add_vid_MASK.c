
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
struct ixgbe_adapter {struct ixgbe_hw hw; } ;


 int FUNC_0 (int ) ;
 struct ixgbe_adapter* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct ixgbe_hw*,int ,int ,int) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_0, u16 VAR_1)
{
 struct ixgbe_adapter *VAR_2 = FUNC_1(VAR_0);
 struct ixgbe_hw *VAR_3 = &VAR_2->hw;


 VAR_3->mac.ops.set_vfta(&VAR_2->hw, VAR_1, FUNC_0(0), 1);
}
