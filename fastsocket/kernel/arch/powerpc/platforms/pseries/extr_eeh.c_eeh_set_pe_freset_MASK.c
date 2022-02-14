
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {unsigned int needs_freset; } ;
struct device_node {struct device_node* parent; } ;
struct TYPE_2__ {struct pci_dev* pcidev; } ;


 TYPE_1__* FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct device_node*,unsigned int*) ;
 struct device_node* FUNC_2 (struct device_node*) ;
 int FUNC_3 (struct device_node*) ;

void FUNC_4(struct device_node *VAR_0, unsigned int *VAR_1)
{
 struct pci_dev *VAR_2;
 VAR_0 = FUNC_2(VAR_0);


 if (!FUNC_3(VAR_0) && FUNC_0(VAR_0->parent))
  VAR_0 = VAR_0->parent;

 VAR_2 = FUNC_0(VAR_0)->pcidev;
 if (VAR_2)
  *VAR_1 |= VAR_2->needs_freset;

 FUNC_1(VAR_0, VAR_1);
}
