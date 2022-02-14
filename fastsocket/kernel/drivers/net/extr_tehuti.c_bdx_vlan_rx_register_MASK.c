
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_group {int dummy; } ;
struct net_device {int name; } ;
struct bdx_priv {struct vlan_group* vlgrp; } ;


 int FUNC_0 (char*,int ,struct vlan_group*) ;
 int VAR_0 ;
 int FUNC_1 () ;
 struct bdx_priv* FUNC_2 (struct net_device*) ;

__attribute__((used)) static void
FUNC_3(struct net_device *VAR_1, struct vlan_group *VAR_2)
{
 struct bdx_priv *VAR_3 = FUNC_2(VAR_1);

 VAR_0;
 FUNC_0("device='%s', group='%p'\n", VAR_1->name, VAR_2);
 VAR_3->vlgrp = VAR_2;
 FUNC_1();
}
