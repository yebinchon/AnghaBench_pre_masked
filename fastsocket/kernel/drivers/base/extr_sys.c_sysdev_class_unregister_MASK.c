
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int kobj; } ;
struct sysdev_class {TYPE_1__ kset; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (char*,int ) ;

void FUNC_3(struct sysdev_class *VAR_0)
{
 FUNC_2("Unregistering sysdev class '%s'\n",
   FUNC_0(&VAR_0->kset.kobj));
 FUNC_1(&VAR_0->kset);
}
