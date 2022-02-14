
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct vpfe_fh {int io_allowed; } ;
struct TYPE_4__ {int field; } ;
struct TYPE_5__ {TYPE_1__ pix; } ;
struct TYPE_6__ {TYPE_2__ fmt; } ;
struct vpfe_device {int io_usrs; scalar_t__ memory; int lock; int buffer_queue; int dma_queue; TYPE_3__ fmt; int irqlock; int v4l2_dev; } ;
struct videobuf_buffer {int dummy; } ;
struct v4l2_requestbuffers {scalar_t__ memory; int type; } ;
struct file {struct vpfe_fh* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int ,int *,char*) ;
 int FUNC_4 (int *,char*) ;
 struct vpfe_device* FUNC_5 (struct file*) ;
 int FUNC_6 (int *,int *,int *,int *,int ,int ,int,struct vpfe_fh*) ;
 int FUNC_7 (int *,struct v4l2_requestbuffers*) ;
 int VAR_5 ;

__attribute__((used)) static int FUNC_8(struct file *VAR_6, void *VAR_7,
   struct v4l2_requestbuffers *VAR_8)
{
 struct vpfe_device *VAR_9 = FUNC_5(VAR_6);
 struct vpfe_fh *VAR_10 = VAR_6->private_data;
 int VAR_11 = 0;

 FUNC_3(1, VAR_4, &VAR_9->v4l2_dev, "vpfe_reqbufs\n");

 if (VAR_2 != VAR_8->type) {
  FUNC_4(&VAR_9->v4l2_dev, "Invalid buffer type\n");
  return -VAR_1;
 }

 if (VAR_3 == VAR_8->memory) {

  FUNC_3(1, VAR_4, &VAR_9->v4l2_dev, "vpfe_reqbufs:"
    " USERPTR IO not supported\n");
  return -VAR_1;
 }

 VAR_11 = FUNC_1(&VAR_9->lock);
 if (VAR_11)
  return VAR_11;

 if (VAR_9->io_usrs != 0) {
  FUNC_4(&VAR_9->v4l2_dev, "Only one IO user allowed\n");
  VAR_11 = -VAR_0;
  goto unlock_out;
 }

 VAR_9->memory = VAR_8->memory;
 FUNC_6(&VAR_9->buffer_queue,
    &VAR_5,
    ((void*)0),
    &VAR_9->irqlock,
    VAR_8->type,
    VAR_9->fmt.fmt.pix.field,
    sizeof(struct videobuf_buffer),
    VAR_10);

 VAR_10->io_allowed = 1;
 VAR_9->io_usrs = 1;
 FUNC_0(&VAR_9->dma_queue);
 VAR_11 = FUNC_7(&VAR_9->buffer_queue, VAR_8);
unlock_out:
 FUNC_2(&VAR_9->lock);
 return VAR_11;
}
