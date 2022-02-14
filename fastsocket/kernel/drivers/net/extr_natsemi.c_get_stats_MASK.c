
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int dummy; } ;
struct netdev_private {struct net_device_stats stats; int lock; int hands_off; } ;
struct net_device {int dummy; } ;


 int FUNC_0 (struct net_device*) ;
 struct netdev_private* FUNC_1 (struct net_device*) ;
 scalar_t__ FUNC_2 (struct net_device*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct net_device_stats *FUNC_5(struct net_device *VAR_0)
{
 struct netdev_private *VAR_1 = FUNC_1(VAR_0);


 FUNC_3(&VAR_1->lock);
 if (FUNC_2(VAR_0) && !VAR_1->hands_off)
  FUNC_0(VAR_0);
 FUNC_4(&VAR_1->lock);

 return &VAR_1->stats;
}
