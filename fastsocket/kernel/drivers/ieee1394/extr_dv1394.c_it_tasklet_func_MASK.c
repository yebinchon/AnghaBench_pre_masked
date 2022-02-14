
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u32 ;
struct video_card {int ohci_it_ctx; int active_frame; unsigned int n_frames; int spinlock; int waitq; int fasync; int dropped_frames; scalar_t__ syt_offset; struct frame** frames; int n_clear_frames; int ohci_IsoXmitContextControlSet; int ohci; int ohci_IsoXmitCommandPtr; int dma_running; } ;
struct frame {scalar_t__ state; int done; int assigned_timestamp; scalar_t__* frame_end_timestamp; TYPE_2__* cip_syt2; TYPE_1__* cip_syt1; scalar_t__ n_packets; scalar_t__* frame_begin_timestamp; scalar_t__* mid_frame_timestamp; } ;
struct TYPE_4__ {int* b; } ;
struct TYPE_3__ {int* b; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (struct frame*) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (int *,int ,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;

__attribute__((used)) static void FUNC_9(unsigned long VAR_3)
{
 int VAR_4 = 0;
 struct video_card *VAR_5 = (struct video_card*) VAR_3;

 FUNC_6(&VAR_5->spinlock);

 if (!VAR_5->dma_running)
  goto out;

 FUNC_2("ContextControl = %08x, CommandPtr = %08x\n",
        FUNC_5(VAR_5->ohci, VAR_5->ohci_IsoXmitContextControlSet),
        FUNC_5(VAR_5->ohci, VAR_5->ohci_IsoXmitCommandPtr)
        );


 if ( (VAR_5->ohci_it_ctx != -1) &&
     (FUNC_5(VAR_5->ohci, VAR_5->ohci_IsoXmitContextControlSet) & (1 << 10)) ) {

  struct frame *VAR_6;
  unsigned int VAR_7, VAR_8;


  if (VAR_5->active_frame == -1)
   VAR_7 = 0;
  else
   VAR_7 = VAR_5->active_frame;


  for (VAR_8 = 0; VAR_8 < VAR_5->n_frames; VAR_8++, VAR_7 = (VAR_7+1) % VAR_5->n_frames) {

   FUNC_2("IRQ checking frame %d...", VAR_7);
   VAR_6 = VAR_5->frames[VAR_7];
   if (VAR_6->state != VAR_0) {
    FUNC_2("clear, skipping\n");

    continue;
   }

   FUNC_2("DMA\n");


   if ( *(VAR_6->frame_begin_timestamp) ) {
    int VAR_9;
    struct frame *VAR_10;




    FUNC_2("  BEGIN\n");

    VAR_9 = VAR_7 - 1;
    if (VAR_9 == -1)
     VAR_9 += VAR_5->n_frames;
    VAR_10 = VAR_5->frames[VAR_9];



    if ( (VAR_10->state == VAR_0) &&
        VAR_10->done && (!VAR_6->done) )
    {
     FUNC_1(VAR_10);
     VAR_5->n_clear_frames++;
     VAR_4 = 1;
     VAR_5->active_frame = VAR_7;

     FUNC_2("  BEGIN - freeing previous frame %d, new active frame is %d\n", VAR_9, VAR_7);
    } else {
     FUNC_2("  BEGIN - can't free yet\n");
    }

    VAR_6->done = 1;
   }



   if ( *(VAR_6->mid_frame_timestamp) ) {
    struct frame *VAR_11;
    u32 VAR_12, VAR_13, VAR_14;

    *(VAR_6->mid_frame_timestamp) = 0;

    VAR_12 = FUNC_4(*(VAR_6->frame_begin_timestamp));

    FUNC_2("  MIDDLE - first packet was sent at cycle %4u (%2u), assigned timestamp was (%2u) %4u\n",
        VAR_12 & 0x1FFF, VAR_12 & 0xF,
        VAR_6->assigned_timestamp >> 12, VAR_6->assigned_timestamp & 0xFFF);


    VAR_11 = VAR_5->frames[ (VAR_7+1) % VAR_5->n_frames ];

    if (VAR_11->state == VAR_0) {
     FUNC_2("  MIDDLE - next frame is ready, good\n");
    } else {
     FUNC_0("dv1394: Underflow! At least one frame has been dropped.\n");
     VAR_11 = VAR_6;
    }



    VAR_13 = VAR_12 & 0xF;

    VAR_13 += VAR_6->n_packets + VAR_5->syt_offset ;

    VAR_14 = 0;

    VAR_13 += VAR_14/3072;
    VAR_14 %= 3072;

    VAR_11->assigned_timestamp = ((VAR_13&0xF) << 12) + VAR_14;
    if (VAR_11->cip_syt1) {
     VAR_11->cip_syt1->b[6] = VAR_11->assigned_timestamp >> 8;
     VAR_11->cip_syt1->b[7] = VAR_11->assigned_timestamp & 0xFF;
    }
    if (VAR_11->cip_syt2) {
     VAR_11->cip_syt2->b[6] = VAR_11->assigned_timestamp >> 8;
     VAR_11->cip_syt2->b[7] = VAR_11->assigned_timestamp & 0xFF;
    }

   }


   if ( *(VAR_6->frame_end_timestamp) ) {

    *(VAR_6->frame_end_timestamp) = 0;

    FUNC_0("  END - the frame looped at least once\n");

    VAR_5->dropped_frames++;
   }

  }
 }

 if (VAR_4) {
  FUNC_3(&VAR_5->fasync, VAR_2, VAR_1);


  FUNC_8(&VAR_5->waitq);
 }

out:
 FUNC_7(&VAR_5->spinlock);
}
