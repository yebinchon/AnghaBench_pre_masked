
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sn_pcibus_provider {int (* dma_unmap ) (struct pci_dev*,int ,int) ;} ;
struct pci_dev {int dummy; } ;
struct dma_attrs {int dummy; } ;
struct device {int * bus; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
typedef int dma_addr_t ;


 int FUNC_0 (int) ;
 struct sn_pcibus_provider* FUNC_1 (struct pci_dev*) ;
 int VAR_0 ;
 int FUNC_2 (struct pci_dev*,int ,int) ;
 struct pci_dev* FUNC_3 (struct device*) ;

__attribute__((used)) static void FUNC_4(struct device *VAR_1, dma_addr_t VAR_2,
         size_t VAR_3, enum dma_data_direction VAR_4,
         struct dma_attrs *VAR_5)
{
 struct pci_dev *VAR_6 = FUNC_3(VAR_1);
 struct sn_pcibus_provider *VAR_7 = FUNC_1(VAR_6);

 FUNC_0(VAR_1->bus != &VAR_0);

 VAR_7->dma_unmap(VAR_6, VAR_2, VAR_4);
}
