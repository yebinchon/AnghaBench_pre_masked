
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int error_state; } ;
struct device_node {struct device_node* parent; } ;
struct TYPE_2__ {int eeh_mode; struct pci_dev* pcidev; } ;


 TYPE_1__* FUNC_0 (struct device_node*) ;
 int FUNC_1 (struct device_node*,int) ;
 struct device_node* FUNC_2 (struct device_node*) ;
 int VAR_0 ;
 int FUNC_3 (struct device_node*) ;

void FUNC_4 (struct device_node *VAR_1, int VAR_2)
{
 struct pci_dev *VAR_3;
 VAR_1 = FUNC_2 (VAR_1);


 if (!FUNC_3(VAR_1) && FUNC_0(VAR_1->parent))
  VAR_1 = VAR_1->parent;

 FUNC_0(VAR_1)->eeh_mode |= VAR_2;


 VAR_3 = FUNC_0(VAR_1)->pcidev;
 if (VAR_3)
  VAR_3->error_state = VAR_0;

 FUNC_1(VAR_1, VAR_2);
}
