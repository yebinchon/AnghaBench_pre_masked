
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct bus_type {TYPE_2__* p; } ;
struct bus_attribute {int attr; } ;
struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ subsys; } ;


 scalar_t__ FUNC_0 (struct bus_type*) ;
 int FUNC_1 (struct bus_type*) ;
 int FUNC_2 (int *,int *) ;

void FUNC_3(struct bus_type *VAR_0, struct bus_attribute *VAR_1)
{
 if (FUNC_0(VAR_0)) {
  FUNC_2(&VAR_0->p->subsys.kobj, &VAR_1->attr);
  FUNC_1(VAR_0);
 }
}
