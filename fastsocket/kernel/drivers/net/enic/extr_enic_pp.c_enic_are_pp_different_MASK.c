
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct enic_port_profile {int mac_addr; int host_uuid; int instance_uuid; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ) ;

__attribute__((used)) static int FUNC_2(struct enic_port_profile *VAR_2,
  struct enic_port_profile *VAR_3)
{
 return FUNC_1(VAR_2->name, VAR_3->name) | !!FUNC_0(VAR_2->instance_uuid,
  VAR_3->instance_uuid, VAR_1) |
  !!FUNC_0(VAR_2->host_uuid, VAR_3->host_uuid, VAR_1) |
  !!FUNC_0(VAR_2->mac_addr, VAR_3->mac_addr, VAR_0);
}
