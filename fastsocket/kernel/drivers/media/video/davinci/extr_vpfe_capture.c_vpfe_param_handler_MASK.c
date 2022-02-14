
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vpfe_device {int lock; int v4l2_dev; int fmt; scalar_t__ started; } ;
struct file {int dummy; } ;
struct TYPE_3__ {int (* set_params ) (void*) ;} ;
struct TYPE_4__ {TYPE_1__ hw_ops; } ;


 long VAR_0 ;
 int VAR_1 ;

 TYPE_2__* VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (int,int ,int *,char*) ;
 int FUNC_4 (int *,char*) ;
 int FUNC_5 (int *,char*) ;
 struct vpfe_device* FUNC_6 (struct file*) ;
 int FUNC_7 (struct vpfe_device*,int *) ;

__attribute__((used)) static long FUNC_8(struct file *VAR_4, void *VAR_5,
  int VAR_6, void *VAR_7)
{
 struct vpfe_device *VAR_8 = FUNC_6(VAR_4);
 int VAR_9 = 0;

 FUNC_3(1, VAR_3, &VAR_8->v4l2_dev, "vpfe_param_handler\n");

 if (VAR_8->started) {

  FUNC_4(&VAR_8->v4l2_dev, "device already started\n");
  return -VAR_0;
 }

 VAR_9 = FUNC_0(&VAR_8->lock);
 if (VAR_9)
  return VAR_9;

 switch (VAR_6) {
 case 128:
  FUNC_5(&VAR_8->v4l2_dev,
     "VPFE_CMD_S_CCDC_RAW_PARAMS: experimental ioctl\n");
  VAR_9 = VAR_2->hw_ops.set_params(VAR_7);
  if (VAR_9) {
   FUNC_4(&VAR_8->v4l2_dev,
    "Error in setting parameters in CCDC\n");
   goto unlock_out;
  }
  if (FUNC_7(VAR_8, &VAR_8->fmt) < 0) {
   FUNC_4(&VAR_8->v4l2_dev,
    "Invalid image format at CCDC\n");
   goto unlock_out;
  }
  break;
 default:
  VAR_9 = -VAR_1;
 }
unlock_out:
 FUNC_1(&VAR_8->lock);
 return VAR_9;
}
