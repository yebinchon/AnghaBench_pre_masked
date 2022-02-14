
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct gem {int pm_mutex; int asleep; scalar_t__ opened; int napi; } ;


 int FUNC_0 (struct net_device*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 struct gem* FUNC_4 (struct net_device*) ;

__attribute__((used)) static int FUNC_5(struct net_device *VAR_0)
{
 struct gem *VAR_1 = FUNC_4(VAR_0);

 FUNC_1(&VAR_1->pm_mutex);

 FUNC_3(&VAR_1->napi);

 VAR_1->opened = 0;
 if (!VAR_1->asleep)
  FUNC_0(VAR_0, 0);

 FUNC_2(&VAR_1->pm_mutex);

 return 0;
}
