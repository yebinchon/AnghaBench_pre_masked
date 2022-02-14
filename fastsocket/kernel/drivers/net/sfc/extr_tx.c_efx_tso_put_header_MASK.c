
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct efx_tx_queue {int insert_count; TYPE_2__* efx; } ;
struct efx_tx_buffer {int flags; scalar_t__ len; scalar_t__ unmap_len; int heap_buf; int dma_addr; } ;
struct TYPE_4__ {TYPE_1__* pci_dev; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,int *,scalar_t__,int ) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int) ;

__attribute__((used)) static int FUNC_4(struct efx_tx_queue *VAR_4,
         struct efx_tx_buffer *VAR_5, u8 *VAR_6)
{
 if (FUNC_3(VAR_5->flags & VAR_1)) {
  VAR_5->dma_addr = FUNC_0(&VAR_4->efx->pci_dev->dev,
        VAR_6, VAR_5->len,
        VAR_0);
  if (FUNC_3(FUNC_1(&VAR_4->efx->pci_dev->dev,
            VAR_5->dma_addr))) {
   FUNC_2(VAR_5->heap_buf);
   VAR_5->len = 0;
   VAR_5->flags = 0;
   return -VAR_3;
  }
  VAR_5->unmap_len = VAR_5->len;
  VAR_5->flags |= VAR_2;
 }

 ++VAR_4->insert_count;
 return 0;
}
