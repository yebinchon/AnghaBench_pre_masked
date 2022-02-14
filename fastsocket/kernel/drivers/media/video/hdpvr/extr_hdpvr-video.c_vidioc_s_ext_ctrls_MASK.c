
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ext_controls {scalar_t__ ctrl_class; int count; int error_idx; struct v4l2_ext_control* controls; } ;
struct v4l2_ext_control {int dummy; } ;
struct hdpvr_fh {struct hdpvr_device* dev; } ;
struct hdpvr_device {int flags; } ;
struct file {struct hdpvr_fh* private_data; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct hdpvr_device*,struct v4l2_ext_control*) ;
 int FUNC_1 (struct v4l2_ext_control*,int) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_3, void *VAR_4,
         struct v4l2_ext_controls *VAR_5)
{
 struct hdpvr_fh *VAR_6 = VAR_3->private_data;
 struct hdpvr_device *VAR_7 = VAR_6->dev;
 int VAR_8, VAR_9 = 0;

 if (VAR_5->ctrl_class == VAR_2) {
  for (VAR_8 = 0; VAR_8 < VAR_5->count; VAR_8++) {
   struct v4l2_ext_control *VAR_10 = VAR_5->controls + VAR_8;

   VAR_9 = FUNC_1(VAR_10,
          VAR_7->flags & VAR_1);
   if (VAR_9) {
    VAR_5->error_idx = VAR_8;
    break;
   }
   VAR_9 = FUNC_0(VAR_7, VAR_10);
   if (VAR_9) {
    VAR_5->error_idx = VAR_8;
    break;
   }
  }
  return VAR_9;

 }

 return -VAR_0;
}
