
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct class_attribute {int attr; } ;
struct class {TYPE_2__* p; } ;
struct TYPE_3__ {int kobj; } ;
struct TYPE_4__ {TYPE_1__ class_subsys; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;

int FUNC_1(struct class *VAR_1, const struct class_attribute *VAR_2)
{
 int VAR_3;
 if (VAR_1)
  VAR_3 = FUNC_0(&VAR_1->p->class_subsys.kobj,
       &VAR_2->attr);
 else
  VAR_3 = -VAR_0;
 return VAR_3;
}
