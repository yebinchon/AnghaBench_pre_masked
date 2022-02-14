
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pnx4008_dma_ll {unsigned long next_dma; int ch_ctrl; struct pnx4008_dma_ll* next; scalar_t__ dest_addr; scalar_t__ src_addr; } ;
struct pnx4008_dma_config {int ch_ctrl; int is_ll; unsigned long ll_dma; scalar_t__ dest_addr; scalar_t__ src_addr; struct pnx4008_dma_ll* ll; } ;
struct pnx4008_dma_ch_ctrl {int tr_size; int swidth; int dwidth; scalar_t__ di; scalar_t__ si; } ;





 void* FUNC_0 (unsigned long*) ;

void FUNC_1(struct pnx4008_dma_config * VAR_0,
      struct pnx4008_dma_ch_ctrl * VAR_1)
{
 int VAR_2 = VAR_1->tr_size, VAR_3 = 0;
 int VAR_4 = VAR_2;
 int VAR_5, VAR_6, VAR_7 = 1;

 switch (VAR_1->swidth) {
 case 130:
  VAR_5 = 1;
  break;
 case 129:
  VAR_5 = 2;
  break;
 case 128:
  VAR_5 = 4;
  break;
 default:
  return;
 }

 switch (VAR_1->dwidth) {
 case 130:
  VAR_6 = 1;
  break;
 case 129:
  VAR_6 = 2;
  break;
 case 128:
  VAR_6 = 4;
  break;
 default:
  return;
 }

 while (VAR_2 > 0x7FF) {
  VAR_3++;
  VAR_2 = (VAR_1->tr_size + VAR_3) / (VAR_3 + 1);
 }
 if (VAR_3 != 0) {
  struct pnx4008_dma_ll *VAR_8 = ((void*)0);
  VAR_0->ch_ctrl &= ~0x7ff;
  VAR_0->ch_ctrl |= VAR_2;
  if (!VAR_0->is_ll) {
   VAR_0->is_ll = 1;
   while (VAR_3) {
    if (!VAR_8) {
     VAR_0->ll =
         FUNC_0(&VAR_0->
           ll_dma);
     VAR_8 = VAR_0->ll;
    } else {
     VAR_8->next =
         FUNC_0(&VAR_8->
           next_dma);
     VAR_8 = VAR_8->next;
    }

    if (VAR_1->si)
     VAR_8->src_addr =
         VAR_0->src_addr +
         VAR_5 * VAR_2 * VAR_7;
    else
     VAR_8->src_addr = VAR_0->src_addr;
    if (VAR_1->di)
     VAR_8->dest_addr =
         VAR_0->dest_addr +
         VAR_6 * VAR_2 * VAR_7;
    else
     VAR_8->dest_addr = VAR_0->dest_addr;
    VAR_8->ch_ctrl = VAR_0->ch_ctrl & 0x7fffffff;
    VAR_8->next_dma = 0;
    VAR_8->next = ((void*)0);
    VAR_3--;
    VAR_7++;
   }
  } else {
   struct pnx4008_dma_ll *VAR_9 = VAR_0->ll;
   unsigned long VAR_10 = VAR_0->ll_dma;
   while (VAR_3) {
    if (!VAR_8) {
     VAR_0->ll =
         FUNC_0(&VAR_0->
           ll_dma);
     VAR_8 = VAR_0->ll;
    } else {
     VAR_8->next =
         FUNC_0(&VAR_8->
           next_dma);
     VAR_8 = VAR_8->next;
    }

    if (VAR_1->si)
     VAR_8->src_addr =
         VAR_0->src_addr +
         VAR_5 * VAR_2 * VAR_7;
    else
     VAR_8->src_addr = VAR_0->src_addr;
    if (VAR_1->di)
     VAR_8->dest_addr =
         VAR_0->dest_addr +
         VAR_6 * VAR_2 * VAR_7;
    else
     VAR_8->dest_addr = VAR_0->dest_addr;
    VAR_8->ch_ctrl = VAR_0->ch_ctrl & 0x7fffffff;
    VAR_8->next_dma = 0;
    VAR_8->next = ((void*)0);
    VAR_3--;
    VAR_7++;
   }
   VAR_8->next_dma = VAR_10;
   VAR_8->next = VAR_9;
  }

  VAR_8->ch_ctrl = VAR_0->ch_ctrl & (~0x7ff);
  VAR_8->ch_ctrl |= VAR_4 - VAR_2 * (VAR_7 - 1);
  VAR_0->ch_ctrl &= 0x7fffffff;
 }
}
