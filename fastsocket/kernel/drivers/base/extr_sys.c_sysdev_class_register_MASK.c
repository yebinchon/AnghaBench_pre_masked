
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {TYPE_1__* kset; int * ktype; int * parent; } ;
struct TYPE_7__ {TYPE_2__ kobj; } ;
struct sysdev_class {TYPE_3__ kset; int name; int drivers; } ;
struct kobject {int dummy; } ;
struct TYPE_5__ {int kobj; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_2__*,char*,int ) ;
 int FUNC_2 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_2__*,int,int) ;
 int FUNC_4 (char*,int ) ;
 TYPE_1__* VAR_1 ;

int FUNC_5(struct sysdev_class *VAR_2)
{
 int VAR_3;

 FUNC_4("Registering sysdev class '%s'\n", VAR_2->name);

 FUNC_0(&VAR_2->drivers);
 FUNC_3(&VAR_2->kset.kobj, 0x00, sizeof(struct kobject));
 VAR_2->kset.kobj.parent = &VAR_1->kobj;
 VAR_2->kset.kobj.ktype = &VAR_0;
 VAR_2->kset.kobj.kset = VAR_1;

 VAR_3 = FUNC_1(&VAR_2->kset.kobj, "%s", VAR_2->name);
 if (VAR_3)
  return VAR_3;

 return FUNC_2(&VAR_2->kset);
}
