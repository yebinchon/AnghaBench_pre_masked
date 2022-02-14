
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct klist_iter {int dummy; } ;
struct device {TYPE_1__* p; } ;
struct TYPE_2__ {int klist_children; } ;


 int FUNC_0 (struct klist_iter*) ;
 int FUNC_1 (int *,struct klist_iter*) ;
 struct device* FUNC_2 (struct klist_iter*) ;

int FUNC_3(struct device *VAR_0, void *VAR_1,
     int (*VAR_2)(struct device *VAR_3, void *VAR_4))
{
 struct klist_iter VAR_5;
 struct device *VAR_6;
 int VAR_7 = 0;

 if (!VAR_0->p)
  return 0;

 FUNC_1(&VAR_0->p->klist_children, &VAR_5);
 while ((VAR_6 = FUNC_2(&VAR_5)) && !VAR_7)
  VAR_7 = VAR_2(VAR_6, VAR_1);
 FUNC_0(&VAR_5);
 return VAR_7;
}
