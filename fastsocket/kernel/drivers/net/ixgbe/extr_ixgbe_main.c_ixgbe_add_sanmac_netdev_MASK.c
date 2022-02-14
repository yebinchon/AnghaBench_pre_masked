
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_4__ {int (* set_vmdq_san_mac ) (struct ixgbe_hw*,int ) ;} ;
struct TYPE_3__ {TYPE_2__ ops; int san_addr; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (struct net_device*,int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 struct ixgbe_adapter* FUNC_3 (struct net_device*) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (struct ixgbe_hw*,int ) ;

__attribute__((used)) static int FUNC_7(struct net_device *VAR_1)
{
 int VAR_2 = 0;
 struct ixgbe_adapter *VAR_3 = FUNC_3(VAR_1);
 struct ixgbe_hw *VAR_4 = &VAR_3->hw;

 if (FUNC_2(VAR_4->mac.san_addr)) {
  FUNC_4();
  VAR_2 = FUNC_1(VAR_1, VAR_4->mac.san_addr, VAR_0);
  FUNC_5();


  VAR_4->mac.ops.set_vmdq_san_mac(VAR_4, FUNC_0(0));
 }
 return VAR_2;
}
