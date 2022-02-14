
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {TYPE_2__* netdev_ops; int features; } ;
struct TYPE_3__ {int refcnt; } ;
struct ixgbe_adapter {int flags; TYPE_1__ fcoe; } ;
struct TYPE_4__ {int (* ndo_open ) (struct net_device*) ;int (* ndo_stop ) (struct net_device*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (struct ixgbe_adapter*) ;
 int FUNC_3 (struct ixgbe_adapter*) ;
 int FUNC_4 (struct ixgbe_adapter*) ;
 int FUNC_5 (struct net_device*) ;
 struct ixgbe_adapter* FUNC_6 (struct net_device*) ;
 scalar_t__ FUNC_7 (struct net_device*) ;
 int FUNC_8 (struct net_device*) ;
 int FUNC_9 (struct net_device*) ;

int FUNC_10(struct net_device *VAR_4)
{
 struct ixgbe_adapter *VAR_5 = FUNC_6(VAR_4);

 if (!FUNC_0(&VAR_5->fcoe.refcnt))
  return -VAR_0;

 if (!(VAR_5->flags & VAR_1))
  return -VAR_0;

 FUNC_1(VAR_3, "Disabling FCoE offload features.\n");
 if (FUNC_7(VAR_4))
  VAR_4->netdev_ops->ndo_stop(VAR_4);


 FUNC_3(VAR_5);


 VAR_5->flags &= ~VAR_1;
 VAR_4->features &= ~VAR_2;

 FUNC_5(VAR_4);


 FUNC_2(VAR_5);
 FUNC_4(VAR_5);

 if (FUNC_7(VAR_4))
  VAR_4->netdev_ops->ndo_open(VAR_4);

 return 0;
}
