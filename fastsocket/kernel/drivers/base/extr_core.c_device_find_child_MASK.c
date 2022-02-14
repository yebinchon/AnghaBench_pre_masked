
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct klist_iter {int dummy; } ;
struct device {TYPE_1__* p; } ;
struct TYPE_2__ {int klist_children; } ;


 scalar_t__ FUNC_0 (struct device*) ;
 int FUNC_1 (struct klist_iter*) ;
 int FUNC_2 (int *,struct klist_iter*) ;
 struct device* FUNC_3 (struct klist_iter*) ;

struct device *FUNC_4(struct device *VAR_0, void *VAR_1,
     int (*VAR_2)(struct device *VAR_3, void *VAR_4))
{
 struct klist_iter VAR_5;
 struct device *VAR_6;

 if (!VAR_0)
  return ((void*)0);

 FUNC_2(&VAR_0->p->klist_children, &VAR_5);
 while ((VAR_6 = FUNC_3(&VAR_5)))
  if (VAR_2(VAR_6, VAR_1) && FUNC_0(VAR_6))
   break;
 FUNC_1(&VAR_5);
 return VAR_6;
}
