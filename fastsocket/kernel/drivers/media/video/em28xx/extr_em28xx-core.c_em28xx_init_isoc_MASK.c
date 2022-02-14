
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int number_of_packets; int transfer_flags; TYPE_1__* iso_frame_desc; int transfer_dma; } ;
struct em28xx_dmaqueue {int wq; } ;
struct TYPE_4__ {int (* isoc_copy ) (struct em28xx*,struct urb*) ;int num_bufs; int max_pkt_size; struct urb** urb; int * transfer_buffer; int * vbi_buf; int * vid_buf; } ;
struct em28xx {scalar_t__ mode; TYPE_2__ isoc_ctl; int udev; struct em28xx_dmaqueue vbiq; struct em28xx_dmaqueue vidq; } ;
struct TYPE_3__ {int offset; int length; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct em28xx*,int) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (char*) ;
 int VAR_6 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct em28xx*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct urb**) ;
 void* FUNC_8 (int,int ) ;
 int FUNC_9 (int ,int ,int) ;
 struct urb* FUNC_10 (int,int ) ;
 int FUNC_11 (int ,int,int ,int *) ;
 int FUNC_12 (struct urb*,int ,int,int ,int,int ,struct em28xx*,int) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (struct urb*,int ) ;

int FUNC_15(struct em28xx *VAR_7, int VAR_8,
       int VAR_9, int VAR_10,
       int (*VAR_11) (struct em28xx *VAR_12, struct urb *VAR_13))
{
 struct em28xx_dmaqueue *VAR_14 = &VAR_7->vidq;
 struct em28xx_dmaqueue *VAR_15 = &VAR_7->vbiq;
 int VAR_16;
 int VAR_17, VAR_18;
 struct urb *VAR_19;
 int VAR_20, VAR_21;
 int VAR_22;

 FUNC_3("em28xx: called em28xx_prepare_isoc\n");


 FUNC_4(VAR_7);

 VAR_7->isoc_ctl.isoc_copy = VAR_11;
 VAR_7->isoc_ctl.num_bufs = VAR_9;

 VAR_7->isoc_ctl.urb = FUNC_8(sizeof(void *)*VAR_9, VAR_3);
 if (!VAR_7->isoc_ctl.urb) {
  FUNC_2("cannot alloc memory for usb buffers\n");
  return -VAR_1;
 }

 VAR_7->isoc_ctl.transfer_buffer = FUNC_8(sizeof(void *)*VAR_9,
           VAR_3);
 if (!VAR_7->isoc_ctl.transfer_buffer) {
  FUNC_2("cannot allocate memory for usb transfer\n");
  FUNC_7(VAR_7->isoc_ctl.urb);
  return -VAR_1;
 }

 VAR_7->isoc_ctl.max_pkt_size = VAR_10;
 VAR_7->isoc_ctl.vid_buf = ((void*)0);
 VAR_7->isoc_ctl.vbi_buf = ((void*)0);

 VAR_17 = VAR_8 * VAR_7->isoc_ctl.max_pkt_size;


 for (VAR_16 = 0; VAR_16 < VAR_7->isoc_ctl.num_bufs; VAR_16++) {
  VAR_19 = FUNC_10(VAR_8, VAR_3);
  if (!VAR_19) {
   FUNC_1("cannot alloc isoc_ctl.urb %i\n", VAR_16);
   FUNC_4(VAR_7);
   return -VAR_1;
  }
  VAR_7->isoc_ctl.urb[VAR_16] = VAR_19;

  VAR_7->isoc_ctl.transfer_buffer[VAR_16] = FUNC_11(VAR_7->udev,
   VAR_17, VAR_3, &VAR_19->transfer_dma);
  if (!VAR_7->isoc_ctl.transfer_buffer[VAR_16]) {
   FUNC_1("unable to allocate %i bytes for transfer"
     " buffer %i%s\n",
     VAR_17, VAR_16,
     FUNC_5() ? " while in int" : "");
   FUNC_4(VAR_7);
   return -VAR_1;
  }
  FUNC_9(VAR_7->isoc_ctl.transfer_buffer[VAR_16], 0, VAR_17);





  VAR_18 = FUNC_13(VAR_7->udev,
   VAR_7->mode == VAR_0 ? 0x82 : 0x84);

  FUNC_12(VAR_19, VAR_7->udev, VAR_18,
     VAR_7->isoc_ctl.transfer_buffer[VAR_16], VAR_17,
     VAR_6, VAR_7, 1);

  VAR_19->number_of_packets = VAR_8;
  VAR_19->transfer_flags = VAR_4 | VAR_5;

  VAR_21 = 0;
  for (VAR_20 = 0; VAR_20 < VAR_8; VAR_20++) {
   VAR_19->iso_frame_desc[VAR_20].offset = VAR_21;
   VAR_19->iso_frame_desc[VAR_20].length =
      VAR_7->isoc_ctl.max_pkt_size;
   VAR_21 += VAR_7->isoc_ctl.max_pkt_size;
  }
 }

 FUNC_6(&VAR_14->wq);
 FUNC_6(&VAR_15->wq);

 FUNC_0(VAR_7, 1);


 for (VAR_16 = 0; VAR_16 < VAR_7->isoc_ctl.num_bufs; VAR_16++) {
  VAR_22 = FUNC_14(VAR_7->isoc_ctl.urb[VAR_16], VAR_2);
  if (VAR_22) {
   FUNC_1("submit of urb %i failed (error=%i)\n", VAR_16,
       VAR_22);
   FUNC_4(VAR_7);
   return VAR_22;
  }
 }

 return 0;
}
