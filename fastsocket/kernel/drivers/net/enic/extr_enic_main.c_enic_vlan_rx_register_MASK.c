
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_group {int dummy; } ;
struct net_device {int dummy; } ;
struct enic {struct vlan_group* vlan_group; } ;


 struct enic* FUNC_0 (struct net_device*) ;

__attribute__((used)) static void FUNC_1(struct net_device *VAR_0,
 struct vlan_group *VAR_1)
{
 struct enic *VAR_2 = FUNC_0(VAR_0);
 VAR_2->vlan_group = VAR_1;
}
