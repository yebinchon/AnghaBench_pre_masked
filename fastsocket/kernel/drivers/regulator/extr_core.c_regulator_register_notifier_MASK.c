
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct regulator {TYPE_1__* rdev; } ;
struct notifier_block {int dummy; } ;
struct TYPE_2__ {int notifier; } ;


 int FUNC_0 (int *,struct notifier_block*) ;

int FUNC_1(struct regulator *VAR_0,
         struct notifier_block *VAR_1)
{
 return FUNC_0(&VAR_0->rdev->notifier,
      VAR_1);
}
