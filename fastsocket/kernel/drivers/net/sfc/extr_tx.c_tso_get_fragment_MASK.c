
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tso_state {int unmap_addr; int dma_addr; void* in_len; void* unmap_len; scalar_t__ dma_flags; } ;
struct efx_nic {TYPE_1__* pci_dev; } ;
typedef int skb_frag_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (int *,int *,int ,void*,int ) ;
 void* FUNC_3 (int *) ;

__attribute__((used)) static int FUNC_4(struct tso_state *VAR_2, struct efx_nic *VAR_3,
       skb_frag_t *VAR_4)
{
 VAR_2->unmap_addr = FUNC_2(&VAR_3->pci_dev->dev, VAR_4, 0,
       FUNC_3(VAR_4), VAR_0);
 if (FUNC_1(!FUNC_0(&VAR_3->pci_dev->dev, VAR_2->unmap_addr))) {
  VAR_2->dma_flags = 0;
  VAR_2->unmap_len = FUNC_3(VAR_4);
  VAR_2->in_len = FUNC_3(VAR_4);
  VAR_2->dma_addr = VAR_2->unmap_addr;
  return 0;
 }
 return -VAR_1;
}
