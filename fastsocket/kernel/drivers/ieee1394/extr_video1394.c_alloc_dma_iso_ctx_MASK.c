
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct ti_ohci {TYPE_1__* host; int dev; } ;
struct it_dma_prg {int dummy; } ;
struct TYPE_8__ {int context; } ;
struct dma_iso_ctx {int type; int channel; int num_desc; int frame_size; int buf_size; int last_buffer; int ctx; int nb_cmd; int left_size; unsigned int packet_size; int lock; void* next_buffer; void* last_used_cmd; void* buffer_time; void* buffer_prg_assignment; void* buffer_status; TYPE_4__* prg_reg; struct it_dma_prg** it_prg; scalar_t__ cmdPtr; scalar_t__ ctrlClear; scalar_t__ ctrlSet; struct dma_cmd** ir_prg; scalar_t__ ctxMatch; TYPE_2__ iso_tasklet; int dma; int waitq; int link; struct ti_ohci* ohci; } ;
struct dma_cmd {int dummy; } ;
struct TYPE_9__ {scalar_t__ kvirt; } ;
struct TYPE_7__ {int id; } ;


 int FUNC_0 (int ,char*,char*,int,int,int,int) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int) ;
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_3 (int ,int ,char*,...) ;
 scalar_t__ FUNC_4 (TYPE_4__*,int,int ) ;
 int FUNC_5 (TYPE_4__*) ;
 scalar_t__ FUNC_6 (int *,int,int ,int ) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (struct dma_iso_ctx*) ;
 int FUNC_9 (int *) ;
 TYPE_4__* FUNC_10 (int,int ) ;
 void* FUNC_11 (int,int ) ;
 int FUNC_12 (TYPE_2__*,int,int ,unsigned long) ;
 scalar_t__ FUNC_13 (struct ti_ohci*,TYPE_2__*) ;
 int FUNC_14 (int *) ;
 int VAR_12 ;
 int VAR_13 ;

__attribute__((used)) static struct dma_iso_ctx *
FUNC_15(struct ti_ohci *VAR_14, int VAR_15, int VAR_16,
    int VAR_17, int VAR_18, unsigned int VAR_19)
{
 struct dma_iso_ctx *VAR_20;
 int VAR_21;

 VAR_20 = FUNC_11(sizeof(*VAR_20), VAR_0);
 if (!VAR_20) {
  FUNC_3(VAR_1, VAR_14->host->id, "Failed to allocate dma_iso_ctx");
  return ((void*)0);
 }

 VAR_20->ohci = VAR_14;
 VAR_20->type = VAR_15;
 VAR_20->channel = VAR_18;
 VAR_20->num_desc = VAR_16;
 VAR_20->frame_size = VAR_17;
 VAR_20->buf_size = FUNC_2(VAR_17);
 VAR_20->last_buffer = -1;
 FUNC_1(&VAR_20->link);
 FUNC_9(&VAR_20->waitq);


 FUNC_7(&VAR_20->dma);

 if (FUNC_6(&VAR_20->dma, (VAR_20->num_desc - 1) * VAR_20->buf_size, VAR_14->dev,
        VAR_11)) {
  FUNC_3(VAR_1, VAR_14->host->id, "Failed to allocate dma buffer");
  FUNC_8(VAR_20);
  return ((void*)0);
 }

 if (VAR_15 == VAR_9)
  FUNC_12(&VAR_20->iso_tasklet, VAR_15,
       VAR_12,
       (unsigned long) VAR_20);
 else
  FUNC_12(&VAR_20->iso_tasklet, VAR_15,
       VAR_13,
       (unsigned long) VAR_20);

 if (FUNC_13(VAR_14, &VAR_20->iso_tasklet) < 0) {
  FUNC_3(VAR_1, VAR_14->host->id, "no free iso %s contexts",
        VAR_15 == VAR_9 ? "receive" : "transmit");
  FUNC_8(VAR_20);
  return ((void*)0);
 }
 VAR_20->ctx = VAR_20->iso_tasklet.context;

 VAR_20->prg_reg = FUNC_10(VAR_20->num_desc * sizeof(*VAR_20->prg_reg), VAR_0);
 if (!VAR_20->prg_reg) {
  FUNC_3(VAR_1, VAR_14->host->id, "Failed to allocate ir prg regs");
  FUNC_8(VAR_20);
  return ((void*)0);
 }

 for (VAR_21 = 0; VAR_21 < VAR_20->num_desc; VAR_21++)
  FUNC_5(&VAR_20->prg_reg[VAR_21]);

 if (VAR_15 == VAR_9) {
  VAR_20->ctrlSet = VAR_4+32*VAR_20->ctx;
  VAR_20->ctrlClear = VAR_3+32*VAR_20->ctx;
  VAR_20->cmdPtr = VAR_2+32*VAR_20->ctx;
  VAR_20->ctxMatch = VAR_5+32*VAR_20->ctx;

  VAR_20->ir_prg = FUNC_11(VAR_20->num_desc * sizeof(*VAR_20->ir_prg),
        VAR_0);

  if (!VAR_20->ir_prg) {
   FUNC_3(VAR_1, VAR_14->host->id, "Failed to allocate dma ir prg");
   FUNC_8(VAR_20);
   return ((void*)0);
  }

  VAR_20->nb_cmd = VAR_20->buf_size / VAR_10 + 1;
  VAR_20->left_size = (VAR_20->frame_size % VAR_10) ?
   VAR_20->frame_size % VAR_10 : VAR_10;

  for (VAR_21 = 0;VAR_21 < VAR_20->num_desc; VAR_21++) {
   if (FUNC_4(&VAR_20->prg_reg[VAR_21], VAR_20->nb_cmd *
        sizeof(struct dma_cmd), VAR_14->dev)) {
    FUNC_3(VAR_1, VAR_14->host->id, "Failed to allocate dma ir prg");
    FUNC_8(VAR_20);
    return ((void*)0);
   }
   VAR_20->ir_prg[VAR_21] = (struct dma_cmd *)VAR_20->prg_reg[VAR_21].kvirt;
  }

 } else {
  VAR_20->ctrlSet = VAR_8+16*VAR_20->ctx;
  VAR_20->ctrlClear = VAR_7+16*VAR_20->ctx;
  VAR_20->cmdPtr = VAR_6+16*VAR_20->ctx;

  VAR_20->it_prg = FUNC_11(VAR_20->num_desc * sizeof(*VAR_20->it_prg),
        VAR_0);

  if (!VAR_20->it_prg) {
   FUNC_3(VAR_1, VAR_14->host->id,
         "Failed to allocate dma it prg");
   FUNC_8(VAR_20);
   return ((void*)0);
  }

  VAR_20->packet_size = VAR_19;

  if (VAR_10 % VAR_19 || VAR_19>4096) {
   FUNC_3(VAR_1, VAR_14->host->id,
         "Packet size %d (page_size: %ld) "
         "not yet supported\n",
         VAR_19, VAR_10);
   FUNC_8(VAR_20);
   return ((void*)0);
  }

  VAR_20->nb_cmd = VAR_20->frame_size / VAR_20->packet_size;
  if (VAR_20->frame_size % VAR_20->packet_size) {
   VAR_20->nb_cmd++;
   VAR_20->left_size = VAR_20->frame_size % VAR_20->packet_size;
  } else
   VAR_20->left_size = VAR_20->packet_size;

  for (VAR_21 = 0; VAR_21 < VAR_20->num_desc; VAR_21++) {
   if (FUNC_4(&VAR_20->prg_reg[VAR_21], VAR_20->nb_cmd *
      sizeof(struct it_dma_prg), VAR_14->dev)) {
    FUNC_3(VAR_1, VAR_14->host->id, "Failed to allocate dma it prg");
    FUNC_8(VAR_20);
    return ((void*)0);
   }
   VAR_20->it_prg[VAR_21] = (struct it_dma_prg *)VAR_20->prg_reg[VAR_21].kvirt;
  }
 }

 VAR_20->buffer_status =
     FUNC_11(VAR_20->num_desc * sizeof(*VAR_20->buffer_status), VAR_0);
 VAR_20->buffer_prg_assignment =
     FUNC_11(VAR_20->num_desc * sizeof(*VAR_20->buffer_prg_assignment), VAR_0);
 VAR_20->buffer_time =
     FUNC_11(VAR_20->num_desc * sizeof(*VAR_20->buffer_time), VAR_0);
 VAR_20->last_used_cmd =
     FUNC_11(VAR_20->num_desc * sizeof(*VAR_20->last_used_cmd), VAR_0);
 VAR_20->next_buffer =
     FUNC_11(VAR_20->num_desc * sizeof(*VAR_20->next_buffer), VAR_0);

 if (!VAR_20->buffer_status || !VAR_20->buffer_prg_assignment || !VAR_20->buffer_time ||
     !VAR_20->last_used_cmd || !VAR_20->next_buffer) {
  FUNC_3(VAR_1, VAR_14->host->id,
        "Failed to allocate dma_iso_ctx member");
  FUNC_8(VAR_20);
  return ((void*)0);
 }

        FUNC_14(&VAR_20->lock);

 FUNC_0(VAR_14->host->id, "Iso %s DMA: %d buffers "
       "of size %d allocated for a frame size %d, each with %d prgs",
       (VAR_15 == VAR_9) ? "receive" : "transmit",
       VAR_20->num_desc - 1, VAR_20->buf_size, VAR_20->frame_size, VAR_20->nb_cmd);

 return VAR_20;
}
