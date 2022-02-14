
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct class {TYPE_1__* p; int name; } ;
struct TYPE_2__ {int class_subsys; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (struct class*) ;

void FUNC_3(struct class *VAR_0)
{
 FUNC_1("device class '%s': unregistering\n", VAR_0->name);
 FUNC_2(VAR_0);
 FUNC_0(&VAR_0->p->class_subsys);
}
