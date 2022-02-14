
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ext_controls {scalar_t__ ctrl_class; } ;
struct file {int dummy; } ;
struct cx8802_fh {struct cx8802_dev* dev; } ;
struct cx2341x_mpeg_params {int dummy; } ;
struct cx8802_dev {struct cx2341x_mpeg_params params; scalar_t__ mpeg_active; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cx8802_dev*) ;
 int FUNC_1 (struct cx2341x_mpeg_params*,int ,struct v4l2_ext_controls*,int ) ;
 int FUNC_2 (struct cx8802_dev*,int ,struct cx2341x_mpeg_params*,struct cx2341x_mpeg_params*) ;

__attribute__((used)) static int FUNC_3 (struct file *VAR_4, void *VAR_5,
          struct v4l2_ext_controls *VAR_6)
{
 struct cx8802_dev *VAR_7 = ((struct cx8802_fh *)VAR_5)->dev;
 struct cx2341x_mpeg_params VAR_8;
 int VAR_9;

 if (VAR_6->ctrl_class != VAR_1)
  return -VAR_0;

 if (VAR_7->mpeg_active)
  FUNC_0(VAR_7);

 VAR_8 = VAR_7->params;
 VAR_9 = FUNC_1(&VAR_8, 0, VAR_6, VAR_2);
 if (!VAR_9) {
  VAR_9 = FUNC_2(VAR_7, VAR_3, &VAR_7->params, &VAR_8);
  VAR_7->params = VAR_8;
 }
 return VAR_9;
}
