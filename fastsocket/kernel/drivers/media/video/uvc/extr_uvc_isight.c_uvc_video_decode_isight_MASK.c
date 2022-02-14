
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct uvc_streaming {int queue; } ;
struct uvc_buffer {scalar_t__ state; } ;
struct urb {int number_of_packets; TYPE_1__* iso_frame_desc; scalar_t__ transfer_buffer; } ;
struct TYPE_2__ {scalar_t__ status; int actual_length; scalar_t__ offset; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *,struct uvc_buffer*,scalar_t__,int ) ;
 struct uvc_buffer* FUNC_1 (int *,struct uvc_buffer*) ;
 int FUNC_2 (int ,char*,scalar_t__) ;

void FUNC_3(struct urb *VAR_4, struct uvc_streaming *VAR_5,
  struct uvc_buffer *VAR_6)
{
 int VAR_7, VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_4->number_of_packets; ++VAR_8) {
  if (VAR_4->iso_frame_desc[VAR_8].status < 0) {
   FUNC_2(VAR_3, "USB isochronous frame "
      "lost (%d).\n",
      VAR_4->iso_frame_desc[VAR_8].status);
  }
  do {
   VAR_7 = FUNC_0(&VAR_5->queue, VAR_6,
     VAR_4->transfer_buffer +
     VAR_4->iso_frame_desc[VAR_8].offset,
     VAR_4->iso_frame_desc[VAR_8].actual_length);

   if (VAR_6 == ((void*)0))
    break;

   if (VAR_6->state == VAR_1 ||
       VAR_6->state == VAR_2)
    VAR_6 = FUNC_1(&VAR_5->queue,
       VAR_6);
  } while (VAR_7 == -VAR_0);
 }
}
