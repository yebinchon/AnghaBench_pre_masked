
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int addr_len; int perm_addr; int dev_addr; } ;
struct TYPE_3__ {int (* init_hw ) (struct ixgbe_hw*) ;scalar_t__ (* reset_hw ) (struct ixgbe_hw*) ;} ;
struct TYPE_4__ {int addr; TYPE_1__ ops; } ;
struct ixgbe_hw {TYPE_2__ mac; } ;
struct ixgbevf_adapter {struct ixgbe_hw hw; struct net_device* netdev; } ;


 int FUNC_0 (struct ixgbe_hw*,char*) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct ixgbevf_adapter*) ;
 int FUNC_3 (int ,int ,int ) ;
 scalar_t__ FUNC_4 (struct ixgbe_hw*) ;
 int FUNC_5 (struct ixgbe_hw*) ;

void FUNC_6(struct ixgbevf_adapter *VAR_0)
{
 struct ixgbe_hw *VAR_1 = &VAR_0->hw;
 struct net_device *VAR_2 = VAR_0->netdev;

 if (VAR_1->mac.ops.reset_hw(VAR_1)) {
  FUNC_0(VAR_1, "PF still resetting\n");
 } else {
  VAR_1->mac.ops.init_hw(VAR_1);
  FUNC_2(VAR_0);
 }

 if (FUNC_1(VAR_0->hw.mac.addr)) {
  FUNC_3(VAR_2->dev_addr, VAR_0->hw.mac.addr,
         VAR_2->addr_len);
  FUNC_3(VAR_2->perm_addr, VAR_0->hw.mac.addr,
         VAR_2->addr_len);
 }
}
