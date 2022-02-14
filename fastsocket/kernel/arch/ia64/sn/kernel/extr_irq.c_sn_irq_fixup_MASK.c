
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sn_irq_info {int irq_slice; int irq_cpuid; size_t irq_irq; int list; int irq_pciioinfo; int irq_nasid; } ;
struct pci_dev {int dummy; } ;
struct irq_desc {int status; } ;
typedef int nasid_t ;


 int VAR_0 ;
 int FUNC_0 (struct pci_dev*) ;
 int FUNC_1 (int) ;
 struct irq_desc* FUNC_2 (size_t) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (struct pci_dev*) ;
 int FUNC_6 (struct sn_irq_info*) ;
 int FUNC_7 (size_t) ;
 int FUNC_8 (size_t,int,int ) ;
 int VAR_1 ;
 int * VAR_2 ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

void FUNC_11(struct pci_dev *VAR_3, struct sn_irq_info *VAR_4)
{
 nasid_t VAR_5 = VAR_4->irq_nasid;
 int VAR_6 = VAR_4->irq_slice;
 int VAR_7 = FUNC_4(VAR_5, VAR_6);





 FUNC_5(VAR_3);
 VAR_4->irq_cpuid = VAR_7;
 VAR_4->irq_pciioinfo = FUNC_0(VAR_3);


 FUNC_9(&VAR_1);
 FUNC_3(&VAR_4->list, VAR_2[VAR_4->irq_irq]);
 FUNC_7(VAR_4->irq_irq);
 FUNC_10(&VAR_1);

 FUNC_6(VAR_4);
}
