
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ti_ohci {int dummy; } ;
struct TYPE_2__ {int context; } ;
struct ohci_iso_recv {scalar_t__ dma_mode; size_t block_dma; int ContextControlSet; struct ti_ohci* ohci; TYPE_1__ task; int CommandPtr; int prog; int ContextMatch; struct dma_cmd* block; int ContextControlClear; } ;
struct hpsb_iso {int channel; struct ohci_iso_recv* hostdata; } ;
struct dma_cmd {int control; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 () ;
 int FUNC_4 (struct ti_ohci*,int ) ;
 int FUNC_5 (struct ti_ohci*,int ,int) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct hpsb_iso *VAR_5, int VAR_6, int VAR_7, int VAR_8)
{
 struct ohci_iso_recv *VAR_9 = VAR_5->hostdata;
 struct ti_ohci *VAR_10 = VAR_9->ohci;
 u32 VAR_11, VAR_12;

 FUNC_5(VAR_9->ohci, VAR_9->ContextControlClear, 0xFFFFFFFF);
 FUNC_6();


 VAR_11 = (1 << 30);

 if (VAR_9->dma_mode == VAR_0)
  VAR_11 |= (1 << 31);

 FUNC_5(VAR_9->ohci, VAR_9->ContextControlSet, VAR_11);


 VAR_12 = VAR_7 << 28;

 if (VAR_5->channel == -1) {

  FUNC_5(VAR_9->ohci, VAR_9->ContextControlSet, (1 << 28));
 } else {

  VAR_12 |= VAR_5->channel;
 }

 if (VAR_6 != -1) {
  u32 VAR_13;


  FUNC_5(VAR_9->ohci, VAR_9->ContextControlSet, (1 << 29));


  VAR_6 &= 0x1FFF;



  VAR_13 = FUNC_4(VAR_9->ohci, VAR_4) >> 25;


  VAR_13 += 1;

  VAR_6 |= (VAR_13 & 3) << 13;

  VAR_12 |= VAR_6 << 12;
 }

 if (VAR_8 != -1) {

  struct dma_cmd *VAR_14 = &VAR_9->block[VAR_9->block_dma];
  VAR_14->control |= FUNC_1(VAR_1);


  VAR_12 |= (VAR_8&0xf)<<8;
 }

 FUNC_5(VAR_9->ohci, VAR_9->ContextMatch, VAR_12);


 VAR_11 = FUNC_2(&VAR_9->prog,
      VAR_9->block_dma * sizeof(struct dma_cmd));
 VAR_11 |= 1;

 FUNC_5(VAR_9->ohci, VAR_9->CommandPtr, VAR_11);


 FUNC_5(VAR_9->ohci, VAR_3, 1 << VAR_9->task.context);

 FUNC_6();


 FUNC_5(VAR_9->ohci, VAR_9->ContextControlSet, 0x8000);



 FUNC_3();
 FUNC_4(VAR_9->ohci, VAR_4);


 if (!(FUNC_4(VAR_9->ohci, VAR_9->ContextControlSet) & 0x8000)) {
  FUNC_0(VAR_2,
        "Error starting IR DMA (ContextControl 0x%08x)\n",
        FUNC_4(VAR_9->ohci, VAR_9->ContextControlSet));
  return -1;
 }

 return 0;
}
