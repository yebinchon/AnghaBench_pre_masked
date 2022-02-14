
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct dma_async_tx_descriptor {int flags; void* callback_param; int (* callback ) (void*) ;int cookie; } ;
struct device {int dummy; } ;
struct TYPE_5__ {int private; } ;
struct at_dma_chan {TYPE_2__ chan_common; int free_list; int completed_cookie; } ;
struct TYPE_4__ {int saddr; int daddr; } ;
struct at_desc {int len; TYPE_1__ lli; int desc_node; int tx_list; struct dma_async_tx_descriptor txd; } ;
typedef int (* dma_async_tx_callback ) (void*) ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*) ;
 struct device* FUNC_1 (TYPE_2__*) ;
 int FUNC_2 (int ,char*,int ) ;
 int FUNC_3 (struct dma_async_tx_descriptor*) ;
 int FUNC_4 (struct device*,int ,int ,int ) ;
 int FUNC_5 (struct device*,int ,int ,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (int *,int *) ;

__attribute__((used)) static void
FUNC_8(struct at_dma_chan *VAR_6, struct at_desc *VAR_7)
{
 dma_async_tx_callback VAR_8;
 void *VAR_9;
 struct dma_async_tx_descriptor *VAR_10 = &VAR_7->txd;

 FUNC_2(FUNC_0(&VAR_6->chan_common),
  "descriptor %u complete\n", VAR_10->cookie);

 VAR_6->completed_cookie = VAR_10->cookie;
 VAR_8 = VAR_10->callback;
 VAR_9 = VAR_10->callback_param;


 FUNC_7(&VAR_7->tx_list, &VAR_6->free_list);

 FUNC_6(&VAR_7->desc_node, &VAR_6->free_list);


 if (!VAR_6->chan_common.private) {
  struct device *VAR_11 = FUNC_1(&VAR_6->chan_common);
  if (!(VAR_10->flags & VAR_1)) {
   if (VAR_10->flags & VAR_0)
    FUNC_5(VAR_11,
      VAR_7->lli.daddr,
      VAR_7->len, VAR_4);
   else
    FUNC_4(VAR_11,
      VAR_7->lli.daddr,
      VAR_7->len, VAR_4);
  }
  if (!(VAR_10->flags & VAR_2)) {
   if (VAR_10->flags & VAR_3)
    FUNC_5(VAR_11,
      VAR_7->lli.saddr,
      VAR_7->len, VAR_5);
   else
    FUNC_4(VAR_11,
      VAR_7->lli.saddr,
      VAR_7->len, VAR_5);
  }
 }





 if (VAR_8)
  VAR_8(VAR_9);

 FUNC_3(VAR_10);
}
