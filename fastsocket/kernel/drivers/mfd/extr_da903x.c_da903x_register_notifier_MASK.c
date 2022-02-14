
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct device {int dummy; } ;
struct da903x_chip {int notifier_list; TYPE_1__* ops; } ;
struct TYPE_2__ {int (* unmask_events ) (struct da903x_chip*,unsigned int) ;} ;


 int FUNC_0 (int *,struct notifier_block*) ;
 struct da903x_chip* FUNC_1 (struct device*) ;
 int FUNC_2 (struct da903x_chip*,unsigned int) ;

int FUNC_3(struct device *VAR_0, struct notifier_block *VAR_1,
    unsigned int VAR_2)
{
 struct da903x_chip *VAR_3 = FUNC_1(VAR_0);

 VAR_3->ops->unmask_events(VAR_3, VAR_2);
 return FUNC_0(&VAR_3->notifier_list, VAR_1);
}
