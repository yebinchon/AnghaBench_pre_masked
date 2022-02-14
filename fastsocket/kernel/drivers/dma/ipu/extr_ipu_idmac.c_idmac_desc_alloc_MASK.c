
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct dma_async_tx_descriptor {int tx_submit; } ;
struct idmac_tx_desc {int list; struct dma_async_tx_descriptor txd; } ;
struct TYPE_4__ {int device; } ;
struct idmac_channel {int n_tx_desc; int free_list; TYPE_2__ dma_chan; int queue; struct idmac_tx_desc* desc; } ;
struct idmac {int dummy; } ;
struct TYPE_3__ {int tasklet; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct dma_async_tx_descriptor*,TYPE_2__*) ;
 int VAR_1 ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct dma_async_tx_descriptor*,int ,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 struct idmac* FUNC_6 (int ) ;
 TYPE_1__* FUNC_7 (struct idmac*) ;
 struct idmac_tx_desc* FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct idmac_channel *VAR_2, int VAR_3)
{
 struct idmac_tx_desc *VAR_4 = FUNC_8(VAR_3 * sizeof(struct idmac_tx_desc));
 struct idmac *VAR_5 = FUNC_6(VAR_2->dma_chan.device);

 if (!VAR_4)
  return -VAR_0;


 FUNC_4(&FUNC_7(VAR_5)->tasklet);

 VAR_2->n_tx_desc = VAR_3;
 VAR_2->desc = VAR_4;
 FUNC_0(&VAR_2->queue);
 FUNC_0(&VAR_2->free_list);

 while (VAR_3--) {
  struct dma_async_tx_descriptor *VAR_6 = &VAR_4->txd;

  FUNC_3(VAR_6, 0, sizeof(*VAR_6));
  FUNC_1(VAR_6, &VAR_2->dma_chan);
  VAR_6->tx_submit = VAR_1;

  FUNC_2(&VAR_4->list, &VAR_2->free_list);

  VAR_4++;
 }

 FUNC_5(&FUNC_7(VAR_5)->tasklet);

 return 0;
}
