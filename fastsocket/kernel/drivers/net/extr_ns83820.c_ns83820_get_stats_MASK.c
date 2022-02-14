
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int dummy; } ;
struct ns83820 {struct net_device_stats stats; int misc_lock; } ;
struct net_device {int dummy; } ;


 struct ns83820* FUNC_0 (struct net_device*) ;
 int FUNC_1 (struct ns83820*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct net_device_stats *FUNC_4(struct net_device *VAR_0)
{
 struct ns83820 *VAR_1 = FUNC_0(VAR_0);


 FUNC_2(&VAR_1->misc_lock);
 FUNC_1(VAR_1);
 FUNC_3(&VAR_1->misc_lock);

 return &VAR_1->stats;
}
