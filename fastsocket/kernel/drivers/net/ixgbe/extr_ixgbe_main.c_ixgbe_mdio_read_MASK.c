
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u16 ;
struct net_device {int dummy; } ;
struct TYPE_5__ {int (* read_reg ) (struct ixgbe_hw*,int,int,int*) ;} ;
struct TYPE_4__ {int prtad; } ;
struct TYPE_6__ {TYPE_2__ ops; TYPE_1__ mdio; } ;
struct ixgbe_hw {TYPE_3__ phy; } ;
struct ixgbe_adapter {struct ixgbe_hw hw; } ;


 int VAR_0 ;
 struct ixgbe_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ixgbe_hw*,int,int,int*) ;

__attribute__((used)) static int
FUNC_2(struct net_device *VAR_1, int VAR_2, int VAR_3, u16 VAR_4)
{
 struct ixgbe_adapter *VAR_5 = FUNC_0(VAR_1);
 struct ixgbe_hw *VAR_6 = &VAR_5->hw;
 u16 VAR_7;
 int VAR_8;

 if (VAR_2 != VAR_6->phy.mdio.prtad)
  return -VAR_0;
 VAR_8 = VAR_6->phy.ops.read_reg(VAR_6, VAR_4, VAR_3, &VAR_7);
 if (!VAR_8)
  VAR_8 = VAR_7;
 return VAR_8;
}
