
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fsl_dma_chan {int dev; } ;
struct dma_async_tx_descriptor {unsigned long flags; int cookie; } ;
struct fsl_desc_sw {struct dma_async_tx_descriptor async_tx; int tx_list; int node; } ;
struct dma_chan {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 struct fsl_desc_sw* FUNC_1 (struct fsl_dma_chan*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (struct fsl_dma_chan*,struct fsl_desc_sw*) ;
 struct fsl_dma_chan* FUNC_4 (struct dma_chan*) ;

__attribute__((used)) static struct dma_async_tx_descriptor *
FUNC_5(struct dma_chan *VAR_1, unsigned long VAR_2)
{
 struct fsl_dma_chan *VAR_3;
 struct fsl_desc_sw *VAR_4;

 if (!VAR_1)
  return ((void*)0);

 VAR_3 = FUNC_4(VAR_1);

 VAR_4 = FUNC_1(VAR_3);
 if (!VAR_4) {
  FUNC_0(VAR_3->dev, "No free memory for link descriptor\n");
  return ((void*)0);
 }

 VAR_4->async_tx.cookie = -VAR_0;
 VAR_4->async_tx.flags = VAR_2;


 FUNC_2(&VAR_4->node, &VAR_4->tx_list);


 FUNC_3(VAR_3, VAR_4);

 return &VAR_4->async_tx;
}
