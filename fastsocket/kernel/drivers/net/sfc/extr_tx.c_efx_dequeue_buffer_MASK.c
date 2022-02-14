
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sk_buff {int dummy; } ;
struct efx_tx_queue {int read_count; int queue; TYPE_2__* efx; } ;
struct efx_tx_buffer {int flags; scalar_t__ len; int heap_buf; scalar_t__ skb; scalar_t__ unmap_len; scalar_t__ dma_addr; } ;
struct device {int dummy; } ;
typedef scalar_t__ dma_addr_t ;
struct TYPE_4__ {int net_dev; TYPE_1__* pci_dev; } ;
struct TYPE_3__ {struct device dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct sk_buff*) ;
 int FUNC_1 (struct device*,scalar_t__,scalar_t__,int ) ;
 int FUNC_2 (struct device*,scalar_t__,scalar_t__,int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (TYPE_2__*,int ,int ,char*,int ,int ) ;
 int VAR_4 ;

__attribute__((used)) static void FUNC_5(struct efx_tx_queue *VAR_5,
          struct efx_tx_buffer *VAR_6)
{
 if (VAR_6->unmap_len) {
  struct device *VAR_7 = &VAR_5->efx->pci_dev->dev;
  dma_addr_t VAR_8 = (VAR_6->dma_addr + VAR_6->len -
      VAR_6->unmap_len);
  if (VAR_6->flags & VAR_2)
   FUNC_2(VAR_7, VAR_8, VAR_6->unmap_len,
      VAR_0);
  else
   FUNC_1(VAR_7, VAR_8, VAR_6->unmap_len,
           VAR_0);
  VAR_6->unmap_len = 0;
 }

 if (VAR_6->flags & VAR_3) {
  FUNC_0((struct sk_buff *) VAR_6->skb);
  FUNC_4(VAR_5->efx, VAR_4, VAR_5->efx->net_dev,
      "TX queue %d transmission id %x complete\n",
      VAR_5->queue, VAR_5->read_count);
 } else if (VAR_6->flags & VAR_1) {
  FUNC_3(VAR_6->heap_buf);
 }

 VAR_6->len = 0;
 VAR_6->flags = 0;
}
