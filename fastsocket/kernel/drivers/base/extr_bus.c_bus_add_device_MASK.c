
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct device {TYPE_6__* bus; int kobj; TYPE_3__* p; } ;
struct bus_type {TYPE_5__* p; int name; } ;
struct TYPE_13__ {TYPE_2__* p; } ;
struct TYPE_12__ {TYPE_4__* devices_kset; int klist_devices; } ;
struct TYPE_11__ {int kobj; } ;
struct TYPE_10__ {int knode_bus; } ;
struct TYPE_8__ {int kobj; } ;
struct TYPE_9__ {TYPE_1__ subsys; } ;


 struct bus_type* FUNC_0 (TYPE_6__*) ;
 int FUNC_1 (TYPE_6__*) ;
 char* FUNC_2 (struct device*) ;
 int FUNC_3 (struct bus_type*,struct device*) ;
 int FUNC_4 (struct bus_type*,struct device*) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (struct device*) ;
 int FUNC_7 (char*,int ,char*) ;
 int FUNC_8 (int *,int *,char*) ;
 int FUNC_9 (int *,char*) ;

int FUNC_10(struct device *VAR_0)
{
 struct bus_type *VAR_1 = FUNC_0(VAR_0->bus);
 int VAR_2 = 0;

 if (VAR_1) {
  FUNC_7("bus: '%s': add device %s\n", VAR_1->name, FUNC_2(VAR_0));
  VAR_2 = FUNC_3(VAR_1, VAR_0);
  if (VAR_2)
   goto out_put;
  VAR_2 = FUNC_8(&VAR_1->p->devices_kset->kobj,
      &VAR_0->kobj, FUNC_2(VAR_0));
  if (VAR_2)
   goto out_id;
  VAR_2 = FUNC_8(&VAR_0->kobj,
    &VAR_0->bus->p->subsys.kobj, "subsystem");
  if (VAR_2)
   goto out_subsys;
  VAR_2 = FUNC_6(VAR_0);
  if (VAR_2)
   goto out_deprecated;
  FUNC_5(&VAR_0->p->knode_bus, &VAR_1->p->klist_devices);
 }
 return 0;

out_deprecated:
 FUNC_9(&VAR_0->kobj, "subsystem");
out_subsys:
 FUNC_9(&VAR_1->p->devices_kset->kobj, FUNC_2(VAR_0));
out_id:
 FUNC_4(VAR_1, VAR_0);
out_put:
 FUNC_1(VAR_0->bus);
 return VAR_2;
}
