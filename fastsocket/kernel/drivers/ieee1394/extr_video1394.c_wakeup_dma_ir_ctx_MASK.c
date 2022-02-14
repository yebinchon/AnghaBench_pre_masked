
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct dma_iso_ctx {int num_desc; int nb_cmd; size_t* buffer_prg_assignment; int buf_size; int waitq; int lock; int dma; int * buffer_time; int * buffer_status; TYPE_1__** ir_prg; } ;
struct TYPE_2__ {int status; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *,int,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dma_iso_ctx*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(unsigned long VAR_1)
{
 struct dma_iso_ctx *VAR_2 = (struct dma_iso_ctx *) VAR_1;
 int VAR_3;

 FUNC_4(&VAR_2->lock);

 for (VAR_3 = 0; VAR_3 < VAR_2->num_desc; VAR_3++) {
  if (VAR_2->ir_prg[VAR_3][VAR_2->nb_cmd-1].status & FUNC_0(0xFFFF0000)) {
   FUNC_3(VAR_2, VAR_3);
   VAR_2->buffer_status[VAR_2->buffer_prg_assignment[VAR_3]] = VAR_0;
   FUNC_2(&VAR_2->buffer_time[VAR_2->buffer_prg_assignment[VAR_3]]);
   FUNC_1(&VAR_2->dma,
    VAR_2->buffer_prg_assignment[VAR_3] * VAR_2->buf_size,
    VAR_2->buf_size);
  }
 }

 FUNC_5(&VAR_2->lock);

 if (FUNC_6(&VAR_2->waitq))
  FUNC_7(&VAR_2->waitq);
}
