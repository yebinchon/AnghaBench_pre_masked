
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sn_pcibus_provider {int (* dma_unmap ) (struct pci_dev*,int ,int ) ;} ;
struct pci_dev {int dummy; } ;
struct device {int * bus; } ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 struct sn_pcibus_provider* FUNC_1 (struct pci_dev*) ;
 int FUNC_2 (unsigned long,int ) ;
 int FUNC_3 (size_t) ;
 int VAR_0 ;
 int FUNC_4 (struct pci_dev*,int ,int ) ;
 struct pci_dev* FUNC_5 (struct device*) ;

__attribute__((used)) static void FUNC_6(struct device *VAR_1, size_t VAR_2, void *VAR_3,
     dma_addr_t VAR_4)
{
 struct pci_dev *VAR_5 = FUNC_5(VAR_1);
 struct sn_pcibus_provider *VAR_6 = FUNC_1(VAR_5);

 FUNC_0(VAR_1->bus != &VAR_0);

 VAR_6->dma_unmap(VAR_5, VAR_4, 0);
 FUNC_2((unsigned long)VAR_3, FUNC_3(VAR_2));
}
