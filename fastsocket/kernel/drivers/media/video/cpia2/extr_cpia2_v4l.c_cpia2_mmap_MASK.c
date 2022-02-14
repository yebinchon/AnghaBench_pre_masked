
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_area_struct {int dummy; } ;
struct file {struct cpia2_fh* private_data; } ;
struct cpia2_fh {scalar_t__ prio; int mmapped; } ;
struct camera_data {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct camera_data*,struct vm_area_struct*) ;
 struct camera_data* FUNC_1 (struct file*) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_2, struct vm_area_struct *VAR_3)
{
 struct camera_data *VAR_4 = FUNC_1(VAR_2);
 int VAR_5;


 struct cpia2_fh *VAR_6 = VAR_2->private_data;
 if(VAR_6->prio != VAR_1) {
  return -VAR_0;
 }

 VAR_5 = FUNC_0(VAR_4, VAR_3);

 if(!VAR_5)
  VAR_6->mmapped = 1;
 return VAR_5;
}
