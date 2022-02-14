
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct txx9dmac_slave {int dummy; } ;
struct TYPE_6__ {int SAR; int DAR; } ;
struct TYPE_5__ {int SAR; int DAR; } ;
struct dma_async_tx_descriptor {int flags; void* callback_param; int (* callback ) (void*) ;int cookie; } ;
struct txx9dmac_desc {int len; TYPE_2__ hwdesc32; TYPE_1__ hwdesc; int desc_node; int tx_list; struct dma_async_tx_descriptor txd; } ;
struct TYPE_7__ {struct txx9dmac_slave* private; } ;
struct txx9dmac_chan {TYPE_3__ chan; int free_list; int completed; } ;
typedef int (* dma_async_tx_callback ) (void*) ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int ,char*,int ,struct txx9dmac_desc*) ;
 int FUNC_3 (struct dma_async_tx_descriptor*) ;
 int FUNC_4 (int ,int ,int ,int ) ;
 int FUNC_5 (int ,int ,int ,int ) ;
 scalar_t__ FUNC_6 (struct txx9dmac_chan*) ;
 int FUNC_7 (int *,int *) ;
 int FUNC_8 (int *,int *) ;
 int FUNC_9 (struct txx9dmac_chan*,struct txx9dmac_desc*) ;

__attribute__((used)) static void
FUNC_10(struct txx9dmac_chan *VAR_6,
        struct txx9dmac_desc *VAR_7)
{
 dma_async_tx_callback VAR_8;
 void *VAR_9;
 struct dma_async_tx_descriptor *VAR_10 = &VAR_7->txd;
 struct txx9dmac_slave *VAR_11 = VAR_6->chan.private;

 FUNC_2(FUNC_0(&VAR_6->chan), "descriptor %u %p complete\n",
   VAR_10->cookie, VAR_7);

 VAR_6->completed = VAR_10->cookie;
 VAR_8 = VAR_10->callback;
 VAR_9 = VAR_10->callback_param;

 FUNC_9(VAR_6, VAR_7);
 FUNC_8(&VAR_7->tx_list, &VAR_6->free_list);
 FUNC_7(&VAR_7->desc_node, &VAR_6->free_list);

 if (!VAR_11) {
  dma_addr_t VAR_12;
  if (!(VAR_10->flags & VAR_1)) {
   VAR_12 = FUNC_6(VAR_6) ?
    VAR_7->hwdesc.DAR : VAR_7->hwdesc32.DAR;
   if (VAR_10->flags & VAR_0)
    FUNC_5(FUNC_1(&VAR_6->chan),
     VAR_12, VAR_7->len, VAR_4);
   else
    FUNC_4(FUNC_1(&VAR_6->chan),
     VAR_12, VAR_7->len, VAR_4);
  }
  if (!(VAR_10->flags & VAR_2)) {
   VAR_12 = FUNC_6(VAR_6) ?
    VAR_7->hwdesc.SAR : VAR_7->hwdesc32.SAR;
   if (VAR_10->flags & VAR_3)
    FUNC_5(FUNC_1(&VAR_6->chan),
     VAR_12, VAR_7->len, VAR_5);
   else
    FUNC_4(FUNC_1(&VAR_6->chan),
     VAR_12, VAR_7->len, VAR_5);
  }
 }





 if (VAR_8)
  VAR_8(VAR_9);
 FUNC_3(VAR_10);
}
