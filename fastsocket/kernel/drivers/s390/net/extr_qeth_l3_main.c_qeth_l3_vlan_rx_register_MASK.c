
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_group {int dummy; } ;
struct qeth_card {int vlanlock; struct vlan_group* vlangrp; } ;
struct net_device {struct qeth_card* ml_priv; } ;


 int FUNC_0 (int ,int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

__attribute__((used)) static void FUNC_3(struct net_device *VAR_1,
   struct vlan_group *VAR_2)
{
 struct qeth_card *VAR_3 = VAR_1->ml_priv;
 unsigned long VAR_4;

 FUNC_0(VAR_0, 4, "vlanreg");
 FUNC_1(&VAR_3->vlanlock, VAR_4);
 VAR_3->vlangrp = VAR_2;
 FUNC_2(&VAR_3->vlanlock, VAR_4);
}
