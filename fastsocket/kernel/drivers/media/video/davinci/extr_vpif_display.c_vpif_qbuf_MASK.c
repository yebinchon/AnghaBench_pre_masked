
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct vpif_fh {int * io_allowed; struct channel_obj* channel; } ;
struct videobuf_buffer {int memory; scalar_t__ state; unsigned long boff; int stream; int baddr; int bsize; } ;
struct TYPE_7__ {int userptr; } ;
struct v4l2_buffer {scalar_t__ type; size_t index; int memory; TYPE_2__ m; int length; } ;
struct file {int dummy; } ;
struct TYPE_8__ {int vb_lock; int stream; int field; struct videobuf_buffer** bufs; } ;
struct TYPE_6__ {scalar_t__ type; } ;
struct common_obj {TYPE_3__ buffer_queue; scalar_t__ cbtm_off; scalar_t__ ctop_off; scalar_t__ ybtm_off; scalar_t__ ytop_off; int (* set_addr ) (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;struct videobuf_buffer* next_frm; scalar_t__ started; struct videobuf_buffer* cur_frm; int dma_queue; TYPE_1__ fmt; } ;
struct channel_obj {scalar_t__ field_id; struct common_obj* common; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;


 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (unsigned long) ;
 int FUNC_3 (unsigned long) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (scalar_t__,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_7 (TYPE_3__*,struct v4l2_buffer*) ;
 int FUNC_8 (TYPE_3__*,struct videobuf_buffer*,int ) ;
 int FUNC_9 (TYPE_3__*,struct videobuf_buffer*) ;
 int FUNC_10 (char*) ;

__attribute__((used)) static int FUNC_11(struct file *VAR_7, void *VAR_8, struct v4l2_buffer *VAR_9)
{

 struct vpif_fh *VAR_10 = VAR_8;
 struct channel_obj *VAR_11 = VAR_10->channel;
 struct common_obj *VAR_12 = &VAR_11->common[VAR_6];
 struct v4l2_buffer VAR_13 = *VAR_9;
 struct videobuf_buffer *VAR_14;
 unsigned long VAR_15 = 0;
 unsigned long VAR_16;
 int VAR_17 = 0;

 if (VAR_12->fmt.type != VAR_13.type)
  return -VAR_1;

 if (!VAR_10->io_allowed[VAR_6]) {
  FUNC_10("fh->io_allowed\n");
  return -VAR_0;
 }

 if (!(FUNC_1(&VAR_12->dma_queue)) ||
     (VAR_12->cur_frm != VAR_12->next_frm) ||
     !(VAR_12->started) ||
     (VAR_12->started && (0 == VAR_11->field_id)))
  return FUNC_7(&VAR_12->buffer_queue, VAR_9);


 FUNC_4(&VAR_12->buffer_queue.vb_lock);
 VAR_14 = VAR_12->buffer_queue.bufs[VAR_13.index];
 if (VAR_14->memory != VAR_13.memory) {
  FUNC_10("invalid buffer type\n");
  goto qbuf_exit;
 }

 if ((VAR_14->state == VAR_5) ||
     (VAR_14->state == VAR_3)) {
  FUNC_10("invalid state\n");
  goto qbuf_exit;
 }

 switch (VAR_14->memory) {
 case 129:
  if (VAR_14->baddr == 0)
   goto qbuf_exit;
  break;

 case 128:
  if (VAR_13.length < VAR_14->bsize)
   goto qbuf_exit;

  if ((VAR_4 != VAR_14->state)
       && (VAR_14->baddr != VAR_13.m.userptr))
   FUNC_9(&VAR_12->buffer_queue, VAR_14);
   VAR_14->baddr = VAR_13.m.userptr;
  break;

 default:
  goto qbuf_exit;
 }

 FUNC_3(VAR_16);
 VAR_17 = FUNC_8(&VAR_12->buffer_queue, VAR_14,
     VAR_12->buffer_queue.field);
 if (VAR_17 < 0) {
  FUNC_2(VAR_16);
  goto qbuf_exit;
 }

 VAR_14->state = VAR_3;
 VAR_15 = VAR_14->boff;
 VAR_12->next_frm = VAR_14;
 if (VAR_13.type != VAR_2) {
  VAR_12->set_addr((VAR_15 + VAR_12->ytop_off),
     (VAR_15 + VAR_12->ybtm_off),
     (VAR_15 + VAR_12->ctop_off),
     (VAR_15 + VAR_12->cbtm_off));
 }

 FUNC_2(VAR_16);
 FUNC_0(&VAR_14->stream, &VAR_12->buffer_queue.stream);
 FUNC_5(&VAR_12->buffer_queue.vb_lock);
 return 0;

qbuf_exit:
 FUNC_5(&VAR_12->buffer_queue.vb_lock);
 return -VAR_1;
}
