
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_buffer {size_t index; int flags; } ;
struct usbvision_frame {scalar_t__ grabstate; int frame; int v4l2_format; scalar_t__ scanlength; int scanstate; } ;
struct usb_usbvision {size_t num_frames; int queue_lock; int inqueue; struct usbvision_frame* frame; int palette; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int VAR_5 ;
 int FUNC_1 (int *,unsigned long) ;
 int FUNC_2 (int *,unsigned long) ;
 struct usb_usbvision* FUNC_3 (struct file*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_6, void *VAR_7, struct v4l2_buffer *VAR_8)
{
 struct usb_usbvision *VAR_9 = FUNC_3(VAR_6);
 struct usbvision_frame *VAR_10;
 unsigned long VAR_11;


 if (VAR_8->index >= VAR_9->num_frames)
  return -VAR_1;

 VAR_10 = &VAR_9->frame[VAR_8->index];

 if (VAR_10->grabstate != VAR_4)
  return -VAR_0;


 VAR_10->grabstate = VAR_3;
 VAR_10->scanstate = VAR_5;
 VAR_10->scanlength = 0;

 VAR_8->flags &= ~VAR_2;


 VAR_10->v4l2_format = VAR_9->palette;

 FUNC_1(&VAR_9->queue_lock, VAR_11);
 FUNC_0(&VAR_9->frame[VAR_8->index].frame, &VAR_9->inqueue);
 FUNC_2(&VAR_9->queue_lock, VAR_11);

 return 0;
}
