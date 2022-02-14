
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vlan_group {int dummy; } ;
struct port_info {int viid; TYPE_1__* adapter; struct vlan_group* vlan_grp; } ;
struct net_device {int dummy; } ;
struct TYPE_2__ {int fn; } ;


 struct port_info* FUNC_0 (struct net_device*) ;
 int FUNC_1 (TYPE_1__*,int ,int ,int,int,int,int,int ,int) ;

__attribute__((used)) static void FUNC_2(struct net_device *VAR_0, struct vlan_group *VAR_1)
{
 struct port_info *VAR_2 = FUNC_0(VAR_0);

 VAR_2->vlan_grp = VAR_1;
 FUNC_1(VAR_2->adapter, VAR_2->adapter->fn, VAR_2->viid, -1, -1, -1, -1,
        VAR_1 != ((void*)0), 1);
}
