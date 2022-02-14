
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct lock_class_key {int dummy; } ;
struct TYPE_4__ {int * ktype; void* kset; } ;
struct TYPE_3__ {TYPE_2__ kobj; } ;
struct class_private {TYPE_1__ class_subsys; struct class* class; int class_mutex; int class_dirs; int class_interfaces; int class_devices; } ;
struct class {struct class_private* p; scalar_t__ dev_kobj; int name; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,struct lock_class_key*) ;
 int FUNC_2 (int ) ;
 struct class VAR_2 ;
 int FUNC_3 (struct class*) ;
 void* VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct class*) ;
 int FUNC_5 (struct class_private*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_6 (int *,int ,int ) ;
 int FUNC_7 (TYPE_2__*,char*,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*) ;
 struct class_private* FUNC_10 (int,int ) ;
 int FUNC_11 (char*,int ) ;
 scalar_t__ VAR_7 ;

int FUNC_12(struct class *VAR_8, struct lock_class_key *VAR_9)
{
 struct class_private *VAR_10;
 int VAR_11;

 FUNC_11("device class '%s': registering\n", VAR_8->name);

 VAR_10 = FUNC_10(sizeof(*VAR_10), VAR_1);
 if (!VAR_10)
  return -VAR_0;
 FUNC_6(&VAR_10->class_devices, VAR_5, VAR_6);
 FUNC_0(&VAR_10->class_interfaces);
 FUNC_8(&VAR_10->class_dirs);
 FUNC_1(&VAR_10->class_mutex, "struct class mutex", VAR_9);
 VAR_11 = FUNC_7(&VAR_10->class_subsys.kobj, "%s", VAR_8->name);
 if (VAR_11) {
  FUNC_5(VAR_10);
  return VAR_11;
 }


 if (!VAR_8->dev_kobj)
  VAR_8->dev_kobj = VAR_7;






 VAR_10->class_subsys.kobj.kset = VAR_3;

 VAR_10->class_subsys.kobj.ktype = &VAR_4;
 VAR_10->class = VAR_8;
 VAR_8->p = VAR_10;

 VAR_11 = FUNC_9(&VAR_10->class_subsys);
 if (VAR_11) {
  FUNC_5(VAR_10);
  return VAR_11;
 }
 VAR_11 = FUNC_2(FUNC_3(VAR_8));
 FUNC_4(VAR_8);
 return VAR_11;
}
