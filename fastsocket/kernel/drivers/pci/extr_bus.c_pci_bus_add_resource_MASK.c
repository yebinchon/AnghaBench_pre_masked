
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct resource {int dummy; } ;
struct pci_bus_resource {unsigned int flags; int list; struct resource* res; } ;
struct pci_bus {int resources; int dev; struct resource** resource; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,char*,struct resource*) ;
 struct pci_bus_resource* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;

void FUNC_3(struct pci_bus *VAR_3, struct resource *VAR_4,
     unsigned int VAR_5)
{
 struct pci_bus_resource *VAR_6;
 int VAR_7;

 for (VAR_7 = VAR_1; VAR_7 < VAR_2; VAR_7++)
  if (VAR_3->resource[VAR_7] == 0) {
   VAR_3->resource[VAR_7] = VAR_4;
   return;
  }

 VAR_6 = FUNC_1(sizeof(struct pci_bus_resource), VAR_0);
 if (!VAR_6) {
  FUNC_0(&VAR_3->dev, "can't add %pR resource\n", VAR_4);
  return;
 }

 VAR_6->res = VAR_4;
 VAR_6->flags = VAR_5;
 FUNC_2(&VAR_6->list, &VAR_3->resources);
}
