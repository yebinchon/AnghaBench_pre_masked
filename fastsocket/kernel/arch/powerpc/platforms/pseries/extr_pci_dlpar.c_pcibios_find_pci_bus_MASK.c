
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dn {TYPE_1__* phb; } ;
struct pci_bus {int dummy; } ;
struct device_node {struct pci_dn* data; } ;
struct TYPE_2__ {int bus; } ;


 struct pci_bus* FUNC_0 (int ,struct device_node*) ;

struct pci_bus *
FUNC_1(struct device_node *VAR_0)
{
 struct pci_dn *VAR_1 = VAR_0->data;

 if (!VAR_1 || !VAR_1->phb || !VAR_1->phb->bus)
  return ((void*)0);

 return FUNC_0(VAR_1->phb->bus, VAR_0);
}
