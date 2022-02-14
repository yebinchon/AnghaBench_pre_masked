
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sysdev_class_attribute {int attr; } ;
struct TYPE_2__ {int kobj; } ;
struct sysdev_class {TYPE_1__ kset; } ;


 int FUNC_0 (int *,int *) ;

void FUNC_1(struct sysdev_class *VAR_0,
         struct sysdev_class_attribute *VAR_1)
{
 FUNC_0(&VAR_0->kset.kobj, &VAR_1->attr);
}
