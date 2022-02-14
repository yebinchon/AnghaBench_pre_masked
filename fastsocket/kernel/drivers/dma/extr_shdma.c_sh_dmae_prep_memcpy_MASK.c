
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct sh_dmae_chan {int dev; } ;
struct dma_async_tx_descriptor {unsigned long flags; int cookie; } ;
struct TYPE_2__ {size_t sar; size_t dar; size_t tcr; } ;
struct sh_desc {struct dma_async_tx_descriptor async_tx; int tx_list; int node; int mark; TYPE_1__ hw; } ;
struct dma_chan {int dummy; } ;
typedef size_t dma_addr_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct dma_async_tx_descriptor*) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,int *) ;
 size_t FUNC_3 (size_t,size_t) ;
 struct sh_desc* FUNC_4 (struct sh_dmae_chan*) ;
 int FUNC_5 (struct sh_dmae_chan*,struct sh_desc*) ;
 struct sh_dmae_chan* FUNC_6 (struct dma_chan*) ;

__attribute__((used)) static struct dma_async_tx_descriptor *FUNC_7(
 struct dma_chan *VAR_3, dma_addr_t VAR_4, dma_addr_t VAR_5,
 size_t VAR_6, unsigned long VAR_7)
{
 struct sh_dmae_chan *VAR_8;
 struct sh_desc *VAR_9 = ((void*)0), *VAR_10 = ((void*)0), *VAR_11;
 size_t VAR_12;

 if (!VAR_3)
  return ((void*)0);

 if (!VAR_6)
  return ((void*)0);

 VAR_8 = FUNC_6(VAR_3);

 do {

  VAR_11 = FUNC_4(VAR_8);
  if (!VAR_11) {
   FUNC_1(VAR_8->dev,
     "No free memory for link descriptor\n");
   goto err_get_desc;
  }

  VAR_12 = FUNC_3(VAR_6, (size_t)VAR_2);

  VAR_11->hw.sar = VAR_5;
  VAR_11->hw.dar = VAR_4;
  VAR_11->hw.tcr = VAR_12;
  if (!VAR_9)
   VAR_9 = VAR_11;

  VAR_11->mark = VAR_0;
  FUNC_0(&VAR_11->async_tx);

  VAR_10 = VAR_11;
  VAR_6 -= VAR_12;
  VAR_5 += VAR_12;
  VAR_4 += VAR_12;

  FUNC_2(&VAR_11->node, &VAR_9->tx_list);
 } while (VAR_6);

 VAR_11->async_tx.flags = VAR_7;
 VAR_11->async_tx.cookie = -VAR_1;

 return &VAR_9->async_tx;

err_get_desc:
 FUNC_5(VAR_8, VAR_9);
 return ((void*)0);

}
