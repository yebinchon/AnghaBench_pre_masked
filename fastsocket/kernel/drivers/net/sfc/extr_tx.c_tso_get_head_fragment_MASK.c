
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tso_state {int header_len; int unmap_len; int in_len; int unmap_addr; int dma_addr; int dma_flags; } ;
struct sk_buff {scalar_t__ data; } ;
struct efx_nic {TYPE_1__* pci_dev; } ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,scalar_t__,int,int ) ;
 int FUNC_1 (int *,int ) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (struct sk_buff const*) ;

__attribute__((used)) static int FUNC_4(struct tso_state *VAR_3, struct efx_nic *VAR_4,
     const struct sk_buff *VAR_5)
{
 int VAR_6 = VAR_3->header_len;
 int VAR_7 = FUNC_3(VAR_5) - VAR_6;

 VAR_3->unmap_addr = FUNC_0(&VAR_4->pci_dev->dev, VAR_5->data + VAR_6,
     VAR_7, VAR_0);
 if (FUNC_2(!FUNC_1(&VAR_4->pci_dev->dev, VAR_3->unmap_addr))) {
  VAR_3->dma_flags = VAR_1;
  VAR_3->unmap_len = VAR_7;
  VAR_3->in_len = VAR_7;
  VAR_3->dma_addr = VAR_3->unmap_addr;
  return 0;
 }
 return -VAR_2;
}
