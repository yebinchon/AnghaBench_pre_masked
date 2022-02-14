
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ offset; } ;
struct v4l2_buffer {scalar_t__ type; scalar_t__ memory; int index; int flags; int bytesused; int sequence; int timecode; scalar_t__ reserved; scalar_t__ input; int length; TYPE_1__ m; int timestamp; int field; } ;
struct framebuf {scalar_t__ status; int num; } ;
struct file {int f_flags; } ;
struct camera_data {TYPE_2__* buffers; int frame_size; scalar_t__ frame_buffer; int present; int busy_lock; struct framebuf* curbuff; int wq_stream; } ;
struct TYPE_4__ {int status; scalar_t__ data; int seq; int timestamp; int length; } ;


 int FUNC_0 (char*,size_t,int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 int FUNC_1 (struct camera_data*) ;
 int FUNC_2 (int *,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (int ,int) ;

__attribute__((used)) static int FUNC_7(void *VAR_12,struct camera_data *VAR_13, struct file *VAR_14)
{
 struct v4l2_buffer *VAR_15 = VAR_12;
 int VAR_16;

 if(VAR_15->type != VAR_8 ||
    VAR_15->memory != VAR_10)
  return -VAR_1;

 VAR_16 = FUNC_1(VAR_13);

 if(VAR_16 < 0 && VAR_14->f_flags&VAR_5)
  return -VAR_0;

 if(VAR_16 < 0) {

  struct framebuf *VAR_17=VAR_13->curbuff;
  FUNC_4(&VAR_13->busy_lock);
  FUNC_6(VAR_13->wq_stream,
      !VAR_13->present ||
      (VAR_17=VAR_13->curbuff)->status == VAR_4);
  FUNC_3(&VAR_13->busy_lock);
  if (FUNC_5(VAR_11))
   return -VAR_3;
  if(!VAR_13->present)
   return -VAR_2;
  VAR_16 = VAR_17->num;
 }


 VAR_15->index = VAR_16;
 VAR_15->bytesused = VAR_13->buffers[VAR_15->index].length;
 VAR_15->flags = VAR_7 | VAR_6;
 VAR_15->field = VAR_9;
 VAR_15->timestamp = VAR_13->buffers[VAR_15->index].timestamp;
 VAR_15->sequence = VAR_13->buffers[VAR_15->index].seq;
 VAR_15->m.offset = VAR_13->buffers[VAR_15->index].data - VAR_13->frame_buffer;
 VAR_15->length = VAR_13->frame_size;
 VAR_15->input = 0;
 VAR_15->reserved = 0;
 FUNC_2(&VAR_15->timecode, 0, sizeof(VAR_15->timecode));

 FUNC_0("DQBUF #%d status:%d seq:%d length:%d\n", VAR_15->index,
     VAR_13->buffers[VAR_15->index].status, VAR_15->sequence, VAR_15->bytesused);

 return 0;
}
