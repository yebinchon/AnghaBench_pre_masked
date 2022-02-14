
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u32 ;
struct sgdma_state {scalar_t__ next_sglist; void* arg; int (* callback ) (struct omap24xxcam_sgdma*,int ,void*) ;} ;
struct omap24xxcam_sgdma {int free_sgdma; int next_sgdma; int lock; struct sgdma_state* sg_state; int dma; } ;
typedef int (* sgdma_callback_t ) (struct omap24xxcam_sgdma*,int ,void*) ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct omap24xxcam_sgdma*,int ,void*) ;

void FUNC_6(struct omap24xxcam_sgdma *VAR_2)
{
 unsigned long VAR_3;
 int VAR_4;
 struct sgdma_state *VAR_5;
 u32 VAR_6 = VAR_0;


 FUNC_0(&VAR_2->dma, VAR_6);

 FUNC_2(&VAR_2->lock, VAR_3);

 if (VAR_2->free_sgdma < VAR_1) {
  VAR_4 = (VAR_2->next_sgdma + VAR_2->free_sgdma) % VAR_1;
  VAR_5 = VAR_2->sg_state + VAR_4;
  if (VAR_5->next_sglist != 0) {

   sgdma_callback_t VAR_7 = VAR_5->callback;
   void *VAR_8 = VAR_5->arg;
   VAR_2->free_sgdma++;
   if (VAR_7) {

    FUNC_3(&VAR_2->lock);
    (*VAR_7) (VAR_2, VAR_6, VAR_8);
    FUNC_1(&VAR_2->lock);
   }
  }
 }

 FUNC_4(&VAR_2->lock, VAR_3);
}
