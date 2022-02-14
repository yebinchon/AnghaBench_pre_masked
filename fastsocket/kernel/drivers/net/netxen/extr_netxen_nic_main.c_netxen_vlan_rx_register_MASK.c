
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_group {int dummy; } ;
struct netxen_adapter {struct vlan_group* vlgrp; } ;
struct net_device {int dummy; } ;


 struct netxen_adapter* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
    struct vlan_group *VAR_1)
{
 struct netxen_adapter *VAR_2 = FUNC_0(VAR_0);
 VAR_2->vlgrp = VAR_1;
}
