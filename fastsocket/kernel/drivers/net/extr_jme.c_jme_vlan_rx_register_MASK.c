
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_group {int dummy; } ;
struct net_device {int dummy; } ;
struct jme_adapter {struct vlan_group* vlgrp; } ;


 int FUNC_0 (struct jme_adapter*) ;
 int FUNC_1 (struct jme_adapter*) ;
 struct jme_adapter* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_0, struct vlan_group *VAR_1)
{
 struct jme_adapter *VAR_2 = FUNC_2(VAR_0);

 FUNC_0(VAR_2);
 VAR_2->vlgrp = VAR_1;
 FUNC_1(VAR_2);
}
