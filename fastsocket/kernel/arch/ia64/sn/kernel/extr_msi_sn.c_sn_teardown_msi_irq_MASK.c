
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sn_pcibus_provider {int (* dma_unmap ) (struct pci_dev*,scalar_t__,int ) ;} ;
struct sn_irq_info {scalar_t__ irq_int_bit; scalar_t__ irq_pciioinfo; } ;
struct pcidev_info {struct pci_dev* pdi_linux_pcidev; } ;
struct pcibus_bussoft {int bs_base; } ;
struct pci_dev {int dummy; } ;
typedef int nasid_t ;
struct TYPE_2__ {struct sn_irq_info* sn_irq_info; scalar_t__ pci_addr; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct sn_pcibus_provider* FUNC_1 (struct pci_dev*) ;
 struct pcibus_bussoft* FUNC_2 (struct pci_dev*) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (unsigned int) ;
 int FUNC_6 (int,int,struct sn_irq_info*) ;
 TYPE_1__* VAR_1 ;
 int FUNC_7 (struct pci_dev*,scalar_t__,int ) ;

void FUNC_8(unsigned int VAR_2)
{
 nasid_t VAR_3;
 int VAR_4;
 struct pci_dev *VAR_5;
 struct pcidev_info *VAR_6;
 struct sn_irq_info *VAR_7;
 struct pcibus_bussoft *VAR_8;
 struct sn_pcibus_provider *VAR_9;

 VAR_7 = VAR_1[VAR_2].sn_irq_info;
 if (VAR_7 == ((void*)0) || VAR_7->irq_int_bit >= 0)
  return;

 VAR_6 = (struct pcidev_info *)VAR_7->irq_pciioinfo;
 VAR_5 = VAR_6->pdi_linux_pcidev;
 VAR_9 = FUNC_1(VAR_5);

 (*VAR_9->dma_unmap)(VAR_5,
          VAR_1[VAR_2].pci_addr,
          VAR_0);
 VAR_1[VAR_2].pci_addr = 0;

 VAR_8 = FUNC_2(VAR_5);
 VAR_3 = FUNC_0(VAR_8->bs_base);
 VAR_4 = (VAR_3 & 1) ?
   FUNC_4(VAR_8->bs_base) :
   FUNC_3(VAR_8->bs_base);

 FUNC_6(VAR_3, VAR_4, VAR_7);
 VAR_1[VAR_2].sn_irq_info = ((void*)0);

 FUNC_5(VAR_2);
}
