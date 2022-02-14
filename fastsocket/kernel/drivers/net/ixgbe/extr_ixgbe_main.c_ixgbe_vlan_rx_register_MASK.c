
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_group {int dummy; } ;
struct net_device {int dummy; } ;
struct ixgbe_adapter {int state; struct vlan_group* vlgrp; } ;


 int VAR_0 ;
 int FUNC_0 (struct ixgbe_adapter*) ;
 int FUNC_1 (struct ixgbe_adapter*,int,int) ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 int FUNC_3 (struct net_device*,int ) ;
 struct ixgbe_adapter* FUNC_4 (struct net_device*) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static void FUNC_6(struct net_device *VAR_1,
       struct vlan_group *VAR_2)
{
 struct ixgbe_adapter *VAR_3 = FUNC_4(VAR_1);

 if (!FUNC_5(VAR_0, &VAR_3->state))
  FUNC_0(VAR_3);
 VAR_3->vlgrp = VAR_2;






 FUNC_2(VAR_3);

 FUNC_3(VAR_1, 0);

 if (!FUNC_5(VAR_0, &VAR_3->state))
  FUNC_1(VAR_3, 1, 1);
}
