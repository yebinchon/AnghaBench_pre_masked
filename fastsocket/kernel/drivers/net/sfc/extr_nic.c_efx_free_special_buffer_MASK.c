
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct efx_special_buffer {scalar_t__ entries; int * addr; scalar_t__ dma_addr; int len; scalar_t__ index; } ;
struct efx_nic {TYPE_1__* pci_dev; int net_dev; } ;
struct TYPE_2__ {int dev; } ;


 int FUNC_0 (int *,int ,int *,scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (struct efx_nic*,int ,int ,char*,scalar_t__,scalar_t__,int ,int ,int *,int ) ;
 scalar_t__ FUNC_2 (int *) ;

__attribute__((used)) static void
FUNC_3(struct efx_nic *VAR_1, struct efx_special_buffer *VAR_2)
{
 if (!VAR_2->addr)
  return;

 FUNC_1(VAR_1, VAR_0, VAR_1->net_dev,
    "deallocating special buffers %d-%d at %llx+%x "
    "(virt %p phys %llx)\n", VAR_2->index,
    VAR_2->index + VAR_2->entries - 1,
    (u64)VAR_2->dma_addr, VAR_2->len,
    VAR_2->addr, (u64)FUNC_2(VAR_2->addr));

 FUNC_0(&VAR_1->pci_dev->dev, VAR_2->len, VAR_2->addr,
     VAR_2->dma_addr);
 VAR_2->addr = ((void*)0);
 VAR_2->entries = 0;
}
