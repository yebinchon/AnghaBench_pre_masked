
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct vlan_group {int dummy; } ;
struct net_device {int dummy; } ;
struct hcp_ehea_port_cb1 {int dummy; } ;
struct ehea_port {int logical_port_id; struct vlan_group* vgrp; struct ehea_adapter* adapter; } ;
struct ehea_adapter {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,struct hcp_ehea_port_cb1*) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;
 struct ehea_port* FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_4,
    struct vlan_group *VAR_5)
{
 struct ehea_port *VAR_6 = FUNC_4(VAR_4);
 struct ehea_adapter *VAR_7 = VAR_6->adapter;
 struct hcp_ehea_port_cb1 *VAR_8;
 u64 VAR_9;

 VAR_6->vgrp = VAR_5;

 VAR_8 = (void *)FUNC_3(VAR_0);
 if (!VAR_8) {
  FUNC_0("no mem for cb1");
  goto out;
 }

 VAR_9 = FUNC_1(VAR_7->handle, VAR_6->logical_port_id,
           VAR_1, VAR_2, VAR_8);
 if (VAR_9 != VAR_3)
  FUNC_0("modify_ehea_port failed");

 FUNC_2((unsigned long)VAR_8);
out:
 return;
}
