
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct net_device {int mtu; } ;
struct TYPE_2__ {int type; } ;
struct ixgbe_hw {TYPE_1__ mac; } ;
struct ixgbe_adapter {struct net_device* netdev; struct ixgbe_hw hw; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;


__attribute__((used)) static int FUNC_3(struct ixgbe_adapter *VAR_2)
{
 struct ixgbe_hw *VAR_3 = &VAR_2->hw;
 struct net_device *VAR_4 = VAR_2->netdev;
 int VAR_5;
 u32 VAR_6;


 VAR_5 = VAR_4->mtu + VAR_1 + VAR_0;


 switch (VAR_3->mac.type) {
 case 128:
  VAR_6 = FUNC_2(VAR_5);
  break;
 default:
  VAR_6 = FUNC_1(VAR_5);
  break;
 }


 return FUNC_0(VAR_6);
}
