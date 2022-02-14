
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uvc_streaming_control {scalar_t__ bFormatIndex; scalar_t__ bFrameIndex; } ;
struct uvc_streaming {unsigned int nformats; scalar_t__ type; int decode; TYPE_2__* intf; TYPE_1__* dev; struct uvc_frame* cur_frame; struct uvc_format* cur_format; struct uvc_format* format; int intfnum; int queue; int active; struct uvc_streaming_control ctrl; } ;
struct uvc_frame {scalar_t__ bFrameIndex; } ;
struct uvc_format {scalar_t__ index; unsigned int nframes; struct uvc_frame* frame; } ;
struct TYPE_4__ {int num_altsetting; } ;
struct TYPE_3__ {int quirks; int udev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_0 (int *,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (struct uvc_streaming*,struct uvc_streaming_control*,int,int ) ;
 int VAR_6 ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int *,scalar_t__,int) ;
 int FUNC_5 (struct uvc_streaming*,struct uvc_streaming_control*,int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

int FUNC_6(struct uvc_streaming *VAR_11)
{
 struct uvc_streaming_control *VAR_12 = &VAR_11->ctrl;
 struct uvc_format *VAR_13 = ((void*)0);
 struct uvc_frame *VAR_14 = ((void*)0);
 unsigned int VAR_15;
 int VAR_16;

 if (VAR_11->nformats == 0) {
  FUNC_3(VAR_1, "No supported video formats found.\n");
  return -VAR_0;
 }

 FUNC_0(&VAR_11->active, 0);


 FUNC_4(&VAR_11->queue, VAR_11->type, !VAR_6);






 FUNC_1(VAR_11->dev->udev, VAR_11->intfnum, 0);






 if (FUNC_2(VAR_11, VAR_12, 1, VAR_3) == 0)
  FUNC_5(VAR_11, VAR_12, 1);






 VAR_16 = FUNC_2(VAR_11, VAR_12, 1, VAR_2);
 if (VAR_16 < 0)
  return VAR_16;




 for (VAR_15 = VAR_11->nformats; VAR_15 > 0; --VAR_15) {
  VAR_13 = &VAR_11->format[VAR_15-1];
  if (VAR_13->index == VAR_12->bFormatIndex)
   break;
 }

 if (VAR_13->nframes == 0) {
  FUNC_3(VAR_1, "No frame descriptor found for the "
   "default format.\n");
  return -VAR_0;
 }






 for (VAR_15 = VAR_13->nframes; VAR_15 > 0; --VAR_15) {
  VAR_14 = &VAR_13->frame[VAR_15-1];
  if (VAR_14->bFrameIndex == VAR_12->bFrameIndex)
   break;
 }

 VAR_12->bFormatIndex = VAR_13->index;
 VAR_12->bFrameIndex = VAR_14->bFrameIndex;

 VAR_11->cur_format = VAR_13;
 VAR_11->cur_frame = VAR_14;


 if (VAR_11->type == VAR_5) {
  if (VAR_11->dev->quirks & VAR_4)
   VAR_11->decode = VAR_8;
  else if (VAR_11->intf->num_altsetting > 1)
   VAR_11->decode = VAR_9;
  else
   VAR_11->decode = VAR_7;
 } else {
  if (VAR_11->intf->num_altsetting == 1)
   VAR_11->decode = VAR_10;
  else {
   FUNC_3(VAR_1, "Isochronous endpoints are not "
    "supported for video output devices.\n");
   return -VAR_0;
  }
 }

 return 0;
}
