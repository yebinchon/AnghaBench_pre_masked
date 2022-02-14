
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device_stats {int dummy; } ;
struct net_device {struct net_device_stats stats; struct airo_info* ml_priv; } ;
struct airo_info {int thr_wait; int jobs; int sem; } ;


 int VAR_0 ;
 int FUNC_0 (struct net_device*) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int ,int *) ;
 int FUNC_3 (int ,int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct net_device_stats *FUNC_5(struct net_device *VAR_1)
{
 struct airo_info *VAR_2 = VAR_1->ml_priv;

 if (!FUNC_3(VAR_0, &VAR_2->jobs)) {

  if (FUNC_1(&VAR_2->sem) != 0) {
   FUNC_2(VAR_0, &VAR_2->jobs);
   FUNC_4(&VAR_2->thr_wait);
  } else
   FUNC_0(VAR_1);
 }

 return &VAR_1->stats;
}
