
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_card {int first_run; int first_clear_frame; int channel; int dma_running; int ohci_IsoRcvContextControlSet; int ohci; TYPE_1__** frames; int ohci_IsoRcvCommandPtr; int ohci_IsoRcvContextMatch; int ohci_IsoRcvContextControlClear; scalar_t__ active_frame; scalar_t__ current_packet; scalar_t__ n_clear_frames; } ;
struct TYPE_2__ {int descriptor_pool_dma; } ;


 int FUNC_0 (char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (int ,int ,int) ;
 int FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct video_card *VAR_0)
{
 if (VAR_0->first_run == 1) {
  VAR_0->first_run = 0;


  VAR_0->n_clear_frames = 0;
  VAR_0->first_clear_frame = -1;
  VAR_0->current_packet = 0;
  VAR_0->active_frame = 0;


  FUNC_5(VAR_0->ohci, VAR_0->ohci_IsoRcvContextControlClear, 0xFFFFFFFF);
  FUNC_6();


  FUNC_5(VAR_0->ohci, VAR_0->ohci_IsoRcvContextControlSet, 0x40000000);


  FUNC_5(VAR_0->ohci, VAR_0->ohci_IsoRcvContextMatch, 0xf0000000 | VAR_0->channel);


  FUNC_5(VAR_0->ohci, VAR_0->ohci_IsoRcvCommandPtr,
     VAR_0->frames[0]->descriptor_pool_dma | 1);
  FUNC_6();

  VAR_0->dma_running = 1;


  FUNC_5(VAR_0->ohci, VAR_0->ohci_IsoRcvContextControlSet, 0x8000);
  FUNC_1(VAR_0->ohci);

  FUNC_0("dv1394: DMA started\n");
 } else if ( FUNC_4(VAR_0->ohci, VAR_0->ohci_IsoRcvContextControlSet) & (1 << 11) ) {
  FUNC_0("DEAD, event = %x\n",
        FUNC_4(VAR_0->ohci, VAR_0->ohci_IsoRcvContextControlSet) & 0x1F);


  FUNC_5(VAR_0->ohci, VAR_0->ohci_IsoRcvContextControlSet, (1 << 12));
 }
}
