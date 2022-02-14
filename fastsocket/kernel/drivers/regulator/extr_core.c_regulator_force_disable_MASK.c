
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator {TYPE_1__* rdev; scalar_t__ uA_load; } ;
struct TYPE_2__ {int mutex; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

int FUNC_3(struct regulator *VAR_0)
{
 int VAR_1;

 FUNC_1(&VAR_0->rdev->mutex);
 VAR_0->uA_load = 0;
 VAR_1 = FUNC_0(VAR_0->rdev);
 FUNC_2(&VAR_0->rdev->mutex);
 return VAR_1;
}
