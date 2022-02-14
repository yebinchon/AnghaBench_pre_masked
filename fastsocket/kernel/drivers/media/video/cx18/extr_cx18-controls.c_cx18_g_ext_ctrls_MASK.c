
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v4l2_ext_controls {scalar_t__ ctrl_class; int count; int error_idx; TYPE_1__* controls; } ;
struct v4l2_control {int value; int id; } ;
struct file {int dummy; } ;
struct cx18_open_id {struct cx18* cx; } ;
struct cx18 {int params; } ;
struct TYPE_2__ {int value; int id; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct cx18*,struct v4l2_control*) ;
 int FUNC_1 (int *,int ,struct v4l2_ext_controls*,int ) ;

int FUNC_2(struct file *VAR_4, void *VAR_5, struct v4l2_ext_controls *VAR_6)
{
 struct cx18 *VAR_7 = ((struct cx18_open_id *)VAR_5)->cx;
 struct v4l2_control VAR_8;

 if (VAR_6->ctrl_class == VAR_2) {
  int VAR_9;
  int VAR_10 = 0;

  for (VAR_9 = 0; VAR_9 < VAR_6->count; VAR_9++) {
   VAR_8.id = VAR_6->controls[VAR_9].id;
   VAR_8.value = VAR_6->controls[VAR_9].value;
   VAR_10 = FUNC_0(VAR_7, &VAR_8);
   VAR_6->controls[VAR_9].value = VAR_8.value;
   if (VAR_10) {
    VAR_6->error_idx = VAR_9;
    break;
   }
  }
  return VAR_10;
 }
 if (VAR_6->ctrl_class == VAR_1)
  return FUNC_1(&VAR_7->params, 0, VAR_6, VAR_3);
 return -VAR_0;
}
