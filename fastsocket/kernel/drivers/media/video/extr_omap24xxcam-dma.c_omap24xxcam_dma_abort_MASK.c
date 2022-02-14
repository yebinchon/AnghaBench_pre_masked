
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct omap24xxcam_dma {int next_dmach; int free_dmach; int lock; TYPE_1__* ch_state; int base; } ;
typedef int (* dma_callback_t ) (struct omap24xxcam_dma*,int ,void*) ;
struct TYPE_2__ {void* arg; int (* callback ) (struct omap24xxcam_dma*,int ,void*) ;} ;


 int VAR_0 ;
 int FUNC_0 (int ,int) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned long) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (struct omap24xxcam_dma*,int ,void*) ;

__attribute__((used)) static void FUNC_6(struct omap24xxcam_dma *VAR_1, u32 VAR_2)
{
 unsigned long VAR_3;
 int VAR_4, VAR_5, VAR_6;
 dma_callback_t VAR_7;
 void *VAR_8;

 FUNC_2(&VAR_1->lock, VAR_3);


 VAR_4 = (VAR_1->next_dmach + VAR_1->free_dmach) % VAR_0;
 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  FUNC_0(VAR_1->base, VAR_4);
  VAR_4 = (VAR_4 + 1) % VAR_0;
 }





 VAR_6 = VAR_1->free_dmach;
 while ((VAR_1->free_dmach < VAR_0) &&
        (VAR_6 < VAR_0)) {
  VAR_4 = (VAR_1->next_dmach + VAR_1->free_dmach)
   % VAR_0;
  VAR_7 = VAR_1->ch_state[VAR_4].callback;
  VAR_8 = VAR_1->ch_state[VAR_4].arg;
  VAR_1->free_dmach++;
  VAR_6++;
  if (VAR_7) {

   FUNC_3(&VAR_1->lock);
   (*VAR_7) (VAR_1, VAR_2, VAR_8);
   FUNC_1(&VAR_1->lock);
  }
 }

 FUNC_4(&VAR_1->lock, VAR_3);
}
