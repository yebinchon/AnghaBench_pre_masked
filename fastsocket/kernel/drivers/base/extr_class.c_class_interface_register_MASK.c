
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct device {int dummy; } ;
struct class_interface {int (* add_dev ) (struct device*,struct class_interface*) ;int node; int class; } ;
struct class_dev_iter {int dummy; } ;
struct class {TYPE_1__* p; } ;
struct TYPE_2__ {int class_mutex; int class_interfaces; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct class_dev_iter*) ;
 int FUNC_1 (struct class_dev_iter*,struct class*,int *,int *) ;
 struct device* FUNC_2 (struct class_dev_iter*) ;
 struct class* FUNC_3 (int ) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct device*,struct class_interface*) ;

int FUNC_8(struct class_interface *VAR_2)
{
 struct class *VAR_3;
 struct class_dev_iter VAR_4;
 struct device *VAR_5;

 if (!VAR_2 || !VAR_2->class)
  return -VAR_1;

 VAR_3 = FUNC_3(VAR_2->class);
 if (!VAR_3)
  return -VAR_0;

 FUNC_5(&VAR_3->p->class_mutex);
 FUNC_4(&VAR_2->node, &VAR_3->p->class_interfaces);
 if (VAR_2->add_dev) {
  FUNC_1(&VAR_4, VAR_3, ((void*)0), ((void*)0));
  while ((VAR_5 = FUNC_2(&VAR_4)))
   VAR_2->add_dev(VAR_5, VAR_2);
  FUNC_0(&VAR_4);
 }
 FUNC_6(&VAR_3->p->class_mutex);

 return 0;
}
