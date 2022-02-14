
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct notifier_block {int dummy; } ;
struct bus_type {TYPE_1__* p; } ;
struct TYPE_2__ {int bus_notifier; } ;


 int FUNC_0 (int *,struct notifier_block*) ;

int FUNC_1(struct bus_type *VAR_0, struct notifier_block *VAR_1)
{
 return FUNC_0(&VAR_0->p->bus_notifier, VAR_1);
}
