
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct urb {int status; int number_of_packets; unsigned char* transfer_buffer; TYPE_2__* iso_frame_desc; struct au0828_dmaqueue* context; } ;
struct au0828_dmaqueue {scalar_t__ pos; } ;
struct TYPE_3__ {struct au0828_buffer* vbi_buf; struct au0828_buffer* buf; } ;
struct au0828_dev {int dev_state; int max_pkt_size; unsigned int vbi_read; int vbi_width; int vbi_height; int vbi_timeout; scalar_t__ vbi_timeout_running; int vid_timeout; scalar_t__ vid_timeout_running; TYPE_1__ isoc_ctl; struct au0828_dmaqueue vbiq; } ;
struct au0828_buffer {int top_field; int vb; } ;
struct TYPE_4__ {int status; int actual_length; int offset; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (struct au0828_dev*,struct au0828_dmaqueue*,struct au0828_buffer*,unsigned char*,unsigned char*,int) ;
 int FUNC_1 (struct au0828_dev*,struct au0828_dmaqueue*,struct au0828_buffer*,unsigned char*,unsigned char*,int) ;
 int FUNC_2 (char*,...) ;
 int FUNC_3 (struct au0828_dev*,struct au0828_dmaqueue*,struct au0828_buffer*) ;
 int FUNC_4 (struct au0828_dmaqueue*,struct au0828_buffer**) ;
 scalar_t__ VAR_5 ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (struct au0828_dev*,int,int) ;
 int FUNC_7 (struct au0828_dev*,struct au0828_dmaqueue*,struct au0828_buffer*) ;
 int FUNC_8 (struct au0828_dmaqueue*,struct au0828_buffer**) ;
 unsigned char* FUNC_9 (int *) ;

__attribute__((used)) static inline int FUNC_10(struct au0828_dev *VAR_6, struct urb *VAR_7)
{
 struct au0828_buffer *VAR_8;
 struct au0828_buffer *VAR_9;
 struct au0828_dmaqueue *VAR_10 = VAR_7->context;
 struct au0828_dmaqueue *VAR_11 = &VAR_6->vbiq;
 unsigned char *VAR_12 = ((void*)0);
 unsigned char *VAR_13 = ((void*)0);
 int VAR_14, VAR_15 = 0, VAR_16 = 1;
 unsigned char *VAR_17;
 unsigned char VAR_18;
 unsigned int VAR_19;
 unsigned int VAR_20, VAR_21;

 if (!VAR_6)
  return 0;

 if ((VAR_6->dev_state & VAR_0) ||
     (VAR_6->dev_state & VAR_1))
  return 0;

 if (VAR_7->status < 0) {
  FUNC_6(VAR_6, -1, VAR_7->status);
  if (VAR_7->status == -VAR_2)
   return 0;
 }

 VAR_8 = VAR_6->isoc_ctl.buf;
 if (VAR_8 != ((void*)0))
  VAR_12 = FUNC_9(&VAR_8->vb);

 VAR_9 = VAR_6->isoc_ctl.vbi_buf;
 if (VAR_9 != ((void*)0))
  VAR_13 = FUNC_9(&VAR_9->vb);

 for (VAR_14 = 0; VAR_14 < VAR_7->number_of_packets; VAR_14++) {
  int VAR_22 = VAR_7->iso_frame_desc[VAR_14].status;

  if (VAR_22 < 0) {
   FUNC_6(VAR_6, VAR_14, VAR_22);
   if (VAR_7->iso_frame_desc[VAR_14].status != -VAR_3)
    continue;
  }

  if (VAR_7->iso_frame_desc[VAR_14].actual_length <= 0)
   continue;

  if (VAR_7->iso_frame_desc[VAR_14].actual_length >
      VAR_6->max_pkt_size) {
   FUNC_2("packet bigger than packet size");
   continue;
  }

  VAR_17 = VAR_7->transfer_buffer + VAR_7->iso_frame_desc[VAR_14].offset;
  VAR_18 = VAR_17[0];
  VAR_15 = VAR_7->iso_frame_desc[VAR_14].actual_length - 4;
  VAR_17 += 4;

  if (VAR_18 & 0x80) {
   VAR_15 -= 4;
   VAR_17 += 4;
   FUNC_2("Video frame %s\n",
           (VAR_18 & 0x40) ? "odd" : "even");
   if (VAR_18 & 0x40) {

    if (VAR_9 != ((void*)0))
     FUNC_7(VAR_6,
         VAR_11,
         VAR_9);
    FUNC_8(VAR_11, &VAR_9);
    if (VAR_9 == ((void*)0))
     VAR_13 = ((void*)0);
    else
     VAR_13 = FUNC_9(
      &VAR_9->vb);


    if (VAR_8 != ((void*)0))
     FUNC_3(VAR_6, VAR_10, VAR_8);
    FUNC_4(VAR_10, &VAR_8);
    if (VAR_8 == ((void*)0))
     VAR_12 = ((void*)0);
    else
     VAR_12 = FUNC_9(&VAR_8->vb);



    if (VAR_6->vid_timeout_running)
     FUNC_5(&VAR_6->vid_timeout,
        VAR_5 + (VAR_4 / 10));
    if (VAR_6->vbi_timeout_running)
     FUNC_5(&VAR_6->vbi_timeout,
        VAR_5 + (VAR_4 / 10));
   }

   if (VAR_8 != ((void*)0)) {
    if (VAR_18 & 0x40)
     VAR_8->top_field = 1;
    else
     VAR_8->top_field = 0;
   }

   if (VAR_9 != ((void*)0)) {
    if (VAR_18 & 0x40)
     VAR_9->top_field = 1;
    else
     VAR_9->top_field = 0;
   }

   VAR_6->vbi_read = 0;
   VAR_11->pos = 0;
   VAR_10->pos = 0;
  }

  VAR_19 = VAR_6->vbi_width * VAR_6->vbi_height * 2;
  if (VAR_6->vbi_read < VAR_19) {
   VAR_20 = VAR_19 - VAR_6->vbi_read;
   if (VAR_15 < VAR_20)
    VAR_21 = VAR_15;
   else
    VAR_21 = VAR_20;

   if (VAR_9 != ((void*)0))
    FUNC_0(VAR_6, VAR_11, VAR_9, VAR_17,
      VAR_13, VAR_15);

   VAR_15 -= VAR_21;
   VAR_17 += VAR_21;
   VAR_6->vbi_read += VAR_21;
  }

  if (VAR_6->vbi_read >= VAR_19 && VAR_8 != ((void*)0))
   FUNC_1(VAR_6, VAR_10, VAR_8, VAR_17, VAR_12, VAR_15);
 }
 return VAR_16;
}
