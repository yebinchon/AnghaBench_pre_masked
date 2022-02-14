
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct pci_slot {int kobj; } ;
struct pci_bus {TYPE_1__* self; } ;
struct hotplug_slot_info {int dummy; } ;
struct hotplug_slot {struct pci_slot* pci_slot; int (* release ) (struct hotplug_slot*) ;int * ops; void* info; } ;
struct TYPE_4__ {int attr; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,char*,...) ;
 void* FUNC_1 (int,int ) ;
 int FUNC_2 (struct hotplug_slot*) ;
 int FUNC_3 (struct hotplug_slot*,struct pci_bus*,int,char*) ;
 int VAR_4 ;
 struct hotplug_slot* FUNC_4 () ;
 scalar_t__ FUNC_5 (struct hotplug_slot*,struct pci_bus*,int,char*) ;
 int FUNC_6 (struct pci_bus*,int) ;
 int FUNC_7 (struct hotplug_slot*) ;
 TYPE_2__ VAR_5 ;
 int FUNC_8 (int *,int *) ;

__attribute__((used)) static int FUNC_9(struct pci_bus *VAR_6)
{
 int VAR_7;
 struct pci_slot *VAR_8;
 struct hotplug_slot *VAR_9;
 char VAR_10[VAR_3];
 int VAR_11 = 0;






 for (VAR_7 = 0; VAR_7 < VAR_2 ; VAR_7++) {
  if (FUNC_6(VAR_6, VAR_7) != 1)
   continue;

  VAR_9 = FUNC_1(sizeof(*VAR_9),
        VAR_1);
  if (!VAR_9) {
   VAR_11 = -VAR_0;
   goto alloc_err;
  }

  VAR_9->info =
   FUNC_1(sizeof(struct hotplug_slot_info),
    VAR_1);
  if (!VAR_9->info) {
   VAR_11 = -VAR_0;
   goto alloc_err;
  }

  if (FUNC_5(VAR_9,
          VAR_6, VAR_7, VAR_10)) {
   VAR_11 = -VAR_0;
   goto alloc_err;
  }
  VAR_9->ops = &VAR_4;
  VAR_9->release = &FUNC_7;

  VAR_11 = FUNC_3(VAR_9, VAR_6, VAR_7, VAR_10);
  if (VAR_11)
   goto register_err;

  VAR_8 = VAR_9->pci_slot;
  VAR_11 = FUNC_8(&VAR_8->kobj,
           &VAR_5.attr);
  if (VAR_11)
   goto register_err;
 }
 FUNC_0(&VAR_6->self->dev, "Registered bus with hotplug\n");
 return VAR_11;

register_err:
 FUNC_0(&VAR_6->self->dev, "bus failed to register with err = %d\n",
  VAR_11);

alloc_err:
 if (VAR_11 == -VAR_0)
  FUNC_0(&VAR_6->self->dev, "Memory allocation error\n");


 if (VAR_9)
  FUNC_7(VAR_9);


 while ((VAR_9 = FUNC_4()))
  FUNC_2(VAR_9);

 return VAR_11;
}
