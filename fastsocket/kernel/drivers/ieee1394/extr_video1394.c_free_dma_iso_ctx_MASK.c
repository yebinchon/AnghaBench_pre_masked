
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * next; } ;
struct TYPE_9__ {TYPE_2__ link; } ;
struct dma_iso_ctx {int num_desc; int link; struct dma_iso_ctx* next_buffer; struct dma_iso_ctx* last_used_cmd; struct dma_iso_ctx* buffer_time; struct dma_iso_ctx* buffer_prg_assignment; struct dma_iso_ctx* buffer_status; struct dma_iso_ctx* it_prg; struct dma_iso_ctx* ir_prg; struct dma_iso_ctx* prg_reg; int dma; TYPE_4__ iso_tasklet; TYPE_3__* ohci; int ctrlClear; int ctx; } ;
struct TYPE_8__ {TYPE_1__* host; } ;
struct TYPE_6__ {int id; } ;


 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (struct dma_iso_ctx*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct dma_iso_ctx*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (TYPE_3__*,int ,int *) ;
 int FUNC_6 (TYPE_3__*,TYPE_4__*) ;

__attribute__((used)) static int FUNC_7(struct dma_iso_ctx *VAR_0)
{
 int VAR_1;

 FUNC_0(VAR_0->ohci->host->id, "Freeing dma_iso_ctx %d", VAR_0->ctx);

 FUNC_5(VAR_0->ohci, VAR_0->ctrlClear, ((void*)0));
 if (VAR_0->iso_tasklet.link.next != ((void*)0))
  FUNC_6(VAR_0->ohci, &VAR_0->iso_tasklet);

 FUNC_2(&VAR_0->dma);

 if (VAR_0->prg_reg) {
  for (VAR_1 = 0; VAR_1 < VAR_0->num_desc; VAR_1++)
   FUNC_1(&VAR_0->prg_reg[VAR_1]);
  FUNC_3(VAR_0->prg_reg);
 }

 FUNC_3(VAR_0->ir_prg);
 FUNC_3(VAR_0->it_prg);
 FUNC_3(VAR_0->buffer_status);
 FUNC_3(VAR_0->buffer_prg_assignment);
 FUNC_3(VAR_0->buffer_time);
 FUNC_3(VAR_0->last_used_cmd);
 FUNC_3(VAR_0->next_buffer);
 FUNC_4(&VAR_0->link);
 FUNC_3(VAR_0);

 return 0;
}
