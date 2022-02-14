
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_controller {int dn; } ;
struct pci_bus {TYPE_1__* self; struct pci_bus* parent; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int devfn; } ;


 struct device_node* FUNC_0 (int ) ;
 int FUNC_1 (struct device_node*) ;
 struct pci_controller* FUNC_2 (struct pci_bus*) ;
 struct device_node* FUNC_3 (struct device_node*,int ) ;

__attribute__((used)) static struct device_node *FUNC_4(struct pci_bus *VAR_0)
{
 struct device_node *VAR_1, *VAR_2;


 if (VAR_0->self == ((void*)0) || VAR_0->parent == ((void*)0)) {
  struct pci_controller *VAR_3 = FUNC_2(VAR_0);
  if (VAR_3 == ((void*)0))
   return ((void*)0);
  return FUNC_0(VAR_3->dn);
 }


 VAR_1 = FUNC_4(VAR_0->parent);
 if (VAR_1 == ((void*)0))
  return ((void*)0);


 VAR_2 = FUNC_3(VAR_1, VAR_0->self->devfn);
 FUNC_1(VAR_1);

 return VAR_2;
}
