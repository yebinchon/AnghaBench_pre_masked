
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct klist_iter {int dummy; } ;
struct device {TYPE_2__* p; } ;
struct bus_type {TYPE_1__* p; } ;
struct TYPE_4__ {int knode_bus; } ;
struct TYPE_3__ {int klist_devices; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct klist_iter*) ;
 int FUNC_2 (int *,struct klist_iter*,int *) ;
 struct device* FUNC_3 (struct klist_iter*) ;

struct device *FUNC_4(struct bus_type *VAR_0,
          struct device *VAR_1, void *VAR_2,
          int (*VAR_3)(struct device *VAR_4, void *VAR_5))
{
 struct klist_iter VAR_6;
 struct device *VAR_7;

 if (!VAR_0)
  return ((void*)0);

 FUNC_2(&VAR_0->p->klist_devices, &VAR_6,
        (VAR_1 ? &VAR_1->p->knode_bus : ((void*)0)));
 while ((VAR_7 = FUNC_3(&VAR_6)))
  if (VAR_3(VAR_7, VAR_2) && FUNC_0(VAR_7))
   break;
 FUNC_1(&VAR_6);
 return VAR_7;
}
