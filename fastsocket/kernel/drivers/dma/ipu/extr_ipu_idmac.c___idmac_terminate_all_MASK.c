
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct idmac_tx_desc {int txd; int list; } ;
struct idmac_channel {scalar_t__ status; int n_tx_desc; int lock; int ** sg; int free_list; struct idmac_tx_desc* desc; int queue; } ;
struct idmac {int dummy; } ;
struct dma_chan {int device; } ;
struct TYPE_2__ {int tasklet; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct idmac*,struct idmac_channel*,int) ;
 int FUNC_2 (int *,int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *,int *) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 struct idmac* FUNC_9 (int ) ;
 struct idmac_channel* FUNC_10 (struct dma_chan*) ;
 TYPE_1__* FUNC_11 (struct idmac*) ;

__attribute__((used)) static void FUNC_12(struct dma_chan *VAR_2)
{
 struct idmac_channel *VAR_3 = FUNC_10(VAR_2);
 struct idmac *VAR_4 = FUNC_9(VAR_2->device);
 unsigned long VAR_5;
 int VAR_6;

 FUNC_1(VAR_4, VAR_3,
       VAR_3->status >= VAR_0);

 FUNC_7(&FUNC_11(VAR_4)->tasklet);


 FUNC_5(&VAR_3->lock, VAR_5);
 FUNC_4(&VAR_3->queue, &VAR_3->free_list);

 if (VAR_3->desc)
  for (VAR_6 = 0; VAR_6 < VAR_3->n_tx_desc; VAR_6++) {
   struct idmac_tx_desc *VAR_7 = VAR_3->desc + VAR_6;
   if (FUNC_3(&VAR_7->list))

    FUNC_2(&VAR_7->list, &VAR_3->free_list);

   FUNC_0(&VAR_7->txd);
  }

 VAR_3->sg[0] = ((void*)0);
 VAR_3->sg[1] = ((void*)0);
 FUNC_6(&VAR_3->lock, VAR_5);

 FUNC_8(&FUNC_11(VAR_4)->tasklet);

 VAR_3->status = VAR_1;
}
