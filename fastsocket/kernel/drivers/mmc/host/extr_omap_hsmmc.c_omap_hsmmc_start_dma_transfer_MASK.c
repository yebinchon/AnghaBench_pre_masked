
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scatterlist {int length; } ;
struct omap_hsmmc_host {int dma_ch; scalar_t__ dma_sg_idx; int mmc; int dma_len; int sem; } ;
struct mmc_request {struct mmc_data* data; } ;
struct mmc_data {int sg_len; int blksz; struct scatterlist* sg; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int) ;
 int FUNC_1 (int ,struct scatterlist*,int,int ) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int) ;
 int FUNC_6 (struct omap_hsmmc_host*,struct mmc_data*,struct scatterlist*) ;
 int VAR_2 ;
 int FUNC_7 (struct omap_hsmmc_host*,struct mmc_data*) ;
 int FUNC_8 (struct omap_hsmmc_host*,struct mmc_data*) ;
 int FUNC_9 (int ,char*,int ,struct omap_hsmmc_host*,int*) ;
 int FUNC_10 (int) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;

__attribute__((used)) static int FUNC_13(struct omap_hsmmc_host *VAR_3,
     struct mmc_request *VAR_4)
{
 int VAR_5 = 0, VAR_6 = 0, VAR_7 = 1, VAR_8;
 struct mmc_data *VAR_9 = VAR_4->data;


 for (VAR_8 = 0; VAR_8 < VAR_9->sg_len; VAR_8++) {
  struct scatterlist *VAR_10;

  VAR_10 = VAR_9->sg + VAR_8;
  if (VAR_10->length % VAR_9->blksz)
   return -VAR_0;
 }
 if ((VAR_9->blksz % 4) != 0)



  return -VAR_0;





 if (VAR_3->dma_ch != -1) {
  FUNC_11(VAR_1);
  FUNC_10(100);
  if (FUNC_2(&VAR_3->sem)) {
   FUNC_5(VAR_3->dma_ch);
   VAR_3->dma_ch = -1;
   FUNC_12(&VAR_3->sem);
   return VAR_7;
  }
 } else {
  if (FUNC_2(&VAR_3->sem))
   return VAR_7;
 }

 VAR_6 = FUNC_9(FUNC_8(VAR_3, VAR_9),
          "MMC/SD", VAR_2, VAR_3, &VAR_5);
 if (VAR_6 != 0) {
  FUNC_0(FUNC_3(VAR_3->mmc),
   "%s: omap_request_dma() failed with %d\n",
   FUNC_4(VAR_3->mmc), VAR_6);
  return VAR_6;
 }

 VAR_3->dma_len = FUNC_1(FUNC_3(VAR_3->mmc), VAR_9->sg,
   VAR_9->sg_len, FUNC_7(VAR_3, VAR_9));
 VAR_3->dma_ch = VAR_5;
 VAR_3->dma_sg_idx = 0;

 FUNC_6(VAR_3, VAR_9, VAR_9->sg);

 return 0;
}
