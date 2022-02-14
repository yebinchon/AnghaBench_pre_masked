
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct video_device {int vfl_type; } ;
struct file {struct cx23885_fh* private_data; } ;
struct cx23885_fh {int radio; int type; int width; int height; int vidq; int fmt; struct cx23885_dev* dev; } ;
struct cx23885_dev {int slock; TYPE_1__* pci; } ;
struct cx23885_buffer {int dummy; } ;
typedef enum v4l2_buf_type { ____Placeholder_v4l2_buf_type } v4l2_buf_type ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;



 int VAR_6 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int ) ;
 struct cx23885_fh* FUNC_2 (int,int ) ;
 int * VAR_7 ;
 struct video_device* FUNC_3 (struct file*) ;
 int FUNC_4 (struct video_device*) ;
 struct cx23885_dev* FUNC_5 (struct file*) ;
 int FUNC_6 (int *,int *,int *,int *,int,int ,int,struct cx23885_fh*,int *) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_8)
{
 struct video_device *VAR_9 = FUNC_3(VAR_8);
 struct cx23885_dev *VAR_10 = FUNC_5(VAR_8);
 struct cx23885_fh *VAR_11;
 enum v4l2_buf_type VAR_12 = 0;
 int VAR_13 = 0;

 switch (VAR_9->vfl_type) {
 case 130:
  VAR_12 = VAR_3;
  break;
 case 128:
  VAR_12 = VAR_2;
  break;
 case 129:
  VAR_13 = 1;
  break;
 }

 FUNC_0(1, "open dev=%s radio=%d type=%s\n",
  FUNC_4(VAR_9), VAR_13, VAR_7[VAR_12]);


 VAR_11 = FUNC_2(sizeof(*VAR_11), VAR_1);
 if (((void*)0) == VAR_11)
  return -VAR_0;

 VAR_8->private_data = VAR_11;
 VAR_11->dev = VAR_10;
 VAR_11->radio = VAR_13;
 VAR_11->type = VAR_12;
 VAR_11->width = 320;
 VAR_11->height = 240;
 VAR_11->fmt = FUNC_1(VAR_5);

 FUNC_6(&VAR_11->vidq, &VAR_6,
       &VAR_10->pci->dev, &VAR_10->slock,
       VAR_3,
       VAR_4,
       sizeof(struct cx23885_buffer),
       VAR_11, ((void*)0));

 FUNC_0(1, "post videobuf_queue_init()\n");

 return 0;
}
