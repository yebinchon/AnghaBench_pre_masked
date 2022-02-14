
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct video_card {int ohci_it_ctx; int ohci_ir_ctx; int channel; scalar_t__ packet_buf_size; int packet_buf; scalar_t__ dv_buf_size; int dv_buf; scalar_t__ n_frames; int ** frames; TYPE_1__* ohci; int ir_tasklet; scalar_t__ ohci_IsoRcvContextMatch; scalar_t__ ohci_IsoRcvCommandPtr; scalar_t__ ohci_IsoRcvContextControlClear; scalar_t__ ohci_IsoRcvContextControlSet; int it_tasklet; scalar_t__ ohci_IsoXmitCommandPtr; scalar_t__ ohci_IsoXmitContextControlClear; scalar_t__ ohci_IsoXmitContextControlSet; } ;
struct TYPE_3__ {int ISO_channel_usage; int IR_channel_lock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*,...) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int ,int) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 int FUNC_7 (struct video_card*) ;

__attribute__((used)) static void FUNC_8(struct video_card *VAR_3, int VAR_4)
{
 int VAR_5;

 FUNC_0("dv1394: shutdown...\n");


 FUNC_7(VAR_3);


 if (VAR_3->ohci_it_ctx != -1) {
  VAR_3->ohci_IsoXmitContextControlSet = 0;
  VAR_3->ohci_IsoXmitContextControlClear = 0;
  VAR_3->ohci_IsoXmitCommandPtr = 0;


  FUNC_4(VAR_3->ohci, VAR_2, (1 << VAR_3->ohci_it_ctx));


  FUNC_3(VAR_3->ohci, &VAR_3->it_tasklet);
  FUNC_0("dv1394: IT context %d released\n", VAR_3->ohci_it_ctx);
  VAR_3->ohci_it_ctx = -1;
 }

 if (VAR_3->ohci_ir_ctx != -1) {
  VAR_3->ohci_IsoRcvContextControlSet = 0;
  VAR_3->ohci_IsoRcvContextControlClear = 0;
  VAR_3->ohci_IsoRcvCommandPtr = 0;
  VAR_3->ohci_IsoRcvContextMatch = 0;


  FUNC_4(VAR_3->ohci, VAR_1, (1 << VAR_3->ohci_ir_ctx));


  FUNC_3(VAR_3->ohci, &VAR_3->ir_tasklet);
  FUNC_0("dv1394: IR context %d released\n", VAR_3->ohci_ir_ctx);
  VAR_3->ohci_ir_ctx = -1;
 }


 if (VAR_3->channel != -1) {
  u64 VAR_6;
  unsigned long VAR_7;

  VAR_6 = (u64)1 << VAR_3->channel;

  FUNC_5(&VAR_3->ohci->IR_channel_lock, VAR_7);
  VAR_3->ohci->ISO_channel_usage &= ~(VAR_6);
  FUNC_6(&VAR_3->ohci->IR_channel_lock, VAR_7);

  VAR_3->channel = -1;
 }


 for (VAR_5 = 0; VAR_5 < VAR_0; VAR_5++) {
  if (VAR_3->frames[VAR_5])
   FUNC_2(VAR_3->frames[VAR_5]);
  VAR_3->frames[VAR_5] = ((void*)0);
 }

 VAR_3->n_frames = 0;




 if (VAR_4) {
  FUNC_1(&VAR_3->dv_buf);
  VAR_3->dv_buf_size = 0;
 }


 FUNC_1(&VAR_3->packet_buf);
 VAR_3->packet_buf_size = 0;

 FUNC_0("dv1394: shutdown OK\n");
}
