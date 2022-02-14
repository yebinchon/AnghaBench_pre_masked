
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ext_controls {scalar_t__ ctrl_class; int count; int error_idx; struct v4l2_ext_control* controls; } ;
struct v4l2_ext_control {int dummy; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct v4l2_ext_control*,int ) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_2, void *VAR_3,
 struct v4l2_ext_controls *VAR_4)
{
 int VAR_5, VAR_6 = 0;

 if (VAR_4->ctrl_class == VAR_1) {
  for (VAR_5 = 0; VAR_5 < VAR_4->count; VAR_5++) {
   struct v4l2_ext_control *VAR_7 = VAR_4->controls + VAR_5;

   VAR_6 = FUNC_0(VAR_7, 0);
   if (VAR_6) {
    VAR_4->error_idx = VAR_5;
    break;
   }
  }
  return VAR_6;
 }

 return -VAR_0;
}
