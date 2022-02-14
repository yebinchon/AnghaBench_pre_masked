
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct slave {TYPE_1__* dev; } ;
struct net_device_ops {int (* ndo_neigh_setup ) (TYPE_1__*,struct neigh_parms*) ;} ;
struct net_device {int dummy; } ;
struct neigh_parms {int dummy; } ;
struct bonding {struct slave* first_slave; } ;
struct TYPE_2__ {struct net_device_ops* netdev_ops; } ;


 struct bonding* FUNC_0 (struct net_device*) ;
 int FUNC_1 (TYPE_1__*,struct neigh_parms*) ;

__attribute__((used)) static int FUNC_2(struct net_device *VAR_0, struct neigh_parms *VAR_1)
{
 struct bonding *VAR_2 = FUNC_0(VAR_0);
 struct slave *VAR_3 = VAR_2->first_slave;

 if (VAR_3) {
  const struct net_device_ops *VAR_4
   = VAR_3->dev->netdev_ops;
  if (VAR_4->ndo_neigh_setup)
   return VAR_4->ndo_neigh_setup(VAR_3->dev, VAR_1);
 }
 return 0;
}
