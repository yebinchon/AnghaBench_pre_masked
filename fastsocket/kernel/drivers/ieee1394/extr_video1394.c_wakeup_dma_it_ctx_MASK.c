
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct ti_ohci {int dummy; } ;
struct dma_iso_ctx {int num_desc; size_t* last_used_cmd; int* next_buffer; size_t* buffer_prg_assignment; int waitq; int lock; int * buffer_status; TYPE_2__** it_prg; struct ti_ohci* ohci; } ;
struct TYPE_3__ {int status; } ;
struct TYPE_4__ {TYPE_1__ end; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct ti_ohci*,struct dma_iso_ctx*,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_1)
{
 struct dma_iso_ctx *VAR_2 = (struct dma_iso_ctx *) VAR_1;
 struct ti_ohci *VAR_3 = VAR_2->ohci;
 int VAR_4;

 FUNC_2(&VAR_2->lock);

 for (VAR_4 = 0; VAR_4 < VAR_2->num_desc; VAR_4++) {
  if (VAR_2->it_prg[VAR_4][VAR_2->last_used_cmd[VAR_4]].end.status &
      FUNC_0(0xFFFF0000)) {
   int VAR_5 = VAR_2->next_buffer[VAR_4];
   FUNC_1(VAR_3, VAR_2, VAR_5);
   VAR_2->it_prg[VAR_4][VAR_2->last_used_cmd[VAR_4]].end.status = 0;
   VAR_2->buffer_status[VAR_2->buffer_prg_assignment[VAR_4]] = VAR_0;
  }
 }

 FUNC_3(&VAR_2->lock);

 if (FUNC_4(&VAR_2->waitq))
  FUNC_5(&VAR_2->waitq);
}
