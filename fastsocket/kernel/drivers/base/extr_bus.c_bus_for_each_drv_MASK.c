
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct klist_iter {int dummy; } ;
struct device_driver {TYPE_2__* p; } ;
struct bus_type {TYPE_1__* p; } ;
struct TYPE_4__ {int knode_bus; } ;
struct TYPE_3__ {int klist_drivers; } ;


 int VAR_0 ;
 int FUNC_0 (struct klist_iter*) ;
 int FUNC_1 (int *,struct klist_iter*,int *) ;
 struct device_driver* FUNC_2 (struct klist_iter*) ;

int FUNC_3(struct bus_type *VAR_1, struct device_driver *VAR_2,
       void *VAR_3, int (*VAR_4)(struct device_driver *, void *))
{
 struct klist_iter VAR_5;
 struct device_driver *VAR_6;
 int VAR_7 = 0;

 if (!VAR_1)
  return -VAR_0;

 FUNC_1(&VAR_1->p->klist_drivers, &VAR_5,
        VAR_2 ? &VAR_2->p->knode_bus : ((void*)0));
 while ((VAR_6 = FUNC_2(&VAR_5)) && !VAR_7)
  VAR_7 = VAR_4(VAR_6, VAR_3);
 FUNC_0(&VAR_5);
 return VAR_7;
}
