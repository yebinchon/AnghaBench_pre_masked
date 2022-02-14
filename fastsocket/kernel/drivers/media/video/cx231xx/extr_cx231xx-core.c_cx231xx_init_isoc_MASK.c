
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct urb {int number_of_packets; TYPE_1__* iso_frame_desc; int transfer_flags; int transfer_dma; } ;
struct cx231xx_dmaqueue {int current_field; int lines_per_field; int bytes_left_in_line; int* ps_head; int wq; scalar_t__* partial_buf; int add_ps_package_head; scalar_t__ mpeg_buffer_completed; scalar_t__ left_data_count; scalar_t__ mpeg_buffer_done; scalar_t__ lines_completed; scalar_t__ field1_done; scalar_t__ last_sav; scalar_t__ is_partial_line; scalar_t__ pos; int * p_left_data; } ;
struct TYPE_5__ {int (* isoc_copy ) (struct cx231xx*,struct urb*) ;int num_bufs; int max_pkt_size; struct urb** urb; int * transfer_buffer; int * buf; } ;
struct TYPE_6__ {int end_point_addr; TYPE_2__ isoc_ctl; struct cx231xx_dmaqueue vidq; } ;
struct cx231xx {int height; int width; int mode_tv; TYPE_3__ video_mode; int udev; } ;
struct TYPE_4__ {int offset; int length; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct cx231xx*,int,int ) ;
 int FUNC_1 (char*,int,...) ;
 int FUNC_2 (char*) ;
 int FUNC_3 (char*) ;
 int VAR_7 ;
 int FUNC_4 (struct cx231xx*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct urb**) ;
 void* FUNC_8 (int,int ) ;
 int FUNC_9 (int ,int ,int) ;
 struct urb* FUNC_10 (int,int ) ;
 int FUNC_11 (int ,int,int ,int *) ;
 int FUNC_12 (struct urb*,int ,int,int ,int,int ,struct cx231xx_dmaqueue*,int) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (struct urb*,int ) ;

int FUNC_15(struct cx231xx *VAR_8, int VAR_9,
        int VAR_10, int VAR_11,
        int (*VAR_12) (struct cx231xx *VAR_13, struct urb *VAR_14))
{
 struct cx231xx_dmaqueue *VAR_15 = &VAR_8->video_mode.vidq;
 int VAR_16;
 int VAR_17, VAR_18;
 struct urb *VAR_19;
 int VAR_20, VAR_21;
 int VAR_22;


 FUNC_4(VAR_8);

 VAR_15->p_left_data = FUNC_8(4096, VAR_3);
 if (VAR_15->p_left_data == ((void*)0)) {
  FUNC_3("out of mem\n");
  return -VAR_1;
 }



 VAR_8->video_mode.isoc_ctl.isoc_copy = VAR_12;
 VAR_8->video_mode.isoc_ctl.num_bufs = VAR_10;
 VAR_15->pos = 0;
 VAR_15->is_partial_line = 0;
 VAR_15->last_sav = 0;
 VAR_15->current_field = -1;
 VAR_15->field1_done = 0;
 VAR_15->lines_per_field = VAR_8->height / 2;
 VAR_15->bytes_left_in_line = VAR_8->width << 1;
 VAR_15->lines_completed = 0;
 VAR_15->mpeg_buffer_done = 0;
 VAR_15->left_data_count = 0;
 VAR_15->mpeg_buffer_completed = 0;
 VAR_15->add_ps_package_head = VAR_0;
 VAR_15->ps_head[0] = 0x00;
 VAR_15->ps_head[1] = 0x00;
 VAR_15->ps_head[2] = 0x01;
 VAR_15->ps_head[3] = 0xBA;
 for (VAR_16 = 0; VAR_16 < 8; VAR_16++)
  VAR_15->partial_buf[VAR_16] = 0;

 VAR_8->video_mode.isoc_ctl.urb =
     FUNC_8(sizeof(void *) * VAR_10, VAR_3);
 if (!VAR_8->video_mode.isoc_ctl.urb) {
  FUNC_2("cannot alloc memory for usb buffers\n");
  return -VAR_1;
 }

 VAR_8->video_mode.isoc_ctl.transfer_buffer =
     FUNC_8(sizeof(void *) * VAR_10, VAR_3);
 if (!VAR_8->video_mode.isoc_ctl.transfer_buffer) {
  FUNC_2("cannot allocate memory for usbtransfer\n");
  FUNC_7(VAR_8->video_mode.isoc_ctl.urb);
  return -VAR_1;
 }

 VAR_8->video_mode.isoc_ctl.max_pkt_size = VAR_11;
 VAR_8->video_mode.isoc_ctl.buf = ((void*)0);

 VAR_17 = VAR_9 * VAR_8->video_mode.isoc_ctl.max_pkt_size;

 if (VAR_8->mode_tv == 1)
  VAR_8->video_mode.end_point_addr = 0x81;
 else
  VAR_8->video_mode.end_point_addr = 0x84;



 for (VAR_16 = 0; VAR_16 < VAR_8->video_mode.isoc_ctl.num_bufs; VAR_16++) {
  VAR_19 = FUNC_10(VAR_9, VAR_3);
  if (!VAR_19) {
   FUNC_1("cannot alloc isoc_ctl.urb %i\n", VAR_16);
   FUNC_4(VAR_8);
   return -VAR_1;
  }
  VAR_8->video_mode.isoc_ctl.urb[VAR_16] = VAR_19;

  VAR_8->video_mode.isoc_ctl.transfer_buffer[VAR_16] =
      FUNC_11(VAR_8->udev, VAR_17, VAR_3,
           &VAR_19->transfer_dma);
  if (!VAR_8->video_mode.isoc_ctl.transfer_buffer[VAR_16]) {
   FUNC_1("unable to allocate %i bytes for transfer"
        " buffer %i%s\n",
        VAR_17, VAR_16,
        FUNC_5() ? " while in int" : "");
   FUNC_4(VAR_8);
   return -VAR_1;
  }
  FUNC_9(VAR_8->video_mode.isoc_ctl.transfer_buffer[VAR_16], 0, VAR_17);

  VAR_18 =
      FUNC_13(VAR_8->udev, VAR_8->video_mode.end_point_addr);

  FUNC_12(VAR_19, VAR_8->udev, VAR_18,
     VAR_8->video_mode.isoc_ctl.transfer_buffer[VAR_16],
     VAR_17, VAR_7, VAR_15, 1);

  VAR_19->number_of_packets = VAR_9;
  VAR_19->transfer_flags = VAR_6;

  VAR_21 = 0;
  for (VAR_20 = 0; VAR_20 < VAR_9; VAR_20++) {
   VAR_19->iso_frame_desc[VAR_20].offset = VAR_21;
   VAR_19->iso_frame_desc[VAR_20].length =
       VAR_8->video_mode.isoc_ctl.max_pkt_size;
   VAR_21 += VAR_8->video_mode.isoc_ctl.max_pkt_size;
  }
 }

 FUNC_6(&VAR_15->wq);


 for (VAR_16 = 0; VAR_16 < VAR_8->video_mode.isoc_ctl.num_bufs; VAR_16++) {
  VAR_22 = FUNC_14(VAR_8->video_mode.isoc_ctl.urb[VAR_16],
        VAR_2);
  if (VAR_22) {
   FUNC_1("submit of urb %i failed (error=%i)\n", VAR_16,
        VAR_22);
   FUNC_4(VAR_8);
   return VAR_22;
  }
 }

 if (VAR_8->mode_tv == 0)
  FUNC_0(VAR_8, 1, VAR_4);
 else
  FUNC_0(VAR_8, 1, VAR_5);

 return 0;
}
