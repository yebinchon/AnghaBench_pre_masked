
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ti_ohci {int dummy; } ;
struct TYPE_2__ {int context; } ;
struct ohci_iso_xmit {int ContextControlSet; struct ti_ohci* ohci; TYPE_1__ task; int prog; int CommandPtr; int ContextControlClear; } ;
struct iso_xmit_cmd {int dummy; } ;
struct hpsb_iso {int pkt_dma; struct ohci_iso_xmit* hostdata; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (int *,int) ;
 int FUNC_2 () ;
 int FUNC_3 (struct ti_ohci*,int ) ;
 int FUNC_4 (struct ti_ohci*,int ,int) ;
 int FUNC_5 (int) ;
 int FUNC_6 () ;

__attribute__((used)) static int FUNC_7(struct hpsb_iso *VAR_3, int VAR_4)
{
 struct ohci_iso_xmit *VAR_5 = VAR_3->hostdata;
 struct ti_ohci *VAR_6 = VAR_5->ohci;


 FUNC_4(VAR_5->ohci, VAR_5->ContextControlClear, 0xFFFFFFFF);
 FUNC_6();


 FUNC_4(VAR_5->ohci, VAR_5->CommandPtr,
    FUNC_1(&VAR_5->prog, VAR_3->pkt_dma * sizeof(struct iso_xmit_cmd)) | 3);


 if (VAR_4 != -1) {
  u32 VAR_7 = VAR_4 & 0x1FFF;



  u32 VAR_8 = FUNC_3(VAR_5->ohci, VAR_2) >> 25;


  VAR_8 += 1;

  VAR_7 |= (VAR_8 & 3) << 13;

  FUNC_4(VAR_5->ohci, VAR_5->ContextControlSet, 0x80000000 | (VAR_7 << 16));
 }


 FUNC_4(VAR_5->ohci, VAR_1, 1 << VAR_5->task.context);


 FUNC_4(VAR_5->ohci, VAR_5->ContextControlSet, 0x8000);
 FUNC_2();


 FUNC_5(100);


 if (!(FUNC_3(VAR_5->ohci, VAR_5->ContextControlSet) & 0x8000)) {
  FUNC_0(VAR_0, "Error starting IT DMA (ContextControl 0x%08x)\n",
        FUNC_3(VAR_5->ohci, VAR_5->ContextControlSet));
  return -1;
 }

 return 0;
}
