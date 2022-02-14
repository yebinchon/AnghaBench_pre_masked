
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_group {int dummy; } ;
struct net_device {int dummy; } ;
struct bnx2x {scalar_t__ state; struct vlan_group* vlgrp; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (struct bnx2x*,int) ;
 int FUNC_1 (struct net_device*,char*,char*) ;
 struct bnx2x* FUNC_2 (struct net_device*) ;

void FUNC_3(struct net_device *VAR_1, struct vlan_group *VAR_2)
{
 struct bnx2x *VAR_3 = FUNC_2(VAR_1);
 int VAR_4 = 0;






 if (VAR_3->state == VAR_0) {
  bool VAR_5 = (VAR_2 != ((void*)0));
  VAR_4 = FUNC_0(VAR_3, VAR_5);
  if (VAR_4) {
   FUNC_1(VAR_1, "Failed to %s HW VLAN stripping\n",
              VAR_5 ? "set" : "clear");
   if (VAR_5)
    FUNC_0(VAR_3, 0);
  }
 }







 VAR_3->vlgrp = VAR_4 ? ((void*)0) : VAR_2;
}
