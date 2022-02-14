
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vpfe_subdev_info {int * inputs; } ;
struct vpfe_device {TYPE_1__* cfg; int v4l2_dev; } ;
struct v4l2_input {int index; } ;
struct file {int dummy; } ;
struct TYPE_2__ {struct vpfe_subdev_info* sub_devs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct v4l2_input*,int *,int) ;
 int FUNC_1 (int,int ,int *,char*) ;
 int FUNC_2 (int *,char*) ;
 struct vpfe_device* FUNC_3 (struct file*) ;
 scalar_t__ FUNC_4 (struct vpfe_device*,int*,int*,int ) ;

__attribute__((used)) static int FUNC_5(struct file *VAR_2, void *VAR_3,
     struct v4l2_input *VAR_4)
{
 struct vpfe_device *VAR_5 = FUNC_3(VAR_2);
 struct vpfe_subdev_info *VAR_6;
 int VAR_7, VAR_8 ;

 FUNC_1(1, VAR_1, &VAR_5->v4l2_dev, "vpfe_enum_input\n");

 if (FUNC_4(VAR_5,
     &VAR_7,
     &VAR_8,
     VAR_4->index) < 0) {
  FUNC_2(&VAR_5->v4l2_dev, "input information not found"
    " for the subdev\n");
  return -VAR_0;
 }
 VAR_6 = &VAR_5->cfg->sub_devs[VAR_7];
 FUNC_0(VAR_4, &VAR_6->inputs[VAR_8], sizeof(struct v4l2_input));
 return 0;
}
