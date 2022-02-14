
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int refcount; } ;
struct TYPE_6__ {TYPE_2__ kref; } ;
struct pci_slot {TYPE_3__ kobj; int number; TYPE_1__* bus; } ;
struct TYPE_4__ {int dev; } ;


 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,char*,int ,scalar_t__) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_4 (int *) ;

void FUNC_5(struct pci_slot *VAR_1)
{
 FUNC_1(&VAR_1->bus->dev, "dev %02x, dec refcount to %d\n",
  VAR_1->number, FUNC_0(&VAR_1->kobj.kref.refcount) - 1);

 FUNC_2(&VAR_0);
 FUNC_3(&VAR_1->kobj);
 FUNC_4(&VAR_0);
}
