
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct stmp3xxx_dma_descriptor {int handle; TYPE_1__* command; struct stmp3xxx_dma_descriptor* next_descr; } ;
struct stmp37xx_circ_dma_chain {unsigned int total_count; unsigned int free_count; int channel; int bus; scalar_t__ cooked_count; scalar_t__ active_count; scalar_t__ cooked_index; scalar_t__ active_index; scalar_t__ free_index; struct stmp3xxx_dma_descriptor* chain; } ;
struct TYPE_2__ {int next; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int,struct stmp3xxx_dma_descriptor*) ;
 int FUNC_4 (int,struct stmp3xxx_dma_descriptor*) ;

int FUNC_5(int VAR_0, struct stmp37xx_circ_dma_chain *VAR_1,
       struct stmp3xxx_dma_descriptor VAR_2[],
       unsigned VAR_3)
{
 int VAR_4;
 int VAR_5 = 0;

 if (VAR_3 == 0)
  return VAR_5;

 for (VAR_4 = 0; VAR_4 < VAR_3; VAR_4++) {
  VAR_5 = FUNC_3(VAR_0, &VAR_2[VAR_4]);
  if (VAR_5) {
   FUNC_2(VAR_5);




   if (VAR_4) {
    do {
     FUNC_4(VAR_0,
          &VAR_2
          [VAR_4]);
    } while (VAR_4-- > 0);
   }
   return VAR_5;
  }


  if (VAR_4 > 0) {
   VAR_2[VAR_4 - 1].next_descr = &VAR_2[VAR_4];
   VAR_2[VAR_4 - 1].command->next =
      VAR_2[VAR_4].handle;
  }
 }


 VAR_2[VAR_3 - 1].next_descr = &VAR_2[0];
 VAR_2[VAR_3 - 1].command->next = VAR_2[0].handle;

 VAR_1->total_count = VAR_3;
 VAR_1->chain = VAR_2;
 VAR_1->free_index = 0;
 VAR_1->active_index = 0;
 VAR_1->cooked_index = 0;
 VAR_1->free_count = VAR_3;
 VAR_1->active_count = 0;
 VAR_1->cooked_count = 0;
 VAR_1->bus = FUNC_0(VAR_0);
 VAR_1->channel = FUNC_1(VAR_0);
 return VAR_5;
}
