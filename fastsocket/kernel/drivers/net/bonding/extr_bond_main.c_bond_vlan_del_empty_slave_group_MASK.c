
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vlan_group {int rcu; int hlist; scalar_t__ nr_vlans; } ;
struct net_device_ops {int (* ndo_vlan_rx_register ) (struct net_device*,int *) ;} ;
struct net_device {int features; struct net_device_ops* netdev_ops; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*,int *) ;
 struct vlan_group* FUNC_3 (struct net_device*) ;
 int FUNC_4 (struct net_device*) ;

__attribute__((used)) static void FUNC_5(struct net_device *VAR_2)
{
 const struct net_device_ops *VAR_3 = VAR_2->netdev_ops;
 struct vlan_group *VAR_4;

 VAR_4 = FUNC_3(VAR_2);
 if (!VAR_4 || VAR_4->nr_vlans)
  return;

 FUNC_4(VAR_2);

 if ((VAR_2->features & VAR_0) &&
     VAR_3->ndo_vlan_rx_register)
  VAR_3->ndo_vlan_rx_register(VAR_2, ((void*)0));

 FUNC_1(&VAR_4->hlist);

 FUNC_0(&VAR_4->rcu, VAR_1);
}
