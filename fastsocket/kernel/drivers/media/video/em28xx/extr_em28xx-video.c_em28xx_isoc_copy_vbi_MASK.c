
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int status; int number_of_packets; unsigned char* transfer_buffer; TYPE_2__* iso_frame_desc; } ;
struct em28xx_dmaqueue {scalar_t__ pos; } ;
struct em28xx_buffer {int top_field; int vb; } ;
struct TYPE_3__ {struct em28xx_buffer* vbi_buf; struct em28xx_buffer* vid_buf; } ;
struct em28xx {int state; int max_pkt_size; int capture_type; int vbi_read; unsigned char cur_field; int vbi_width; int vbi_height; scalar_t__ progressive; TYPE_1__ isoc_ctl; struct em28xx_dmaqueue vbiq; struct em28xx_dmaqueue vidq; } ;
struct TYPE_4__ {int status; int actual_length; int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct em28xx*,struct em28xx_dmaqueue*,struct em28xx_buffer*) ;
 int FUNC_1 (struct em28xx*,struct em28xx_dmaqueue*,struct em28xx_buffer*,unsigned char*,unsigned char*,int) ;
 int FUNC_2 (struct em28xx*,struct em28xx_dmaqueue*,struct em28xx_buffer*,unsigned char*,unsigned char*,int) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 (struct em28xx_dmaqueue*,struct em28xx_buffer**) ;
 int FUNC_5 (struct em28xx*,int,int) ;
 int FUNC_6 (struct em28xx*,struct em28xx_dmaqueue*,struct em28xx_buffer*) ;
 int FUNC_7 (struct em28xx_dmaqueue*,struct em28xx_buffer**) ;
 unsigned char* FUNC_8 (int *) ;

__attribute__((used)) static inline int FUNC_9(struct em28xx *VAR_4, struct urb *VAR_5)
{
 struct em28xx_buffer *VAR_6, *VAR_7;
 struct em28xx_dmaqueue *VAR_8 = &VAR_4->vidq;
 struct em28xx_dmaqueue *VAR_9 = &VAR_4->vbiq;
 unsigned char *VAR_10 = ((void*)0);
 unsigned char *VAR_11 = ((void*)0);
 int VAR_12, VAR_13 = 0, VAR_14 = 1;
 unsigned char *VAR_15;
 int VAR_16;

 if (!VAR_4)
  return 0;

 if ((VAR_4->state & VAR_0) || (VAR_4->state & VAR_1))
  return 0;

 if (VAR_5->status < 0) {
  FUNC_5(VAR_4, -1, VAR_5->status);
  if (VAR_5->status == -VAR_2)
   return 0;
 }

 VAR_6 = VAR_4->isoc_ctl.vid_buf;
 if (VAR_6 != ((void*)0))
  VAR_10 = FUNC_8(&VAR_6->vb);

 VAR_7 = VAR_4->isoc_ctl.vbi_buf;
 if (VAR_7 != ((void*)0))
  VAR_11 = FUNC_8(&VAR_7->vb);

 for (VAR_12 = 0; VAR_12 < VAR_5->number_of_packets; VAR_12++) {
  int VAR_17 = VAR_5->iso_frame_desc[VAR_12].status;

  if (VAR_17 < 0) {
   FUNC_5(VAR_4, VAR_12, VAR_17);
   if (VAR_5->iso_frame_desc[VAR_12].status != -VAR_3)
    continue;
  }

  VAR_13 = VAR_5->iso_frame_desc[VAR_12].actual_length;
  if (VAR_5->iso_frame_desc[VAR_12].actual_length <= 0) {

   continue;
  }
  if (VAR_5->iso_frame_desc[VAR_12].actual_length >
      VAR_4->max_pkt_size) {
   FUNC_3("packet bigger than packet size");
   continue;
  }

  VAR_15 = VAR_5->transfer_buffer + VAR_5->iso_frame_desc[VAR_12].offset;




  if (VAR_15[0] == 0x33 && VAR_15[1] == 0x95) {
   VAR_4->capture_type = 0;
   VAR_4->vbi_read = 0;
   FUNC_3("VBI START HEADER!!!\n");
   VAR_4->cur_field = VAR_15[2];
   VAR_15 += 4;
   VAR_13 -= 4;
  } else if (VAR_15[0] == 0x88 && VAR_15[1] == 0x88 &&
      VAR_15[2] == 0x88 && VAR_15[3] == 0x88) {

   VAR_15 += 4;
   VAR_13 -= 4;
  } else if (VAR_15[0] == 0x22 && VAR_15[1] == 0x5a) {

   VAR_15 += 4;
   VAR_13 -= 4;
  }

  VAR_16 = VAR_4->vbi_width * VAR_4->vbi_height;

  if (VAR_4->capture_type == 0) {
   if (VAR_4->vbi_read >= VAR_16) {


    FUNC_3("dev->vbi_read > vbi_size\n");
   } else if ((VAR_4->vbi_read + VAR_13) < VAR_16) {

    if (VAR_4->vbi_read == 0 &&
        (!(VAR_4->cur_field & 1))) {

     if (VAR_7 != ((void*)0))
      FUNC_6(VAR_4,
          VAR_9,
          VAR_7);
     FUNC_7(VAR_9, &VAR_7);
     if (VAR_7 == ((void*)0))
      VAR_11 = ((void*)0);
     else
      VAR_11 = FUNC_8(
       &VAR_7->vb);
    }

    if (VAR_4->vbi_read == 0) {
     VAR_9->pos = 0;
     if (VAR_7 != ((void*)0)) {
      if (VAR_4->cur_field & 1)
       VAR_7->top_field = 0;
      else
       VAR_7->top_field = 1;
     }
    }

    VAR_4->vbi_read += VAR_13;
    FUNC_1(VAR_4, VAR_9, VAR_7, VAR_15,
      VAR_11, VAR_13);
   } else {


    int VAR_18 = VAR_16 - VAR_4->vbi_read;
    VAR_4->vbi_read += VAR_18;
    FUNC_1(VAR_4, VAR_9, VAR_7, VAR_15,
      VAR_11, VAR_18);
    VAR_4->capture_type = 1;
    VAR_15 += VAR_18;
    VAR_13 -= VAR_18;
   }
  }

  if (VAR_4->capture_type == 1) {
   VAR_4->capture_type = 2;
   if (VAR_4->progressive || !(VAR_4->cur_field & 1)) {
    if (VAR_6 != ((void*)0))
     FUNC_0(VAR_4, VAR_8, VAR_6);
    FUNC_4(VAR_8, &VAR_6);
    if (VAR_6 == ((void*)0))
     VAR_10 = ((void*)0);
    else
     VAR_10 = FUNC_8(&VAR_6->vb);
   }
   if (VAR_6 != ((void*)0)) {
    if (VAR_4->cur_field & 1)
     VAR_6->top_field = 0;
    else
     VAR_6->top_field = 1;
   }

   VAR_8->pos = 0;
  }

  if (VAR_6 != ((void*)0) && VAR_4->capture_type == 2) {
   if (VAR_13 >= 4 && VAR_15[0] == 0x88 && VAR_15[1] == 0x88 &&
       VAR_15[2] == 0x88 && VAR_15[3] == 0x88) {
    VAR_15 += 4;
    VAR_13 -= 4;
   }
   if (VAR_13 >= 4 && VAR_15[0] == 0x22 && VAR_15[1] == 0x5a) {
    FUNC_3("Video frame %d, len=%i, %s\n",
            VAR_15[2], VAR_13, (VAR_15[2] & 1) ?
            "odd" : "even");
    VAR_15 += 4;
    VAR_13 -= 4;
   }

   if (VAR_13 > 0)
    FUNC_2(VAR_4, VAR_8, VAR_6, VAR_15, VAR_10,
        VAR_13);
  }
 }
 return VAR_14;
}
