
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ext_controls {scalar_t__ ctrl_class; } ;
struct file {int dummy; } ;
struct cx2341x_mpeg_params {int dummy; } ;
struct cx231xx_fh {struct cx231xx* dev; } ;
struct cx231xx {struct cx2341x_mpeg_params mpeg_params; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cx2341x_mpeg_params*,int ,struct v4l2_ext_controls*,int ) ;
 int FUNC_1 (struct cx231xx*,int ,struct cx2341x_mpeg_params*,struct cx2341x_mpeg_params*) ;
 int FUNC_2 (int,char*) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_4, void *VAR_5,
    struct v4l2_ext_controls *VAR_6)
{
 struct cx231xx_fh *VAR_7 = VAR_5;
 struct cx231xx *VAR_8 = VAR_7->dev;
 struct cx2341x_mpeg_params VAR_9;
 int VAR_10;
 FUNC_2(3, "enter vidioc_s_ext_ctrls()\n");
 if (VAR_6->ctrl_class != VAR_1)
  return -VAR_0;

 VAR_9 = VAR_8->mpeg_params;
 VAR_10 = FUNC_0(&VAR_9, 0, VAR_6, VAR_2);
 if (VAR_10 == 0) {
  VAR_10 = FUNC_1(VAR_8, VAR_3,
   &VAR_8->mpeg_params, &VAR_9);
  VAR_8->mpeg_params = VAR_9;
 }

 return VAR_10;


return 0;
}
