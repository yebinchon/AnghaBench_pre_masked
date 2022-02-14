
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct mmc_request {struct mmc_data* data; } ;
struct mmc_omap_host {int dma_in_use; int use_dma; unsigned int sg_len; int total_bytes_left; scalar_t__ dma_done; scalar_t__ brs_received; int mmc; scalar_t__ sg_idx; struct mmc_data* data; } ;
struct mmc_data {int blksz; int blocks; int sg_len; int flags; TYPE_1__* sg; } ;
typedef enum dma_data_direction { ____Placeholder_dma_data_direction } dma_data_direction ;
struct TYPE_2__ {int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct mmc_omap_host*,int ,int) ;
 unsigned int FUNC_1 (int ,TYPE_1__*,unsigned int,int) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct mmc_omap_host*,struct mmc_data*) ;
 int FUNC_4 (struct mmc_omap_host*,struct mmc_data*) ;
 int FUNC_5 (struct mmc_omap_host*) ;
 int FUNC_6 (struct mmc_omap_host*,struct mmc_request*) ;
 int FUNC_7 (struct mmc_omap_host*,struct mmc_request*) ;

__attribute__((used)) static void
FUNC_8(struct mmc_omap_host *VAR_6, struct mmc_request *VAR_7)
{
 struct mmc_data *VAR_8 = VAR_7->data;
 int VAR_9, VAR_10, VAR_11;
 unsigned VAR_12;

 VAR_6->data = VAR_8;
 if (VAR_8 == ((void*)0)) {
  FUNC_0(VAR_6, VAR_0, 0);
  FUNC_0(VAR_6, VAR_5, 0);
  FUNC_0(VAR_6, VAR_1, 0);
  VAR_6->dma_in_use = 0;
  FUNC_6(VAR_6, VAR_7);
  return;
 }

 VAR_11 = VAR_8->blksz;

 FUNC_0(VAR_6, VAR_5, VAR_8->blocks - 1);
 FUNC_0(VAR_6, VAR_0, VAR_11 - 1);
 FUNC_7(VAR_6, VAR_7);




 VAR_12 = (VAR_8->blocks == 1) ? 1 : VAR_8->sg_len;


 VAR_10 = VAR_6->use_dma;
 if (VAR_10) {
  for (VAR_9 = 0; VAR_9 < VAR_12; VAR_9++) {
   if ((VAR_8->sg[VAR_9].length % VAR_11) != 0) {
    VAR_10 = 0;
    break;
   }
  }
 }

 VAR_6->sg_idx = 0;
 if (VAR_10) {
  if (FUNC_3(VAR_6, VAR_8) == 0) {
   enum dma_data_direction VAR_13;

   if (VAR_8->flags & VAR_4)
    VAR_13 = VAR_3;
   else
    VAR_13 = VAR_2;

   VAR_6->sg_len = FUNC_1(FUNC_2(VAR_6->mmc), VAR_8->sg,
      VAR_12, VAR_13);
   VAR_6->total_bytes_left = 0;
   FUNC_4(VAR_6, VAR_7->data);
   VAR_6->brs_received = 0;
   VAR_6->dma_done = 0;
   VAR_6->dma_in_use = 1;
  } else
   VAR_10 = 0;
 }


 if (!VAR_10) {
  FUNC_0(VAR_6, VAR_1, 0x1f1f);
  VAR_6->total_bytes_left = VAR_8->blocks * VAR_11;
  VAR_6->sg_len = VAR_12;
  FUNC_5(VAR_6);
  VAR_6->dma_in_use = 0;
 }
}
