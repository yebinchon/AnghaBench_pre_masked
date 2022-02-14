
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pcidev_info {scalar_t__ pdi_pcibus_info; } ;
struct pcibus_info {int dummy; } ;
struct pci_dev {int dummy; } ;
typedef int dma_addr_t ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_0 ;
 struct pcidev_info* FUNC_3 (struct pci_dev*) ;
 int FUNC_4 (struct pcibus_info*,int) ;

void
FUNC_5(struct pci_dev *VAR_1, dma_addr_t VAR_2, int VAR_3)
{
 struct pcidev_info *VAR_4 = FUNC_3(VAR_1);
 struct pcibus_info *VAR_5 =
     (struct pcibus_info *)VAR_4->pdi_pcibus_info;

 if (FUNC_2(VAR_2)) {
  int VAR_6;

  VAR_6 =
      FUNC_1((FUNC_0(VAR_2) - VAR_0));
  FUNC_4(VAR_5, VAR_6);
 }
}
