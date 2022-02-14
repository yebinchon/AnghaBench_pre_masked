
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ext_controls {scalar_t__ ctrl_class; } ;
struct file {int dummy; } ;
struct cx8802_fh {struct cx8802_dev* dev; } ;
struct cx2341x_mpeg_params {int dummy; } ;
struct cx8802_dev {struct cx2341x_mpeg_params params; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct cx2341x_mpeg_params*,int ,struct v4l2_ext_controls*,int ) ;

__attribute__((used)) static int FUNC_1 (struct file *VAR_3, void *VAR_4,
          struct v4l2_ext_controls *VAR_5)
{
 struct cx8802_dev *VAR_6 = ((struct cx8802_fh *)VAR_4)->dev;
 struct cx2341x_mpeg_params VAR_7;
 int VAR_8;

 if (VAR_5->ctrl_class != VAR_1)
  return -VAR_0;
 VAR_7 = VAR_6->params;
 VAR_8 = FUNC_0(&VAR_7, 0, VAR_5, VAR_2);

 return VAR_8;
}
