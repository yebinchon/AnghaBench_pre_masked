
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef size_t u8 ;
struct vpif_fh {int* io_allowed; int initialized; struct channel_obj* channel; } ;
struct videobuf_buffer {int dummy; } ;
struct v4l2_requestbuffers {int memory; int type; } ;
struct file {int dummy; } ;
struct TYPE_4__ {int field; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct TYPE_6__ {TYPE_2__ fmt; } ;
struct common_obj {int io_usrs; int lock; int buffer_queue; int dma_queue; int memory; TYPE_3__ fmt; int irqlock; } ;
struct channel_obj {scalar_t__ channel_id; struct common_obj* common; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 size_t VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_8 ;
 int FUNC_3 (int *,int *,int *,int *,int ,int ,int,struct vpif_fh*) ;
 int FUNC_4 (int *,struct v4l2_requestbuffers*) ;
 int FUNC_5 (int,int ,char*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_9, void *VAR_10,
   struct v4l2_requestbuffers *VAR_11)
{
 struct vpif_fh *VAR_12 = VAR_10;
 struct channel_obj *VAR_13 = VAR_12->channel;
 struct common_obj *VAR_14;
 u8 VAR_15 = 0;
 int VAR_16 = 0;

 FUNC_5(2, VAR_7, "vpif_reqbufs\n");





 if ((VAR_4 == VAR_13->channel_id)
     || (VAR_5 == VAR_13->channel_id)) {
  if (!VAR_12->initialized) {
   FUNC_5(1, VAR_7, "Channel Busy\n");
   return -VAR_0;
  }
 }

 if (VAR_3 != VAR_11->type)
  return -VAR_1;

 VAR_15 = VAR_6;

 VAR_14 = &VAR_13->common[VAR_15];

 if (FUNC_1(&VAR_14->lock))
  return -VAR_2;

 if (0 != VAR_14->io_usrs) {
  VAR_16 = -VAR_0;
  goto reqbuf_exit;
 }


 FUNC_3(&VAR_14->buffer_queue,
         &VAR_8, ((void*)0),
         &VAR_14->irqlock,
         VAR_11->type,
         VAR_14->fmt.fmt.pix.field,
         sizeof(struct videobuf_buffer), VAR_12);


 VAR_12->io_allowed[VAR_15] = 1;

 VAR_14->io_usrs = 1;

 VAR_14->memory = VAR_11->memory;
 FUNC_0(&VAR_14->dma_queue);


 VAR_16 = FUNC_4(&VAR_14->buffer_queue, VAR_11);

reqbuf_exit:
 FUNC_2(&VAR_14->lock);
 return VAR_16;
}
