
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct gspca_dev {scalar_t__ memory; scalar_t__ fr_o; int present; int queue_lock; int fr_i; int wq; } ;
struct file {struct gspca_dev* private_data; } ;
typedef int poll_table ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*) ;
 unsigned int VAR_2 ;
 unsigned int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (struct file*,int *,int *) ;
 int FUNC_5 (struct gspca_dev*,struct file*) ;

__attribute__((used)) static unsigned int FUNC_6(struct file *VAR_6, poll_table *VAR_7)
{
 struct gspca_dev *VAR_8 = VAR_6->private_data;
 int VAR_9;

 FUNC_0(VAR_0, "poll");

 FUNC_4(VAR_6, &VAR_8->wq, VAR_7);


 if (VAR_8->memory == VAR_1) {
  VAR_9 = FUNC_5(VAR_8, VAR_6);
  if (VAR_9 != 0)
   return VAR_2;
 }

 if (FUNC_2(&VAR_8->queue_lock) != 0)
  return VAR_2;


 if (VAR_8->fr_o != FUNC_1(&VAR_8->fr_i))
  VAR_9 = VAR_4 | VAR_5;
 else
  VAR_9 = 0;
 FUNC_3(&VAR_8->queue_lock);
 if (!VAR_8->present)
  return VAR_3;
 return VAR_9;
}
