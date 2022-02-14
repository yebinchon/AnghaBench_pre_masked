
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int irq; } ;
struct device_node {int dummy; } ;
struct TYPE_2__ {int eeh_mode; } ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (struct device_node*) ;
 int FUNC_1 (int ) ;
 struct device_node* FUNC_2 (struct pci_dev*) ;

__attribute__((used)) static void FUNC_3(struct pci_dev *VAR_1)
{
 struct device_node *VAR_2 = FUNC_2(VAR_1);

 if ((FUNC_0(VAR_2)->eeh_mode) & VAR_0) {
  FUNC_0(VAR_2)->eeh_mode &= ~VAR_0;
  FUNC_1(VAR_1->irq);
 }
}
