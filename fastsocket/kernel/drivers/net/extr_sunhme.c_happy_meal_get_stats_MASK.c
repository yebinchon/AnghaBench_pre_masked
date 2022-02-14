
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int dummy; } ;
struct net_device {int dummy; } ;
struct happy_meal {struct net_device_stats net_stats; int happy_lock; int bigmacregs; } ;


 int FUNC_0 (struct happy_meal*,int ) ;
 struct happy_meal* FUNC_1 (struct net_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static struct net_device_stats *FUNC_4(struct net_device *VAR_0)
{
 struct happy_meal *VAR_1 = FUNC_1(VAR_0);

 FUNC_2(&VAR_1->happy_lock);
 FUNC_0(VAR_1, VAR_1->bigmacregs);
 FUNC_3(&VAR_1->happy_lock);

 return &VAR_1->net_stats;
}
