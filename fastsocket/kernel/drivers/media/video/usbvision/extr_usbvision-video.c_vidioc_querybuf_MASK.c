
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int offset; } ;
struct v4l2_buffer {size_t index; int length; int sequence; int timestamp; int field; void* memory; TYPE_1__ m; int flags; } ;
struct usbvision_frame {scalar_t__ grabstate; int sequence; int timestamp; } ;
struct TYPE_4__ {int bytes_per_pixel; } ;
struct usb_usbvision {size_t num_frames; int curwidth; int curheight; struct usbvision_frame* frame; TYPE_2__ palette; int max_frame_size; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 void* VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 struct usb_usbvision* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_9,
       void *VAR_10, struct v4l2_buffer *VAR_11)
{
 struct usb_usbvision *VAR_12 = FUNC_1(VAR_9);
 struct usbvision_frame *VAR_13;



 if (VAR_11->index >= VAR_12->num_frames)
  return -VAR_0;

 VAR_11->flags = 0;
 VAR_13 = &VAR_12->frame[VAR_11->index];
 if (VAR_13->grabstate >= VAR_7)
  VAR_11->flags |= VAR_3;
 if (VAR_13->grabstate >= VAR_6)
  VAR_11->flags |= VAR_1;
 if (VAR_13->grabstate == VAR_8)
  VAR_11->flags |= VAR_2;
 VAR_11->memory = VAR_5;

 VAR_11->m.offset = VAR_11->index * FUNC_0(VAR_12->max_frame_size);

 VAR_11->memory = VAR_5;
 VAR_11->field = VAR_4;
 VAR_11->length = VAR_12->curwidth *
  VAR_12->curheight *
  VAR_12->palette.bytes_per_pixel;
 VAR_11->timestamp = VAR_12->frame[VAR_11->index].timestamp;
 VAR_11->sequence = VAR_12->frame[VAR_11->index].sequence;
 return 0;
}
