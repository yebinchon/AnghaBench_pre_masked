
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_ohci {int dev; } ;
struct dma_rcv_ctx {int type; int ctx; int num_desc; int buf_size; int split_buf_size; int task; scalar_t__ cmdPtr; scalar_t__ ctrlClear; scalar_t__ ctrlSet; int lock; int ** prg_cpu; int * prg_bus; int * prg_pool; int ** buf_cpu; int * buf_bus; int * spb; struct ti_ohci* ohci; } ;
struct dma_cmd {int dummy; } ;
typedef enum context_type { ____Placeholder_context_type } context_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_7 ;
 int FUNC_1 (struct dma_rcv_ctx*) ;
 int * FUNC_2 (int,int ) ;
 void* FUNC_3 (int,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int * FUNC_5 (int ,int,int *) ;
 int * FUNC_6 (int *,int ,int *) ;
 int * FUNC_7 (char*,int ,int,int,int ) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (char*,char*,...) ;
 int FUNC_10 (int *,int ,unsigned long) ;

__attribute__((used)) static int
FUNC_11(struct ti_ohci *VAR_8, struct dma_rcv_ctx *VAR_9,
    enum context_type VAR_10, int VAR_11, int VAR_12,
    int VAR_13, int VAR_14, int VAR_15)
{
 int VAR_16, VAR_17;
 static int VAR_18;
 static char VAR_19[20];

 VAR_9->ohci = VAR_8;
 VAR_9->type = VAR_10;
 VAR_9->ctx = VAR_11;

 VAR_9->num_desc = VAR_12;
 VAR_9->buf_size = VAR_13;
 VAR_9->split_buf_size = VAR_14;

 VAR_9->ctrlSet = 0;
 VAR_9->ctrlClear = 0;
 VAR_9->cmdPtr = 0;

 VAR_9->buf_cpu = FUNC_3(VAR_9->num_desc * sizeof(*VAR_9->buf_cpu), VAR_1);
 VAR_9->buf_bus = FUNC_3(VAR_9->num_desc * sizeof(*VAR_9->buf_bus), VAR_1);

 if (VAR_9->buf_cpu == ((void*)0) || VAR_9->buf_bus == ((void*)0)) {
  FUNC_0(VAR_3, "Failed to allocate %s", "DMA buffer");
  FUNC_1(VAR_9);
  return -VAR_0;
 }

 VAR_9->prg_cpu = FUNC_3(VAR_9->num_desc * sizeof(*VAR_9->prg_cpu), VAR_1);
 VAR_9->prg_bus = FUNC_3(VAR_9->num_desc * sizeof(*VAR_9->prg_bus), VAR_1);

 if (VAR_9->prg_cpu == ((void*)0) || VAR_9->prg_bus == ((void*)0)) {
  FUNC_0(VAR_3, "Failed to allocate %s", "DMA prg");
  FUNC_1(VAR_9);
  return -VAR_0;
 }

 VAR_9->spb = FUNC_2(VAR_9->split_buf_size, VAR_1);

 if (VAR_9->spb == ((void*)0)) {
  FUNC_0(VAR_3, "Failed to allocate %s", "split buffer");
  FUNC_1(VAR_9);
  return -VAR_0;
 }

 VAR_17 = FUNC_9(VAR_19, "ohci1394_rcv_prg");
 FUNC_9(VAR_19+VAR_17, "%d", VAR_18);
 VAR_9->prg_pool = FUNC_7(VAR_19, VAR_8->dev,
    sizeof(struct dma_cmd), 4, 0);
 if(VAR_9->prg_pool == ((void*)0))
 {
  FUNC_0(VAR_3, "pci_pool_create failed for %s", VAR_19);
  FUNC_1(VAR_9);
  return -VAR_0;
 }
 VAR_18++;

 for (VAR_16=0; VAR_16<VAR_9->num_desc; VAR_16++) {
  VAR_9->buf_cpu[VAR_16] = FUNC_5(VAR_8->dev,
           VAR_9->buf_size,
           VAR_9->buf_bus+VAR_16);

  if (VAR_9->buf_cpu[VAR_16] != ((void*)0)) {
   FUNC_4(VAR_9->buf_cpu[VAR_16], 0, VAR_9->buf_size);
  } else {
   FUNC_0(VAR_3,
         "Failed to allocate %s", "DMA buffer");
   FUNC_1(VAR_9);
   return -VAR_0;
  }

  VAR_9->prg_cpu[VAR_16] = FUNC_6(VAR_9->prg_pool, VAR_2, VAR_9->prg_bus+VAR_16);

                if (VAR_9->prg_cpu[VAR_16] != ((void*)0)) {
                        FUNC_4(VAR_9->prg_cpu[VAR_16], 0, sizeof(struct dma_cmd));
  } else {
   FUNC_0(VAR_3,
         "Failed to allocate %s", "DMA prg");
   FUNC_1(VAR_9);
   return -VAR_0;
  }
 }

        FUNC_8(&VAR_9->lock);

 VAR_9->ctrlSet = VAR_15 + VAR_6;
 VAR_9->ctrlClear = VAR_15 + VAR_5;
 VAR_9->cmdPtr = VAR_15 + VAR_4;

 FUNC_10(&VAR_9->task, VAR_7, (unsigned long) VAR_9);
 return 0;
}
