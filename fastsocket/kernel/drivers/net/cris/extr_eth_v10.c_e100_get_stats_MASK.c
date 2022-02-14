
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int dummy; } ;
struct net_local {struct net_device_stats stats; int lock; } ;
struct net_device {int dummy; } ;


 struct net_local* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (struct net_device_stats*) ;
 int FUNC_4 (struct net_device_stats*) ;

__attribute__((used)) static struct net_device_stats *
FUNC_5(struct net_device *VAR_0)
{
 struct net_local *VAR_1 = FUNC_0(VAR_0);
 unsigned long VAR_2;

 FUNC_1(&VAR_1->lock, VAR_2);

 FUNC_3(&VAR_1->stats);
 FUNC_4(&VAR_1->stats);

 FUNC_2(&VAR_1->lock, VAR_2);
 return &VAR_1->stats;
}
