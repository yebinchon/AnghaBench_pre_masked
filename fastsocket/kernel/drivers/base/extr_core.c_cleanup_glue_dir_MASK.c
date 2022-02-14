
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct kobject {int * kset; } ;
struct device {TYPE_2__* class; } ;
struct TYPE_4__ {TYPE_1__* p; } ;
struct TYPE_3__ {int class_dirs; } ;


 int FUNC_0 (struct kobject*) ;

__attribute__((used)) static void FUNC_1(struct device *VAR_0, struct kobject *VAR_1)
{

 if (!VAR_1 || !VAR_0->class ||
     VAR_1->kset != &VAR_0->class->p->class_dirs)
  return;

 FUNC_0(VAR_1);
}
