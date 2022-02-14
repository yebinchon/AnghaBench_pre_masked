
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int * ktype; int kset; } ;
struct TYPE_5__ {TYPE_3__ kobj; } ;
struct bus_type_private {int drivers_autoprobe; TYPE_1__ subsys; TYPE_1__* devices_kset; TYPE_1__* drivers_kset; int klist_drivers; int klist_devices; int bus_notifier; struct bus_type* bus; } ;
struct bus_type {struct bus_type_private* p; int name; } ;


 int FUNC_0 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct bus_type*) ;
 int FUNC_2 (struct bus_type*) ;
 int VAR_2 ;
 int FUNC_3 (struct bus_type*,int *) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct bus_type*,int *) ;
 int FUNC_5 (struct bus_type_private*) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int FUNC_6 (int *,int *,int *) ;
 int FUNC_7 (TYPE_3__*,char*,int ) ;
 void* FUNC_8 (char*,int *,TYPE_3__*) ;
 int FUNC_9 (TYPE_1__*) ;
 int FUNC_10 (TYPE_1__*) ;
 struct bus_type_private* FUNC_11 (int,int ) ;
 int FUNC_12 (char*,int ) ;
 int FUNC_13 (struct bus_type*) ;

int FUNC_14(struct bus_type *VAR_7)
{
 int VAR_8;
 struct bus_type_private *VAR_9;

 VAR_9 = FUNC_11(sizeof(struct bus_type_private), VAR_1);
 if (!VAR_9)
  return -VAR_0;

 VAR_9->bus = VAR_7;
 VAR_7->p = VAR_9;

 FUNC_0(&VAR_9->bus_notifier);

 VAR_8 = FUNC_7(&VAR_9->subsys.kobj, "%s", VAR_7->name);
 if (VAR_8)
  goto out;

 VAR_9->subsys.kobj.kset = VAR_3;
 VAR_9->subsys.kobj.ktype = &VAR_4;
 VAR_9->drivers_autoprobe = 1;

 VAR_8 = FUNC_9(&VAR_9->subsys);
 if (VAR_8)
  goto out;

 VAR_8 = FUNC_3(VAR_7, &VAR_2);
 if (VAR_8)
  goto bus_uevent_fail;

 VAR_9->devices_kset = FUNC_8("devices", ((void*)0),
       &VAR_9->subsys.kobj);
 if (!VAR_9->devices_kset) {
  VAR_8 = -VAR_0;
  goto bus_devices_fail;
 }

 VAR_9->drivers_kset = FUNC_8("drivers", ((void*)0),
       &VAR_9->subsys.kobj);
 if (!VAR_9->drivers_kset) {
  VAR_8 = -VAR_0;
  goto bus_drivers_fail;
 }

 FUNC_6(&VAR_9->klist_devices, VAR_5, VAR_6);
 FUNC_6(&VAR_9->klist_drivers, ((void*)0), ((void*)0));

 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8)
  goto bus_probe_files_fail;

 VAR_8 = FUNC_2(VAR_7);
 if (VAR_8)
  goto bus_attrs_fail;

 FUNC_12("bus: '%s': registered\n", VAR_7->name);
 return 0;

bus_attrs_fail:
 FUNC_13(VAR_7);
bus_probe_files_fail:
 FUNC_10(VAR_7->p->drivers_kset);
bus_drivers_fail:
 FUNC_10(VAR_7->p->devices_kset);
bus_devices_fail:
 FUNC_4(VAR_7, &VAR_2);
bus_uevent_fail:
 FUNC_10(&VAR_7->p->subsys);
 FUNC_5(VAR_7->p);
out:
 VAR_7->p = ((void*)0);
 return VAR_8;
}
