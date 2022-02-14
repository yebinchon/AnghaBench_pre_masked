
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
struct TYPE_4__ {scalar_t__ field; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct TYPE_6__ {TYPE_2__ fmt; int type; } ;
struct common_obj {int io_usrs; int lock; int buffer_queue; int dma_queue; int memory; int irqlock; TYPE_3__ fmt; } ;
struct channel_obj {scalar_t__ channel_id; struct common_obj* common; } ;
typedef enum v4l2_field { ____Placeholder_v4l2_field } v4l2_field ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 size_t VAR_9 ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_10 ;
 int FUNC_3 (int *,int *,int *,int *,int ,int,int,struct vpif_fh*) ;
 int FUNC_4 (int *,struct v4l2_requestbuffers*) ;
 int FUNC_5 (char*) ;

__attribute__((used)) static int FUNC_6(struct file *VAR_11, void *VAR_12,
   struct v4l2_requestbuffers *VAR_13)
{
 struct vpif_fh *VAR_14 = VAR_12;
 struct channel_obj *VAR_15 = VAR_14->channel;
 struct common_obj *VAR_16;
 enum v4l2_field VAR_17;
 u8 VAR_18 = 0;
 int VAR_19 = 0;



 if ((VAR_7 == VAR_15->channel_id)
     || (VAR_8 == VAR_15->channel_id)) {
  if (!VAR_14->initialized) {
   FUNC_5("Channel Busy\n");
   return -VAR_0;
  }
 }

 if (VAR_3 != VAR_13->type)
  return -VAR_1;

 VAR_18 = VAR_9;

 VAR_16 = &VAR_15->common[VAR_18];
 if (FUNC_1(&VAR_16->lock))
  return -VAR_2;

 if (VAR_16->fmt.type != VAR_13->type) {
  VAR_19 = -VAR_1;
  goto reqbuf_exit;
 }

 if (0 != VAR_16->io_usrs) {
  VAR_19 = -VAR_0;
  goto reqbuf_exit;
 }

 if (VAR_13->type == VAR_3) {
  if (VAR_16->fmt.fmt.pix.field == VAR_4)
   VAR_17 = VAR_5;
  else
   VAR_17 = VAR_16->fmt.fmt.pix.field;
 } else {
  VAR_17 = VAR_6;
 }


 FUNC_3(&VAR_16->buffer_queue,
         &VAR_10, ((void*)0),
         &VAR_16->irqlock,
         VAR_13->type, VAR_17,
         sizeof(struct videobuf_buffer), VAR_14);


 VAR_14->io_allowed[VAR_18] = 1;

 VAR_16->io_usrs = 1;

 VAR_16->memory = VAR_13->memory;
 FUNC_0(&VAR_16->dma_queue);


 VAR_19 = FUNC_4(&VAR_16->buffer_queue, VAR_13);

reqbuf_exit:
 FUNC_2(&VAR_16->lock);
 return VAR_19;
}
