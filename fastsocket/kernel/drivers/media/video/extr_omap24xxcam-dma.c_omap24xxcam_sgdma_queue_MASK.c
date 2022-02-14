
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sgdma_state {int sglen; int len; void* arg; int callback; scalar_t__ csr; scalar_t__ queued_sglist; scalar_t__ bytes_read; scalar_t__ next_sglist; struct scatterlist const* sglist; } ;
struct scatterlist {int dummy; } ;
struct omap24xxcam_sgdma {int next_sgdma; int lock; int free_sgdma; struct sgdma_state* sg_state; } ;
typedef int sgdma_callback_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct omap24xxcam_sgdma*) ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;

int FUNC_3(struct omap24xxcam_sgdma *VAR_3,
       const struct scatterlist *VAR_4, int VAR_5,
       int VAR_6, sgdma_callback_t VAR_7, void *VAR_8)
{
 unsigned long VAR_9;
 struct sgdma_state *VAR_10;

 if ((VAR_5 < 0) || ((VAR_5 > 0) & !VAR_4))
  return -VAR_1;

 FUNC_1(&VAR_3->lock, VAR_9);

 if (!VAR_3->free_sgdma) {
  FUNC_2(&VAR_3->lock, VAR_9);
  return -VAR_0;
 }

 VAR_10 = VAR_3->sg_state + VAR_3->next_sgdma;

 VAR_10->sglist = VAR_4;
 VAR_10->sglen = VAR_5;
 VAR_10->next_sglist = 0;
 VAR_10->bytes_read = 0;
 VAR_10->len = VAR_6;
 VAR_10->queued_sglist = 0;
 VAR_10->csr = 0;
 VAR_10->callback = VAR_7;
 VAR_10->arg = VAR_8;

 VAR_3->next_sgdma = (VAR_3->next_sgdma + 1) % VAR_2;
 VAR_3->free_sgdma--;

 FUNC_2(&VAR_3->lock, VAR_9);

 FUNC_0(VAR_3);

 return 0;
}
