
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct net_device {int dummy; } ;
struct hcp_ehea_port_cb1 {scalar_t__* vlan_filter; } ;
struct ehea_port {int logical_port_id; int vgrp; struct ehea_adapter* adapter; } ;
struct ehea_adapter {int handle; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (char*) ;
 scalar_t__ FUNC_1 (int ,int ,int ,int ,struct hcp_ehea_port_cb1*) ;
 scalar_t__ FUNC_2 (int ,int ,int ,int ,struct hcp_ehea_port_cb1*) ;
 int FUNC_3 (unsigned long) ;
 scalar_t__ FUNC_4 (int ) ;
 struct ehea_port* FUNC_5 (struct net_device*) ;
 int FUNC_6 (int ,unsigned short,int *) ;

__attribute__((used)) static void FUNC_7(struct net_device *VAR_4, unsigned short VAR_5)
{
 struct ehea_port *VAR_6 = FUNC_5(VAR_4);
 struct ehea_adapter *VAR_7 = VAR_6->adapter;
 struct hcp_ehea_port_cb1 *VAR_8;
 int VAR_9;
 u64 VAR_10;

 FUNC_6(VAR_6->vgrp, VAR_5, ((void*)0));

 VAR_8 = (void *)FUNC_4(VAR_0);
 if (!VAR_8) {
  FUNC_0("no mem for cb1");
  goto out;
 }

 VAR_10 = FUNC_2(VAR_7->handle, VAR_6->logical_port_id,
          VAR_1, VAR_2, VAR_8);
 if (VAR_10 != VAR_3) {
  FUNC_0("query_ehea_port failed");
  goto out;
 }

 VAR_9 = (VAR_5 / 64);
 VAR_8->vlan_filter[VAR_9] &= ~((u64)(0x8000000000000000 >> (VAR_5 & 0x3F)));

 VAR_10 = FUNC_1(VAR_7->handle, VAR_6->logical_port_id,
           VAR_1, VAR_2, VAR_8);
 if (VAR_10 != VAR_3)
  FUNC_0("modify_ehea_port failed");
out:
 FUNC_3((unsigned long)VAR_8);
 return;
}
