
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct TYPE_2__ {int coherent_dma_mask; } ;
struct pci_dev {int dma_mask; TYPE_1__ dev; } ;


 int FUNC_0 (TYPE_1__*,int ) ;

int FUNC_1(struct pci_dev *VAR_0, u64 VAR_1)
{
 int VAR_2;

 VAR_2 = FUNC_0(&VAR_0->dev, VAR_1);
 VAR_0->dev.coherent_dma_mask = VAR_0->dma_mask;

 return VAR_2;
}
