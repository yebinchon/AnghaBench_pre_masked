
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct ti_ohci {int dev; } ;
struct TYPE_7__ {int context; } ;
struct TYPE_8__ {scalar_t__ kvirt; } ;
struct ohci_iso_recv {int task_active; scalar_t__ dma_mode; int buf_stride; int nblocks; int block_irq_interval; struct ti_ohci* ohci; scalar_t__ ContextMatch; scalar_t__ CommandPtr; scalar_t__ ContextControlClear; scalar_t__ ContextControlSet; TYPE_2__ task; TYPE_4__ prog; struct dma_cmd* block; scalar_t__ dma_offset; scalar_t__ block_dma; scalar_t__ released_bytes; scalar_t__ block_reader; } ;
struct hpsb_iso {int irq_interval; scalar_t__ dma_mode; int channel; int buf_size; int buf_packets; struct ohci_iso_recv* hostdata; TYPE_1__* host; } ;
struct dma_cmd {int dummy; } ;
struct TYPE_6__ {struct ti_ohci* hostdata; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (char*,...) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 int VAR_15 ;
 scalar_t__ FUNC_1 (TYPE_4__*,int,int ) ;
 int FUNC_2 (TYPE_4__*) ;
 struct ohci_iso_recv* FUNC_3 (int,int ) ;
 int FUNC_4 (TYPE_2__*,int ,int ,unsigned long) ;
 scalar_t__ FUNC_5 (struct ti_ohci*,TYPE_2__*) ;
 int FUNC_6 (struct hpsb_iso*) ;
 int FUNC_7 (struct hpsb_iso*) ;
 int VAR_16 ;
 int FUNC_8 (struct ti_ohci*,int ,int) ;

__attribute__((used)) static int FUNC_9(struct hpsb_iso *VAR_17)
{
 struct ti_ohci *VAR_18 = VAR_17->host->hostdata;
 struct ohci_iso_recv *VAR_19;
 int VAR_20;
 int VAR_21 = -VAR_2;

 VAR_19 = FUNC_3(sizeof(*VAR_19), VAR_3);
 if (!VAR_19)
  return -VAR_2;

 VAR_17->hostdata = VAR_19;
 VAR_19->ohci = VAR_18;
 VAR_19->task_active = 0;
 FUNC_2(&VAR_19->prog);
 VAR_19->block = ((void*)0);




 if (((VAR_17->irq_interval == 1 && VAR_17->dma_mode == VAR_4) ||
      VAR_17->dma_mode == VAR_5) && VAR_17->channel != -1) {
  VAR_19->dma_mode = VAR_14;
 } else {
  VAR_19->dma_mode = VAR_0;
 }



 if (VAR_19->dma_mode == VAR_0) {
  VAR_19->buf_stride = VAR_15;


  VAR_19->nblocks = VAR_17->buf_size/VAR_15 - 1;
  if (VAR_19->nblocks < 3) {
   FUNC_0("ohci_iso_recv_init: DMA buffer too small");
   goto err;
  }


  if (VAR_17->irq_interval == 1)
   VAR_19->block_irq_interval = 1;
  else
   VAR_19->block_irq_interval = VAR_17->irq_interval *
       ((VAR_19->nblocks+1)/VAR_17->buf_packets);
  if (VAR_19->block_irq_interval*4 > VAR_19->nblocks)
   VAR_19->block_irq_interval = VAR_19->nblocks/4;
  if (VAR_19->block_irq_interval < 1)
   VAR_19->block_irq_interval = 1;

 } else {
  int VAR_22;

  VAR_19->nblocks = VAR_17->buf_packets;
  VAR_19->block_irq_interval = VAR_17->irq_interval;
  if (VAR_19->block_irq_interval * 4 > VAR_17->buf_packets)
   VAR_19->block_irq_interval = VAR_17->buf_packets / 4;
  if (VAR_19->block_irq_interval < 1)
  VAR_19->block_irq_interval = 1;




  VAR_22 = VAR_17->buf_size / VAR_17->buf_packets;

  for (VAR_19->buf_stride = 8; VAR_19->buf_stride < VAR_22;
      VAR_19->buf_stride *= 2);

  if (VAR_19->buf_stride*VAR_17->buf_packets > VAR_17->buf_size ||
     VAR_19->buf_stride > VAR_15) {

   FUNC_0("ohci_iso_recv_init: problem choosing a buffer stride");
   goto err;
  }
 }

 VAR_19->block_reader = 0;
 VAR_19->released_bytes = 0;
 VAR_19->block_dma = 0;
 VAR_19->dma_offset = 0;


 if (FUNC_1(&VAR_19->prog,
     sizeof(struct dma_cmd) * VAR_19->nblocks,
     VAR_19->ohci->dev))
  goto err;

 VAR_19->block = (struct dma_cmd*) VAR_19->prog.kvirt;

 FUNC_4(&VAR_19->task,
      VAR_17->channel == -1 ? VAR_12 :
                           VAR_13,
      VAR_16, (unsigned long) VAR_17);

 if (FUNC_5(VAR_19->ohci, &VAR_19->task) < 0) {
  VAR_21 = -VAR_1;
  goto err;
 }

 VAR_19->task_active = 1;


 VAR_20 = VAR_19->task.context;
 VAR_19->ContextControlSet = VAR_10 + 32 * VAR_20;
 VAR_19->ContextControlClear = VAR_9 + 32 * VAR_20;
 VAR_19->CommandPtr = VAR_8 + 32 * VAR_20;
 VAR_19->ContextMatch = VAR_11 + 32 * VAR_20;

 if (VAR_17->channel == -1) {

  FUNC_8(VAR_19->ohci, VAR_6, 0xFFFFFFFF);
  FUNC_8(VAR_19->ohci, VAR_7, 0xFFFFFFFF);
 }


 FUNC_6(VAR_17);

 FUNC_0("ohci_iso_recv_init: %s mode, DMA buffer is %lu pages"
        " (%u bytes), using %u blocks, buf_stride %u, block_irq_interval %d",
        VAR_19->dma_mode == VAR_0 ?
        "buffer-fill" : "packet-per-buffer",
        VAR_17->buf_size/VAR_15, VAR_17->buf_size,
        VAR_19->nblocks, VAR_19->buf_stride, VAR_19->block_irq_interval);

 return 0;

err:
 FUNC_7(VAR_17);
 return VAR_21;
}
