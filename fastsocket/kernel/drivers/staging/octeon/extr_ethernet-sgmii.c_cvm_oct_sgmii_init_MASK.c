
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct octeon_ethernet {int poll; } ;
struct net_device {TYPE_1__* netdev_ops; } ;
struct TYPE_2__ {int (* ndo_stop ) (struct net_device*) ;} ;


 int FUNC_0 (struct net_device*) ;
 int VAR_0 ;
 struct octeon_ethernet* FUNC_1 (struct net_device*) ;
 int FUNC_2 () ;
 int FUNC_3 (struct net_device*) ;

int FUNC_4(struct net_device *VAR_1)
{
 struct octeon_ethernet *VAR_2 = FUNC_1(VAR_1);
 FUNC_0(VAR_1);
 VAR_1->netdev_ops->ndo_stop(VAR_1);
 if (!FUNC_2())
  VAR_2->poll = VAR_0;


 return 0;
}
