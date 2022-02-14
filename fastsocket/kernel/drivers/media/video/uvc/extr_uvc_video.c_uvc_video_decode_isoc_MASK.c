
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u8 ;
struct uvc_streaming {int queue; TYPE_3__* cur_format; } ;
struct TYPE_5__ {scalar_t__ length; scalar_t__ bytesused; } ;
struct uvc_buffer {int error; scalar_t__ state; TYPE_2__ buf; } ;
struct urb {int number_of_packets; TYPE_1__* iso_frame_desc; int * transfer_buffer; } ;
struct TYPE_6__ {int flags; } ;
struct TYPE_4__ {scalar_t__ status; int offset; scalar_t__ actual_length; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 struct uvc_buffer* FUNC_0 (int *,struct uvc_buffer*) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (struct uvc_streaming*,struct uvc_buffer*,int *,scalar_t__) ;
 int FUNC_3 (struct uvc_streaming*,struct uvc_buffer*,int *,scalar_t__) ;
 int FUNC_4 (struct uvc_streaming*,struct uvc_buffer*,int *,scalar_t__) ;

__attribute__((used)) static void FUNC_5(struct urb *VAR_4, struct uvc_streaming *VAR_5,
 struct uvc_buffer *VAR_6)
{
 u8 *VAR_7;
 int VAR_8, VAR_9;

 for (VAR_9 = 0; VAR_9 < VAR_4->number_of_packets; ++VAR_9) {
  if (VAR_4->iso_frame_desc[VAR_9].status < 0) {
   FUNC_1(VAR_3, "USB isochronous frame "
    "lost (%d).\n", VAR_4->iso_frame_desc[VAR_9].status);

   if (VAR_6 != ((void*)0))
    VAR_6->error = 1;
   continue;
  }


  VAR_7 = VAR_4->transfer_buffer + VAR_4->iso_frame_desc[VAR_9].offset;
  do {
   VAR_8 = FUNC_4(VAR_5, VAR_6, VAR_7,
    VAR_4->iso_frame_desc[VAR_9].actual_length);
   if (VAR_8 == -VAR_0)
    VAR_6 = FUNC_0(&VAR_5->queue,
           VAR_6);
  } while (VAR_8 == -VAR_0);

  if (VAR_8 < 0)
   continue;


  FUNC_2(VAR_5, VAR_6, VAR_7 + VAR_8,
   VAR_4->iso_frame_desc[VAR_9].actual_length - VAR_8);


  FUNC_3(VAR_5, VAR_6, VAR_7,
   VAR_4->iso_frame_desc[VAR_9].actual_length);

  if (VAR_6->state == VAR_1) {
   if (VAR_6->buf.length != VAR_6->buf.bytesused &&
       !(VAR_5->cur_format->flags &
         VAR_2))
    VAR_6->error = 1;

   VAR_6 = FUNC_0(&VAR_5->queue, VAR_6);
  }
 }
}
