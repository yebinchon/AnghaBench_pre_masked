
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ti_ohci {int dev; } ;
struct dma_trm_ctx {int type; int ctx; int num_desc; int task; scalar_t__ cmdPtr; scalar_t__ ctrlClear; scalar_t__ ctrlSet; int lock; int ** prg_cpu; int * prg_bus; int * prg_pool; struct ti_ohci* ohci; } ;
struct at_dma_prg {int dummy; } ;
typedef enum context_type { ____Placeholder_context_type } context_type ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int ,char*,char*) ;
 int VAR_6 ;
 int FUNC_1 (struct dma_trm_ctx*) ;
 void* FUNC_2 (int,int ) ;
 int FUNC_3 (int *,int ,int) ;
 int * FUNC_4 (int *,int ,int *) ;
 int * FUNC_5 (char*,int ,int,int,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (char*,char*,...) ;
 int FUNC_8 (int *,int ,unsigned long) ;

__attribute__((used)) static int
FUNC_9(struct ti_ohci *VAR_7, struct dma_trm_ctx *VAR_8,
    enum context_type VAR_9, int VAR_10, int VAR_11,
    int VAR_12)
{
 int VAR_13, VAR_14;
 static char VAR_15[20];
 static int VAR_16=0;

 VAR_8->ohci = VAR_7;
 VAR_8->type = VAR_9;
 VAR_8->ctx = VAR_10;
 VAR_8->num_desc = VAR_11;
 VAR_8->ctrlSet = 0;
 VAR_8->ctrlClear = 0;
 VAR_8->cmdPtr = 0;

 VAR_8->prg_cpu = FUNC_2(VAR_8->num_desc * sizeof(*VAR_8->prg_cpu), VAR_1);
 VAR_8->prg_bus = FUNC_2(VAR_8->num_desc * sizeof(*VAR_8->prg_bus), VAR_1);

 if (VAR_8->prg_cpu == ((void*)0) || VAR_8->prg_bus == ((void*)0)) {
  FUNC_0(VAR_2, "Failed to allocate %s", "AT DMA prg");
  FUNC_1(VAR_8);
  return -VAR_0;
 }

 VAR_14 = FUNC_7(VAR_15, "ohci1394_trm_prg");
 FUNC_7(VAR_15+VAR_14, "%d", VAR_16);
 VAR_8->prg_pool = FUNC_5(VAR_15, VAR_7->dev,
    sizeof(struct at_dma_prg), 4, 0);
 if (VAR_8->prg_pool == ((void*)0)) {
  FUNC_0(VAR_2, "pci_pool_create failed for %s", VAR_15);
  FUNC_1(VAR_8);
  return -VAR_0;
 }
 VAR_16++;

 for (VAR_13 = 0; VAR_13 < VAR_8->num_desc; VAR_13++) {
  VAR_8->prg_cpu[VAR_13] = FUNC_4(VAR_8->prg_pool, VAR_1, VAR_8->prg_bus+VAR_13);

                if (VAR_8->prg_cpu[VAR_13] != ((void*)0)) {
                        FUNC_3(VAR_8->prg_cpu[VAR_13], 0, sizeof(struct at_dma_prg));
  } else {
   FUNC_0(VAR_2,
         "Failed to allocate %s", "AT DMA prg");
   FUNC_1(VAR_8);
   return -VAR_0;
  }
 }

        FUNC_6(&VAR_8->lock);


 VAR_8->ctrlSet = VAR_12 + VAR_5;
 VAR_8->ctrlClear = VAR_12 + VAR_4;
 VAR_8->cmdPtr = VAR_12 + VAR_3;
 FUNC_8(&VAR_8->task, VAR_6, (unsigned long)VAR_8);
 return 0;
}
