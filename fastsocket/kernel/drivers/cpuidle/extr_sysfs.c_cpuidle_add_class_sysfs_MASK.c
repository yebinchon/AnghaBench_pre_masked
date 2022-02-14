
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int kobj; } ;
struct sysdev_class {TYPE_1__ kset; } ;
struct TYPE_5__ {int attrs; } ;


 TYPE_2__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,TYPE_2__*) ;
 scalar_t__ VAR_2 ;

int FUNC_1(struct sysdev_class *VAR_3)
{
 if (VAR_2)
  VAR_0.attrs = VAR_1;

 return FUNC_0(&VAR_3->kset.kobj, &VAR_0);
}
