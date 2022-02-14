
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sgdma_state {scalar_t__ next_sglist; scalar_t__ sglen; int const csr; unsigned int len; unsigned int bytes_read; int queued_sglist; struct scatterlist* sglist; } ;
struct scatterlist {int dummy; } ;
struct omap24xxcam_sgdma {int free_sgdma; int next_sgdma; int lock; int reset_timer; int dma; struct sgdma_state* sg_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 int VAR_6 ;
 unsigned long VAR_7 ;
 int FUNC_0 (int *,unsigned long) ;
 scalar_t__ FUNC_1 (int *,int ,unsigned int,int ,void*) ;
 int VAR_8 ;
 int FUNC_2 (struct scatterlist const*) ;
 unsigned int FUNC_3 (struct scatterlist const*) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

void FUNC_6(struct omap24xxcam_sgdma *VAR_9)
{
 unsigned long VAR_10;
 int VAR_11, VAR_12;
 struct sgdma_state *VAR_13;
 const u32 VAR_14 = VAR_1
  | VAR_3 | VAR_2
  | VAR_4 | VAR_0;

 FUNC_4(&VAR_9->lock, VAR_10);

 VAR_11 = VAR_6 - VAR_9->free_sgdma;
 VAR_12 = (VAR_9->next_sgdma + VAR_9->free_sgdma) % VAR_6;
 while (VAR_11 > 0) {
  VAR_13 = VAR_9->sg_state + VAR_12;
  while ((VAR_13->next_sglist < VAR_13->sglen) &&
         !(VAR_13->csr & VAR_14)) {
   const struct scatterlist *VAR_15;
   unsigned int VAR_16;

   VAR_15 = VAR_13->sglist + VAR_13->next_sglist;

   if (VAR_13->next_sglist + 1 == VAR_13->sglen) {




    VAR_16 = VAR_13->len - VAR_13->bytes_read;
   } else {
    VAR_16 = FUNC_3(VAR_15);
   }

   if (FUNC_1(&VAR_9->dma,
        FUNC_2(VAR_15),
        VAR_16,
        VAR_8,
        (void *)VAR_12)) {

    FUNC_5(&VAR_9->lock, VAR_10);
    return;
   } else {
    unsigned long VAR_17;

    VAR_13->next_sglist++;
    VAR_13->bytes_read += VAR_16;
    VAR_13->queued_sglist++;


    VAR_17 = VAR_7 + VAR_5;
    FUNC_0(&VAR_9->reset_timer, VAR_17);
   }
  }
  VAR_11--;
  VAR_12 = (VAR_12 + 1) % VAR_6;
 }

 FUNC_5(&VAR_9->lock, VAR_10);
}
