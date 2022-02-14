
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_group {int dummy; } ;
struct qeth_card {struct vlan_group* vlangrp; } ;
struct net_device {int flags; } ;
struct in_device {int mc_list_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int,char*) ;
 int VAR_2 ;
 int VAR_3 ;
 struct in_device* FUNC_1 (struct net_device*) ;
 int FUNC_2 (struct in_device*) ;
 int FUNC_3 (struct qeth_card*,int ) ;
 int FUNC_4 (struct qeth_card*,struct in_device*) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 struct net_device* FUNC_7 (struct vlan_group*,int) ;

__attribute__((used)) static void FUNC_8(struct qeth_card *VAR_4)
{
 struct in_device *VAR_5;
 struct vlan_group *VAR_6;
 int VAR_7;

 FUNC_0(VAR_2, 4, "addmcvl");
 if (!FUNC_3(VAR_4, VAR_1) || (VAR_4->vlangrp == ((void*)0)))
  return;

 VAR_6 = VAR_4->vlangrp;
 for (VAR_7 = 0; VAR_7 < VAR_3; VAR_7++) {
  struct net_device *VAR_8 = FUNC_7(VAR_6, VAR_7);
  if (VAR_8 == ((void*)0) ||
      !(VAR_8->flags & VAR_0))
   continue;
  VAR_5 = FUNC_1(VAR_8);
  if (!VAR_5)
   continue;
  FUNC_5(&VAR_5->mc_list_lock);
  FUNC_4(VAR_4, VAR_5);
  FUNC_6(&VAR_5->mc_list_lock);
  FUNC_2(VAR_5);
 }
}
