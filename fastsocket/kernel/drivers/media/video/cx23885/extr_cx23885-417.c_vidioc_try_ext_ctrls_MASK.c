
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ext_controls {scalar_t__ ctrl_class; } ;
struct file {int dummy; } ;
struct cx23885_fh {struct cx23885_dev* dev; } ;
struct cx2341x_mpeg_params {int dummy; } ;
struct cx23885_dev {struct cx2341x_mpeg_params mpeg_params; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cx2341x_mpeg_params*,int ,struct v4l2_ext_controls*,int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, void *VAR_4,
    struct v4l2_ext_controls *VAR_5)
{
 struct cx23885_fh *VAR_6 = VAR_4;
 struct cx23885_dev *VAR_7 = VAR_6->dev;
 struct cx2341x_mpeg_params VAR_8;
 int VAR_9;

 if (VAR_5->ctrl_class != VAR_1)
  return -VAR_0;

 VAR_8 = VAR_7->mpeg_params;
 VAR_9 = FUNC_0(&VAR_8, 0, VAR_5, VAR_2);
 return VAR_9;
}
