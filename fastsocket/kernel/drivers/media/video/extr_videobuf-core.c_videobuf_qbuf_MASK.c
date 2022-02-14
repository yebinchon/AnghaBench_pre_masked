
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct videobuf_queue {scalar_t__ type; scalar_t__ inputs; int wait; int irqlock; TYPE_3__* ops; scalar_t__ streaming; int stream; struct videobuf_buffer** bufs; scalar_t__ reading; TYPE_1__* int_ops; } ;
struct videobuf_buffer {int memory; scalar_t__ state; scalar_t__ input; int stream; int boff; int baddr; int bsize; int ts; int field; int size; int magic; } ;
struct TYPE_7__ {int offset; int userptr; } ;
struct v4l2_buffer {int memory; scalar_t__ type; size_t index; int flags; scalar_t__ input; TYPE_2__ m; int length; int timestamp; int field; int bytesused; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;
struct TYPE_10__ {TYPE_4__* mm; } ;
struct TYPE_9__ {int mmap_sem; } ;
struct TYPE_8__ {int (* buf_prepare ) (struct videobuf_queue*,struct videobuf_buffer*,int) ;int (* buf_queue ) (struct videobuf_queue*,struct videobuf_buffer*) ;int (* buf_release ) (struct videobuf_queue*,struct videobuf_buffer*) ;} ;
struct TYPE_6__ {int magic; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;



 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 size_t VAR_11 ;
 TYPE_5__* VAR_12 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int,char*,...) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int ,unsigned long) ;
 int FUNC_5 (int ,unsigned long) ;
 int FUNC_6 (struct videobuf_queue*,struct videobuf_buffer*) ;
 int FUNC_7 (struct videobuf_queue*,struct videobuf_buffer*,int) ;
 int FUNC_8 (struct videobuf_queue*,struct videobuf_buffer*) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct videobuf_queue*) ;
 int FUNC_11 (struct videobuf_queue*) ;
 int FUNC_12 (struct videobuf_queue*) ;
 int FUNC_13 (int *) ;

int FUNC_14(struct videobuf_queue *VAR_13, struct v4l2_buffer *VAR_14)
{
 struct videobuf_buffer *VAR_15;
 enum v4l2_field VAR_16;
 unsigned long VAR_17 = 0;
 int VAR_18;

 FUNC_0(VAR_13->int_ops->magic, VAR_3);

 if (VAR_14->memory == 130)
  FUNC_1(&VAR_12->mm->mmap_sem);

 FUNC_11(VAR_13);
 VAR_18 = -VAR_0;
 if (VAR_13->reading) {
  FUNC_2(1, "qbuf: Reading running...\n");
  goto done;
 }
 VAR_18 = -VAR_1;
 if (VAR_14->type != VAR_13->type) {
  FUNC_2(1, "qbuf: Wrong type.\n");
  goto done;
 }
 if (VAR_14->index >= VAR_11) {
  FUNC_2(1, "qbuf: index out of range.\n");
  goto done;
 }
 VAR_15 = VAR_13->bufs[VAR_14->index];
 if (((void*)0) == VAR_15) {
  FUNC_2(1, "qbuf: buffer is null.\n");
  goto done;
 }
 FUNC_0(VAR_15->magic, VAR_2);
 if (VAR_15->memory != VAR_14->memory) {
  FUNC_2(1, "qbuf: memory type is wrong.\n");
  goto done;
 }
 if (VAR_15->state != VAR_10 && VAR_15->state != VAR_9) {
  FUNC_2(1, "qbuf: buffer is already queued or active.\n");
  goto done;
 }

 if (VAR_14->flags & VAR_5) {
  if (VAR_14->input >= VAR_13->inputs) {
   FUNC_2(1, "qbuf: wrong input.\n");
   goto done;
  }
  VAR_15->input = VAR_14->input;
 } else {
  VAR_15->input = VAR_4;
 }

 switch (VAR_14->memory) {
 case 130:
  if (0 == VAR_15->baddr) {
   FUNC_2(1, "qbuf: mmap requested "
       "but buffer addr is zero!\n");
   goto done;
  }
  if (VAR_13->type == VAR_8
      || VAR_13->type == VAR_7
      || VAR_13->type == VAR_6) {
   VAR_15->size = VAR_14->bytesused;
   VAR_15->field = VAR_14->field;
   VAR_15->ts = VAR_14->timestamp;
  }
  break;
 case 128:
  if (VAR_14->length < VAR_15->bsize) {
   FUNC_2(1, "qbuf: buffer length is not enough\n");
   goto done;
  }
  if (VAR_10 != VAR_15->state &&
      VAR_15->baddr != VAR_14->m.userptr)
   VAR_13->ops->buf_release(VAR_13, VAR_15);
  VAR_15->baddr = VAR_14->m.userptr;
  break;
 case 129:
  VAR_15->boff = VAR_14->m.offset;
  break;
 default:
  FUNC_2(1, "qbuf: wrong memory type\n");
  goto done;
 }

 FUNC_2(1, "qbuf: requesting next field\n");
 VAR_16 = FUNC_10(VAR_13);
 VAR_18 = VAR_13->ops->buf_prepare(VAR_13, VAR_15, VAR_16);
 if (0 != VAR_18) {
  FUNC_2(1, "qbuf: buffer_prepare returned %d\n", VAR_18);
  goto done;
 }

 FUNC_3(&VAR_15->stream, &VAR_13->stream);
 if (VAR_13->streaming) {
  FUNC_4(VAR_13->irqlock, VAR_17);
  VAR_13->ops->buf_queue(VAR_13, VAR_15);
  FUNC_5(VAR_13->irqlock, VAR_17);
 }
 FUNC_2(1, "qbuf: succeeded\n");
 VAR_18 = 0;
 FUNC_13(&VAR_13->wait);

done:
 FUNC_12(VAR_13);

 if (VAR_14->memory == 130)
  FUNC_9(&VAR_12->mm->mmap_sem);

 return VAR_18;
}
