
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct class_interface {int (* remove_dev ) (struct device*,struct class_interface*) ;int node; struct class* class; } ;
struct class_dev_iter {int dummy; } ;
struct class {TYPE_1__* p; } ;
struct TYPE_2__ {int class_mutex; } ;


 int FUNC_0 (struct class_dev_iter*) ;
 int FUNC_1 (struct class_dev_iter*,struct class*,int *,int *) ;
 struct device* FUNC_2 (struct class_dev_iter*) ;
 int FUNC_3 (struct class*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct device*,struct class_interface*) ;

void FUNC_8(struct class_interface *VAR_0)
{
 struct class *VAR_1 = VAR_0->class;
 struct class_dev_iter VAR_2;
 struct device *VAR_3;

 if (!VAR_1)
  return;

 FUNC_5(&VAR_1->p->class_mutex);
 FUNC_4(&VAR_0->node);
 if (VAR_0->remove_dev) {
  FUNC_1(&VAR_2, VAR_1, ((void*)0), ((void*)0));
  while ((VAR_3 = FUNC_2(&VAR_2)))
   VAR_0->remove_dev(VAR_3, VAR_0);
  FUNC_0(&VAR_2);
 }
 FUNC_6(&VAR_1->p->class_mutex);

 FUNC_3(VAR_1);
}
