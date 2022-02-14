
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct poll_table_struct {int dummy; } ;
struct file {struct cpia2_fh* private_data; } ;
struct cpia2_fh {scalar_t__ prio; } ;
struct camera_data {int dummy; } ;


 unsigned int VAR_0 ;
 scalar_t__ VAR_1 ;
 unsigned int FUNC_0 (struct camera_data*,struct file*,struct poll_table_struct*) ;
 struct camera_data* FUNC_1 (struct file*) ;

__attribute__((used)) static unsigned int FUNC_2(struct file *VAR_2, struct poll_table_struct *VAR_3)
{
 struct camera_data *VAR_4 = FUNC_1(VAR_2);
 struct cpia2_fh *VAR_5 = VAR_2->private_data;

 if(!VAR_4)
  return VAR_0;


 if(VAR_5->prio != VAR_1) {
  return VAR_0;
 }

 return FUNC_0(VAR_4, VAR_2, VAR_3);
}
