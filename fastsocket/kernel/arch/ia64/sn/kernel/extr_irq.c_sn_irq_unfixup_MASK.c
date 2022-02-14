
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sn_irq_info {size_t irq_irq; int rcu; int list; } ;
struct pci_dev {int dummy; } ;
struct TYPE_2__ {struct sn_irq_info* pdi_sn_irq_info; } ;


 int FUNC_0 (struct pci_dev*) ;
 TYPE_1__* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (size_t) ;
 int FUNC_4 (struct sn_irq_info*) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct pci_dev*) ;
 int VAR_0 ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct sn_irq_info*) ;

void FUNC_11(struct pci_dev *VAR_3)
{
 struct sn_irq_info *VAR_4;


 if (!FUNC_0(VAR_3))
  return;

 VAR_4 = FUNC_1(VAR_3)->pdi_sn_irq_info;
 if (!VAR_4)
  return;
 if (!VAR_4->irq_irq) {
  FUNC_4(VAR_4);
  return;
 }

 FUNC_10(VAR_4);
 FUNC_8(&VAR_1);
 FUNC_5(&VAR_4->list);
 FUNC_9(&VAR_1);
 if (FUNC_6(VAR_2[VAR_4->irq_irq]))
  FUNC_3(VAR_4->irq_irq);
 FUNC_2(&VAR_4->rcu, VAR_0);
 FUNC_7(VAR_3);

}
