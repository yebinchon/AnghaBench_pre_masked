
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct omap24xxcam_dma {int free_dmach; int next_dmach; int lock; int base; TYPE_1__* ch_state; int dma_stop; } ;
typedef int dma_callback_t ;
typedef int dma_addr_t ;
struct TYPE_2__ {void* arg; int callback; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int ,int,int) ;
 int FUNC_2 (int ,int,int ,int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int *,unsigned long) ;

__attribute__((used)) static int FUNC_6(struct omap24xxcam_dma *VAR_2, dma_addr_t VAR_3,
     u32 VAR_4, dma_callback_t VAR_5, void *VAR_6)
{
 unsigned long VAR_7;
 int VAR_8;

 FUNC_4(&VAR_2->lock, VAR_7);

 if (!VAR_2->free_dmach || FUNC_0(&VAR_2->dma_stop)) {
  FUNC_5(&VAR_2->lock, VAR_7);
  return -VAR_0;
 }

 VAR_8 = VAR_2->next_dmach;

 VAR_2->ch_state[VAR_8].callback = VAR_5;
 VAR_2->ch_state[VAR_8].arg = VAR_6;

 FUNC_2(VAR_2->base, VAR_8, VAR_3, VAR_4);



 if (VAR_2->free_dmach < VAR_1) {

  FUNC_1(VAR_2->base, VAR_8,
       VAR_2->free_dmach);
 } else {



  FUNC_3(VAR_2->base, VAR_8);
 }

 VAR_2->next_dmach = (VAR_2->next_dmach + 1) % VAR_1;
 VAR_2->free_dmach--;

 FUNC_5(&VAR_2->lock, VAR_7);

 return 0;
}
