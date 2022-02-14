
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pci_dev {int devfn; int bus; } ;
struct device_node {int dummy; } ;


 struct device_node* FUNC_0 (int ,int ) ;

struct device_node*
FUNC_1(struct pci_dev *VAR_0)
{
 return FUNC_0(VAR_0->bus, VAR_0->devfn);
}
