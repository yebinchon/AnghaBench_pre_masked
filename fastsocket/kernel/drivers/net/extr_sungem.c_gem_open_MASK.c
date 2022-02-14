
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct net_device {int dummy; } ;
struct gem {int opened; int pm_mutex; int asleep; } ;


 int FUNC_0 (struct net_device*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct gem* FUNC_3 (struct net_device*) ;

__attribute__((used)) static int FUNC_4(struct net_device *VAR_0)
{
 struct gem *VAR_1 = FUNC_3(VAR_0);
 int VAR_2 = 0;

 FUNC_1(&VAR_1->pm_mutex);


 if (!VAR_1->asleep)
  VAR_2 = FUNC_0(VAR_0);
 VAR_1->opened = (VAR_2 == 0);

 FUNC_2(&VAR_1->pm_mutex);

 return VAR_2;
}
