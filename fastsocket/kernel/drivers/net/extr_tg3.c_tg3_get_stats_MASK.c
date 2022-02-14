
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int dummy; } ;
struct tg3 {int lock; struct net_device_stats net_stats_prev; int hw_stats; struct net_device_stats net_stats; } ;
struct net_device {int dummy; } ;


 struct tg3* FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct tg3*) ;

__attribute__((used)) static struct net_device_stats *FUNC_4(struct net_device *VAR_0)
{
 struct tg3 *VAR_1 = FUNC_0(VAR_0);
 struct net_device_stats *VAR_2 = &VAR_1->net_stats;

 FUNC_1(&VAR_1->lock);
 if (!VAR_1->hw_stats) {
  FUNC_2(&VAR_1->lock);
  return &VAR_1->net_stats_prev;
 }

 FUNC_3(VAR_1);
 FUNC_2(&VAR_1->lock);

 return VAR_2;
}
