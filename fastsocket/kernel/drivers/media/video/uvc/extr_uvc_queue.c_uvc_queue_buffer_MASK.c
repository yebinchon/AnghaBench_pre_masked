
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_buffer {size_t index; scalar_t__ type; scalar_t__ memory; scalar_t__ bytesused; } ;
struct uvc_video_queue {scalar_t__ type; size_t count; int flags; int mutex; int irqlock; int irqqueue; int mainqueue; struct uvc_buffer* buffer; } ;
struct TYPE_2__ {scalar_t__ length; scalar_t__ bytesused; } ;
struct uvc_buffer {scalar_t__ state; int queue; int stream; TYPE_1__ buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,unsigned long) ;
 int FUNC_4 (int *,unsigned long) ;
 int FUNC_5 (int ,char*,...) ;

int FUNC_6(struct uvc_video_queue *VAR_9,
 struct v4l2_buffer *VAR_10)
{
 struct uvc_buffer *VAR_11;
 unsigned long VAR_12;
 int VAR_13 = 0;

 FUNC_5(VAR_5, "Queuing buffer %u.\n", VAR_10->index);

 if (VAR_10->type != VAR_9->type ||
     VAR_10->memory != VAR_8) {
  FUNC_5(VAR_5, "[E] Invalid buffer type (%u) "
   "and/or memory (%u).\n", VAR_10->type,
   VAR_10->memory);
  return -VAR_0;
 }

 FUNC_1(&VAR_9->mutex);
 if (VAR_10->index >= VAR_9->count) {
  FUNC_5(VAR_5, "[E] Out of range index.\n");
  VAR_13 = -VAR_0;
  goto done;
 }

 VAR_11 = &VAR_9->buffer[VAR_10->index];
 if (VAR_11->state != VAR_2) {
  FUNC_5(VAR_5, "[E] Invalid buffer state "
   "(%u).\n", VAR_11->state);
  VAR_13 = -VAR_0;
  goto done;
 }

 if (VAR_10->type == VAR_7 &&
     VAR_10->bytesused > VAR_11->buf.length) {
  FUNC_5(VAR_5, "[E] Bytes used out of bounds.\n");
  VAR_13 = -VAR_0;
  goto done;
 }

 FUNC_3(&VAR_9->irqlock, VAR_12);
 if (VAR_9->flags & VAR_4) {
  FUNC_4(&VAR_9->irqlock, VAR_12);
  VAR_13 = -VAR_1;
  goto done;
 }
 VAR_11->state = VAR_3;
 if (VAR_10->type == VAR_6)
  VAR_11->buf.bytesused = 0;
 else
  VAR_11->buf.bytesused = VAR_10->bytesused;

 FUNC_0(&VAR_11->stream, &VAR_9->mainqueue);
 FUNC_0(&VAR_11->queue, &VAR_9->irqqueue);
 FUNC_4(&VAR_9->irqlock, VAR_12);

done:
 FUNC_2(&VAR_9->mutex);
 return VAR_13;
}
