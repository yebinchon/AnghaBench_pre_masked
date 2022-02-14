
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct pci_dev {int dummy; } ;
struct ioat_dma_descriptor {size_t size; scalar_t__ src_addr; scalar_t__ dst_addr; } ;
struct ioat_chan_common {TYPE_1__* device; } ;
typedef enum dma_ctrl_flags { ____Placeholder_dma_ctrl_flags } dma_ctrl_flags ;
struct TYPE_2__ {struct pci_dev* pdev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct pci_dev*,scalar_t__,size_t,int ,int,int) ;

void FUNC_1(struct ioat_chan_common *VAR_4, enum dma_ctrl_flags VAR_5,
      size_t VAR_6, struct ioat_dma_descriptor *VAR_7)
{
 struct pci_dev *VAR_8 = VAR_4->device->pdev;
 size_t VAR_9 = VAR_6 - VAR_7->size;

 if (!(VAR_5 & VAR_0))
  FUNC_0(VAR_8, VAR_7->dst_addr - VAR_9, VAR_6,
      VAR_2, VAR_5, 1);

 if (!(VAR_5 & VAR_1))
  FUNC_0(VAR_8, VAR_7->src_addr - VAR_9, VAR_6,
      VAR_3, VAR_5, 0);
}
