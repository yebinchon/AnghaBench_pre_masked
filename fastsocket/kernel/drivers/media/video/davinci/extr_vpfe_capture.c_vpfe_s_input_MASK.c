
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u32 ;
struct vpfe_subdev_info {int ccdc_if_params; int grp_id; scalar_t__ can_route; struct vpfe_route* routes; } ;
struct vpfe_route {int output; int input; } ;
struct vpfe_device {unsigned int current_input; size_t std_index; int lock; struct vpfe_subdev_info* current_subdev; int v4l2_dev; TYPE_1__* cfg; scalar_t__ started; } ;
struct file {int dummy; } ;
struct TYPE_6__ {int (* set_hw_if_params ) (int *) ;} ;
struct TYPE_8__ {TYPE_2__ hw_ops; } ;
struct TYPE_7__ {int std_id; } ;
struct TYPE_5__ {struct vpfe_subdev_info* sub_devs; } ;


 int VAR_0 ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_4 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int,int ,int *,char*) ;
 int FUNC_4 (int *,int ,int ,int ,int ,int ,int ) ;
 int FUNC_5 (int *,char*) ;
 int VAR_5 ;
 struct vpfe_device* FUNC_6 (struct file*) ;
 int FUNC_7 (struct vpfe_device*,int *) ;
 scalar_t__ FUNC_8 (struct vpfe_device*,int*,int*,unsigned int) ;
 TYPE_3__* VAR_6 ;

__attribute__((used)) static int FUNC_9(struct file *VAR_7, void *VAR_8, unsigned int VAR_9)
{
 struct vpfe_device *VAR_10 = FUNC_6(VAR_7);
 struct vpfe_subdev_info *VAR_11;
 int VAR_12, VAR_13;
 struct vpfe_route *VAR_14;
 u32 VAR_15 = 0, VAR_16 = 0;
 int VAR_17 = -VAR_1;

 FUNC_3(1, VAR_3, &VAR_10->v4l2_dev, "vpfe_s_input\n");

 VAR_17 = FUNC_0(&VAR_10->lock);
 if (VAR_17)
  return VAR_17;





 if (VAR_10->started) {
  FUNC_5(&VAR_10->v4l2_dev, "Streaming is on\n");
  VAR_17 = -VAR_0;
  goto unlock_out;
 }

 if (FUNC_8(VAR_10,
     &VAR_12,
     &VAR_13,
     VAR_9) < 0) {
  FUNC_5(&VAR_10->v4l2_dev, "invalid input index\n");
  goto unlock_out;
 }

 VAR_11 = &VAR_10->cfg->sub_devs[VAR_12];
 VAR_14 = &VAR_11->routes[VAR_13];
 if (VAR_14 && VAR_11->can_route) {
  VAR_15 = VAR_14->input;
  VAR_16 = VAR_14->output;
 }

 VAR_17 = FUNC_4(&VAR_10->v4l2_dev, VAR_11->grp_id,
      VAR_5, VAR_4, VAR_15, VAR_16, 0);

 if (VAR_17) {
  FUNC_5(&VAR_10->v4l2_dev,
   "vpfe_doioctl:error in setting input in decoder\n");
  VAR_17 = -VAR_1;
  goto unlock_out;
 }
 VAR_10->current_subdev = VAR_11;
 VAR_10->current_input = VAR_9;
 VAR_10->std_index = 0;


 VAR_17 = VAR_2->hw_ops.set_hw_if_params(&VAR_11->ccdc_if_params);
 if (VAR_17)
  goto unlock_out;


 VAR_17 = FUNC_7(VAR_10,
    &VAR_6[VAR_10->std_index].std_id);
unlock_out:
 FUNC_1(&VAR_10->lock);
 return VAR_17;
}
