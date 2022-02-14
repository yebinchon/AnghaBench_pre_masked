
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int status; int number_of_packets; unsigned char* transfer_buffer; TYPE_2__* iso_frame_desc; } ;
struct em28xx_dmaqueue {scalar_t__ pos; } ;
struct em28xx_buffer {int top_field; int vb; } ;
struct TYPE_3__ {struct em28xx_buffer* vid_buf; } ;
struct em28xx {int state; int max_pkt_size; scalar_t__ progressive; TYPE_1__ isoc_ctl; struct em28xx_dmaqueue vidq; } ;
struct TYPE_4__ {int status; int actual_length; int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct em28xx*,struct em28xx_dmaqueue*,struct em28xx_buffer*) ;
 int FUNC_1 (struct em28xx*,struct em28xx_dmaqueue*,struct em28xx_buffer*,unsigned char*,unsigned char*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct em28xx_dmaqueue*,struct em28xx_buffer**) ;
 int FUNC_4 (struct em28xx*,int,int) ;
 unsigned char* FUNC_5 (int *) ;

__attribute__((used)) static inline int FUNC_6(struct em28xx *VAR_4, struct urb *VAR_5)
{
 struct em28xx_buffer *VAR_6;
 struct em28xx_dmaqueue *VAR_7 = &VAR_4->vidq;
 unsigned char *VAR_8 = ((void*)0);
 int VAR_9, VAR_10 = 0, VAR_11 = 1;
 unsigned char *VAR_12;

 if (!VAR_4)
  return 0;

 if ((VAR_4->state & VAR_0) || (VAR_4->state & VAR_1))
  return 0;

 if (VAR_5->status < 0) {
  FUNC_4(VAR_4, -1, VAR_5->status);
  if (VAR_5->status == -VAR_2)
   return 0;
 }

 VAR_6 = VAR_4->isoc_ctl.vid_buf;
 if (VAR_6 != ((void*)0))
  VAR_8 = FUNC_5(&VAR_6->vb);

 for (VAR_9 = 0; VAR_9 < VAR_5->number_of_packets; VAR_9++) {
  int VAR_13 = VAR_5->iso_frame_desc[VAR_9].status;

  if (VAR_13 < 0) {
   FUNC_4(VAR_4, VAR_9, VAR_13);
   if (VAR_5->iso_frame_desc[VAR_9].status != -VAR_3)
    continue;
  }

  VAR_10 = VAR_5->iso_frame_desc[VAR_9].actual_length - 4;

  if (VAR_5->iso_frame_desc[VAR_9].actual_length <= 0) {

   continue;
  }
  if (VAR_5->iso_frame_desc[VAR_9].actual_length >
      VAR_4->max_pkt_size) {
   FUNC_2("packet bigger than packet size");
   continue;
  }

  VAR_12 = VAR_5->transfer_buffer + VAR_5->iso_frame_desc[VAR_9].offset;




  if (VAR_12[0] == 0x33 && VAR_12[1] == 0x95 && VAR_12[2] == 0x00) {
   FUNC_2("VBI HEADER!!!\n");

   continue;
  }
  if (VAR_12[0] == 0x22 && VAR_12[1] == 0x5a) {
   FUNC_2("Video frame %d, length=%i, %s\n", VAR_12[2],
           VAR_10, (VAR_12[2] & 1) ? "odd" : "even");

   if (VAR_4->progressive || !(VAR_12[2] & 1)) {
    if (VAR_6 != ((void*)0))
     FUNC_0(VAR_4, VAR_7, VAR_6);
    FUNC_3(VAR_7, &VAR_6);
    if (VAR_6 == ((void*)0))
     VAR_8 = ((void*)0);
    else
     VAR_8 = FUNC_5(&VAR_6->vb);
   }

   if (VAR_6 != ((void*)0)) {
    if (VAR_12[2] & 1)
     VAR_6->top_field = 0;
    else
     VAR_6->top_field = 1;
   }

   VAR_7->pos = 0;
  }
  if (VAR_6 != ((void*)0)) {
   if (VAR_12[0] != 0x88 && VAR_12[0] != 0x22) {
    FUNC_2("frame is not complete\n");
    VAR_10 += 4;
   } else {
    VAR_12 += 4;
   }
   FUNC_1(VAR_4, VAR_7, VAR_6, VAR_12, VAR_8, VAR_10);
  }
 }
 return VAR_11;
}
