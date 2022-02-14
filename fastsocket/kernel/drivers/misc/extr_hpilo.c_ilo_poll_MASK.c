
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file {struct ccb_data* private_data; } ;
struct ccb {int dummy; } ;
struct ccb_data {int ilo_hw; int ccb_waitq; struct ccb driver_ccb; } ;
typedef int poll_table ;


 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 scalar_t__ FUNC_0 (int ,struct ccb*) ;
 scalar_t__ FUNC_1 (struct ccb*) ;
 int FUNC_2 (struct file*,int *,int *) ;

__attribute__((used)) static unsigned int FUNC_3(struct file *VAR_3, poll_table *VAR_4)
{
 struct ccb_data *VAR_5 = VAR_3->private_data;
 struct ccb *VAR_6 = &VAR_5->driver_ccb;

 FUNC_2(VAR_3, &VAR_5->ccb_waitq, VAR_4);

 if (FUNC_1(VAR_6))
  return VAR_0;
 else if (FUNC_0(VAR_5->ilo_hw, VAR_6))
  return VAR_1 | VAR_2;

 return 0;
}
