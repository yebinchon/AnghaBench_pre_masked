
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct device {TYPE_4__* bus; TYPE_3__* p; int kobj; } ;
struct TYPE_9__ {int name; TYPE_2__* p; } ;
struct TYPE_8__ {int knode_bus; } ;
struct TYPE_7__ {TYPE_1__* devices_kset; } ;
struct TYPE_6__ {int kobj; } ;


 int FUNC_0 (TYPE_4__*) ;
 char* FUNC_1 (struct device*) ;
 int FUNC_2 (struct device*) ;
 int FUNC_3 (TYPE_4__*,struct device*) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int *) ;
 int FUNC_6 (char*,int ,char*) ;
 int FUNC_7 (struct device*) ;
 int FUNC_8 (int *,char*) ;

void FUNC_9(struct device *VAR_0)
{
 if (VAR_0->bus) {
  FUNC_8(&VAR_0->kobj, "subsystem");
  FUNC_7(VAR_0);
  FUNC_8(&VAR_0->bus->p->devices_kset->kobj,
      FUNC_1(VAR_0));
  FUNC_3(VAR_0->bus, VAR_0);
  if (FUNC_5(&VAR_0->p->knode_bus))
   FUNC_4(&VAR_0->p->knode_bus);

  FUNC_6("bus: '%s': remove device %s\n",
    VAR_0->bus->name, FUNC_1(VAR_0));
  FUNC_2(VAR_0);
  FUNC_0(VAR_0->bus);
 }
}
