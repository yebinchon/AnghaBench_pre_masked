
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct omap24xxcam_dma {unsigned long base; int free_dmach; TYPE_1__* ch_state; scalar_t__ next_dmach; int lock; } ;
struct TYPE_2__ {int * arg; int * callback; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

__attribute__((used)) static void FUNC_1(struct omap24xxcam_dma *VAR_1,
     unsigned long VAR_2)
{
 int VAR_3;


 FUNC_0(&VAR_1->lock);
 VAR_1->base = VAR_2;
 VAR_1->free_dmach = VAR_0;
 VAR_1->next_dmach = 0;
 for (VAR_3 = 0; VAR_3 < VAR_0; VAR_3++) {
  VAR_1->ch_state[VAR_3].callback = ((void*)0);
  VAR_1->ch_state[VAR_3].arg = ((void*)0);
 }
}
