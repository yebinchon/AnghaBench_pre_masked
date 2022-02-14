
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int transfer_dma; scalar_t__ transfer_flags; } ;
struct cx231xx_dmaqueue {int current_field; int lines_per_field; int bytes_left_in_line; int* ps_head; int wq; scalar_t__* partial_buf; scalar_t__ mpeg_buffer_completed; scalar_t__ left_data_count; scalar_t__ mpeg_buffer_done; scalar_t__ lines_completed; scalar_t__ field1_done; scalar_t__ last_sav; scalar_t__ is_partial_line; scalar_t__ pos; } ;
struct TYPE_4__ {int (* bulk_copy ) (struct cx231xx*,struct urb*) ;int num_bufs; int max_pkt_size; struct urb** urb; int * transfer_buffer; int * buf; } ;
struct TYPE_3__ {int end_point_addr; TYPE_2__ bulk_ctl; struct cx231xx_dmaqueue vidq; } ;
struct cx231xx {int video_input; int height; int width; int mode_tv; TYPE_1__ video_mode; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct cx231xx*,int,int ) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*,int,...) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (struct cx231xx*) ;
 scalar_t__ FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (struct urb**) ;
 void* FUNC_8 (int,int ) ;
 int FUNC_9 (int ,int ,int) ;
 struct urb* FUNC_10 (int ,int ) ;
 int FUNC_11 (int ,int,int ,int *) ;
 int FUNC_12 (struct urb*,int ,int,int ,int,int ,struct cx231xx_dmaqueue*) ;
 int FUNC_13 (int ,int) ;
 int FUNC_14 (struct urb*,int ) ;
 int FUNC_15 (struct cx231xx*,int) ;

int FUNC_16(struct cx231xx *VAR_6, int VAR_7,
        int VAR_8, int VAR_9,
        int (*VAR_10) (struct cx231xx *VAR_11, struct urb *VAR_12))
{
 struct cx231xx_dmaqueue *VAR_13 = &VAR_6->video_mode.vidq;
 int VAR_14;
 int VAR_15, VAR_16;
 struct urb *VAR_17;
 int VAR_18;

 VAR_6->video_input = VAR_6->video_input > 2 ? 2 : VAR_6->video_input;

 FUNC_1("Setting Video mux to %d\n", VAR_6->video_input);

 FUNC_15(VAR_6, VAR_6->video_input);


 FUNC_4(VAR_6);

 VAR_6->video_mode.bulk_ctl.bulk_copy = VAR_10;
 VAR_6->video_mode.bulk_ctl.num_bufs = VAR_8;
 VAR_13->pos = 0;
 VAR_13->is_partial_line = 0;
 VAR_13->last_sav = 0;
 VAR_13->current_field = -1;
 VAR_13->field1_done = 0;
 VAR_13->lines_per_field = VAR_6->height / 2;
 VAR_13->bytes_left_in_line = VAR_6->width << 1;
 VAR_13->lines_completed = 0;
 VAR_13->mpeg_buffer_done = 0;
 VAR_13->left_data_count = 0;
 VAR_13->mpeg_buffer_completed = 0;
 VAR_13->ps_head[0] = 0x00;
 VAR_13->ps_head[1] = 0x00;
 VAR_13->ps_head[2] = 0x01;
 VAR_13->ps_head[3] = 0xBA;
 for (VAR_14 = 0; VAR_14 < 8; VAR_14++)
  VAR_13->partial_buf[VAR_14] = 0;

 VAR_6->video_mode.bulk_ctl.urb =
     FUNC_8(sizeof(void *) * VAR_8, VAR_2);
 if (!VAR_6->video_mode.bulk_ctl.urb) {
  FUNC_3("cannot alloc memory for usb buffers\n");
  return -VAR_0;
 }

 VAR_6->video_mode.bulk_ctl.transfer_buffer =
     FUNC_8(sizeof(void *) * VAR_8, VAR_2);
 if (!VAR_6->video_mode.bulk_ctl.transfer_buffer) {
  FUNC_3("cannot allocate memory for usbtransfer\n");
  FUNC_7(VAR_6->video_mode.bulk_ctl.urb);
  return -VAR_0;
 }

 VAR_6->video_mode.bulk_ctl.max_pkt_size = VAR_9;
 VAR_6->video_mode.bulk_ctl.buf = ((void*)0);

 VAR_15 = VAR_7 * VAR_6->video_mode.bulk_ctl.max_pkt_size;

 if (VAR_6->mode_tv == 1)
  VAR_6->video_mode.end_point_addr = 0x81;
 else
  VAR_6->video_mode.end_point_addr = 0x84;



 for (VAR_14 = 0; VAR_14 < VAR_6->video_mode.bulk_ctl.num_bufs; VAR_14++) {
  VAR_17 = FUNC_10(0, VAR_2);
  if (!VAR_17) {
   FUNC_2("cannot alloc bulk_ctl.urb %i\n", VAR_14);
   FUNC_4(VAR_6);
   return -VAR_0;
  }
  VAR_6->video_mode.bulk_ctl.urb[VAR_14] = VAR_17;
  VAR_17->transfer_flags = 0;

  VAR_6->video_mode.bulk_ctl.transfer_buffer[VAR_14] =
      FUNC_11(VAR_6->udev, VAR_15, VAR_2,
         &VAR_17->transfer_dma);
  if (!VAR_6->video_mode.bulk_ctl.transfer_buffer[VAR_14]) {
   FUNC_2("unable to allocate %i bytes for transfer"
        " buffer %i%s\n",
        VAR_15, VAR_14,
        FUNC_5() ? " while in int" : "");
   FUNC_4(VAR_6);
   return -VAR_0;
  }
  FUNC_9(VAR_6->video_mode.bulk_ctl.transfer_buffer[VAR_14], 0, VAR_15);

  VAR_16 = FUNC_13(VAR_6->udev,
     VAR_6->video_mode.end_point_addr);
  FUNC_12(VAR_17, VAR_6->udev, VAR_16,
      VAR_6->video_mode.bulk_ctl.transfer_buffer[VAR_14],
      VAR_15, VAR_5, VAR_13);
 }

 FUNC_6(&VAR_13->wq);


 for (VAR_14 = 0; VAR_14 < VAR_6->video_mode.bulk_ctl.num_bufs; VAR_14++) {
  VAR_18 = FUNC_14(VAR_6->video_mode.bulk_ctl.urb[VAR_14],
        VAR_1);
  if (VAR_18) {
   FUNC_2("submit of urb %i failed (error=%i)\n", VAR_14,
        VAR_18);
   FUNC_4(VAR_6);
   return VAR_18;
  }
 }

 if (VAR_6->mode_tv == 0)
  FUNC_0(VAR_6, 1, VAR_3);
 else
  FUNC_0(VAR_6, 1, VAR_4);

 return 0;
}
