
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct v4l2_ext_controls {scalar_t__ ctrl_class; int count; int error_idx; int * controls; } ;
struct file {int dummy; } ;
struct cx18_open_id {struct cx18* cx; } ;
struct cx18 {int ana_capturing; int params; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct file*,void*,int *) ;
 int FUNC_2 (int *,int ,struct v4l2_ext_controls*,int ) ;

int FUNC_3(struct file *VAR_4, void *VAR_5, struct v4l2_ext_controls *VAR_6)
{
 struct cx18 *VAR_7 = ((struct cx18_open_id *)VAR_5)->cx;

 if (VAR_6->ctrl_class == VAR_2) {
  int VAR_8;
  int VAR_9 = 0;

  for (VAR_8 = 0; VAR_8 < VAR_6->count; VAR_8++) {
   VAR_9 = FUNC_1(VAR_4, VAR_5, &VAR_6->controls[VAR_8]);
   if (VAR_9) {
    VAR_6->error_idx = VAR_8;
    break;
   }
  }
  return VAR_9;
 }
 if (VAR_6->ctrl_class == VAR_1)
  return FUNC_2(&VAR_7->params,
      FUNC_0(&VAR_7->ana_capturing),
      VAR_6, VAR_3);
 return -VAR_0;
}
