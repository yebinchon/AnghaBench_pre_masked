
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int v4l2_std_id ;
struct vpfe_subdev_info {int grp_id; } ;
struct vpfe_device {int lock; int v4l2_dev; scalar_t__ started; struct vpfe_subdev_info* current_subdev; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_3 ;
 int FUNC_2 (int,int ,int *,char*) ;
 int FUNC_3 (int *,int ,int ,int ,int ) ;
 int FUNC_4 (int *,char*) ;
 struct vpfe_device* FUNC_5 (struct file*) ;
 int FUNC_6 (struct vpfe_device*,int *) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_4, void *VAR_5, v4l2_std_id *VAR_6)
{
 struct vpfe_device *VAR_7 = FUNC_5(VAR_4);
 struct vpfe_subdev_info *VAR_8;
 int VAR_9 = 0;

 FUNC_2(1, VAR_2, &VAR_7->v4l2_dev, "vpfe_s_std\n");


 VAR_9 = FUNC_0(&VAR_7->lock);
 if (VAR_9)
  return VAR_9;

 VAR_8 = VAR_7->current_subdev;

 if (VAR_7->started) {
  FUNC_4(&VAR_7->v4l2_dev, "streaming is started\n");
  VAR_9 = -VAR_0;
  goto unlock_out;
 }

 VAR_9 = FUNC_3(&VAR_7->v4l2_dev, VAR_8->grp_id,
      VAR_1, VAR_3, *VAR_6);
 if (VAR_9 < 0) {
  FUNC_4(&VAR_7->v4l2_dev, "Failed to set standard\n");
  goto unlock_out;
 }
 VAR_9 = FUNC_6(VAR_7, VAR_6);

unlock_out:
 FUNC_1(&VAR_7->lock);
 return VAR_9;
}
