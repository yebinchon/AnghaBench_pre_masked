
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int dummy; } ;
struct TYPE_3__ {int mdio; } ;
struct TYPE_4__ {TYPE_1__ phy; } ;
struct ixgbe_adapter {TYPE_2__ hw; } ;
struct ifreq {int dummy; } ;



 int FUNC_0 (struct ifreq*) ;
 int FUNC_1 (struct ixgbe_adapter*,struct ifreq*,int) ;
 int FUNC_2 (int *,int ,int) ;
 struct ixgbe_adapter* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0, struct ifreq *VAR_1, int VAR_2)
{
 struct ixgbe_adapter *VAR_3 = FUNC_3(VAR_0);

 switch (VAR_2) {




 default:
  return FUNC_2(&VAR_3->hw.phy.mdio, FUNC_0(VAR_1), VAR_2);
 }
}
