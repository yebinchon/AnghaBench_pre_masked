
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vlan_group {int dummy; } ;
struct qeth_card {struct vlan_group* vlangrp; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {void* ml_priv; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (struct net_device*) ;
 struct net_device* FUNC_1 (struct vlan_group*,int) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_2,
   struct qeth_card *VAR_3)
{
 int VAR_4 = 0;
 struct vlan_group *VAR_5;
 int VAR_6;

 VAR_5 = VAR_3->vlangrp;
 if (!VAR_5)
  return VAR_4;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  if (FUNC_1(VAR_5, VAR_6) == VAR_2) {
   VAR_4 = VAR_0;
   break;
  }
 }

 if (VAR_4 && !(FUNC_0(VAR_2)->ml_priv == (void *)VAR_3))
  return 0;

 return VAR_4;
}
