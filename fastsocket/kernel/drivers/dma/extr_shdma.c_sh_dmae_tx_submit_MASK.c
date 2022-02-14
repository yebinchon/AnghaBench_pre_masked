
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int prev; } ;
struct TYPE_4__ {int cookie; } ;
struct sh_dmae_chan {int desc_lock; TYPE_3__ ld_queue; TYPE_1__ common; } ;
struct TYPE_5__ {int cookie; } ;
struct sh_desc {int tx_list; TYPE_2__ async_tx; } ;
struct dma_async_tx_descriptor {int chan; } ;
typedef int dma_cookie_t ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 struct sh_dmae_chan* FUNC_3 (int ) ;
 struct sh_desc* FUNC_4 (struct dma_async_tx_descriptor*) ;

__attribute__((used)) static dma_cookie_t FUNC_5(struct dma_async_tx_descriptor *VAR_1)
{
 struct sh_desc *VAR_2 = FUNC_4(VAR_1);
 struct sh_dmae_chan *VAR_3 = FUNC_3(VAR_1->chan);
 dma_cookie_t VAR_4;

 FUNC_1(&VAR_3->desc_lock);

 VAR_4 = VAR_3->common.cookie;
 VAR_4++;
 if (VAR_4 < 0)
  VAR_4 = 1;


 if (VAR_2->async_tx.cookie != -VAR_0)
  VAR_2->async_tx.cookie = VAR_4;
 VAR_3->common.cookie = VAR_2->async_tx.cookie;

 FUNC_0(&VAR_2->tx_list, VAR_3->ld_queue.prev);

 FUNC_2(&VAR_3->desc_lock);

 return VAR_4;
}
