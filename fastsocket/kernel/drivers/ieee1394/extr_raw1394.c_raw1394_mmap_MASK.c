
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int dummy; } ;
struct file_info {scalar_t__ iso_state; int state_mutex; TYPE_1__* iso_handle; } ;
struct file {struct file_info* private_data; } ;
struct TYPE_2__ {int data_buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int *,struct file*,struct vm_area_struct*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int FUNC_3(struct file *VAR_3, struct vm_area_struct *VAR_4)
{
 struct file_info *VAR_5 = VAR_3->private_data;
 int VAR_6;

 if (!FUNC_1(&VAR_5->state_mutex))
  return -VAR_0;

 if (VAR_5->iso_state == VAR_2)
  VAR_6 = -VAR_1;
 else
  VAR_6 = FUNC_0(&VAR_5->iso_handle->data_buf, VAR_3, VAR_4);

 FUNC_2(&VAR_5->state_mutex);

 return VAR_6;
}
