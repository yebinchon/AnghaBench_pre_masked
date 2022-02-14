
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct fsl_dma_chan {int common; int desc_pool; } ;
struct TYPE_2__ {int phys; int tx_submit; } ;
struct fsl_desc_sw {TYPE_1__ async_tx; int tx_list; } ;
typedef int dma_addr_t ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (TYPE_1__*,int *) ;
 struct fsl_desc_sw* FUNC_2 (int ,int ,int *) ;
 int VAR_1 ;
 int FUNC_3 (struct fsl_desc_sw*,int ,int) ;

__attribute__((used)) static struct fsl_desc_sw *FUNC_4(
     struct fsl_dma_chan *VAR_2)
{
 dma_addr_t VAR_3;
 struct fsl_desc_sw *VAR_4;

 VAR_4 = FUNC_2(VAR_2->desc_pool, VAR_0, &VAR_3);
 if (VAR_4) {
  FUNC_3(VAR_4, 0, sizeof(struct fsl_desc_sw));
  FUNC_0(&VAR_4->tx_list);
  FUNC_1(&VAR_4->async_tx,
      &VAR_2->common);
  VAR_4->async_tx.tx_submit = VAR_1;
  VAR_4->async_tx.phys = VAR_3;
 }

 return VAR_4;
}
