
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {scalar_t__ parent; } ;
struct pci_bus {int is_added; TYPE_1__ dev; scalar_t__ bridge; } ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct pci_bus*) ;

int FUNC_2(struct pci_bus *VAR_0)
{
 int VAR_1;

 if (VAR_0->bridge)
  VAR_0->dev.parent = VAR_0->bridge;

 VAR_1 = FUNC_0(&VAR_0->dev);
 if (VAR_1)
  return VAR_1;

 VAR_0->is_added = 1;


 FUNC_1(VAR_0);

 return VAR_1;
}
