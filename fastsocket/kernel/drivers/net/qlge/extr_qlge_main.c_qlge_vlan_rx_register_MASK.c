
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_group {int dummy; } ;
struct ql_adapter {struct vlan_group* vlgrp; } ;
struct net_device {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct ql_adapter* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ql_adapter*,int ,int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_3, struct vlan_group *VAR_4)
{
 struct ql_adapter *VAR_5 = FUNC_0(VAR_3);

 VAR_5->vlgrp = VAR_4;
 if (VAR_4) {
  FUNC_1(VAR_5, VAR_0, VAR_1 |
      VAR_2);
 } else {
  FUNC_1(VAR_5, VAR_0, VAR_1);
 }
}
