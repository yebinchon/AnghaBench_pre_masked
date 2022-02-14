
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {struct dev_data* i_private; } ;
struct file {struct dev_data* private_data; } ;
struct dev_data {scalar_t__ state; int lock; scalar_t__ ev_next; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (struct dev_data*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;

__attribute__((used)) static int
FUNC_3 (struct inode *VAR_3, struct file *VAR_4)
{
 struct dev_data *VAR_5 = VAR_3->i_private;
 int VAR_6 = -VAR_0;

 FUNC_1(&VAR_5->lock);
 if (VAR_5->state == VAR_1) {
  VAR_5->ev_next = 0;
  VAR_5->state = VAR_2;
  VAR_4->private_data = VAR_5;
  FUNC_0 (VAR_5);
  VAR_6 = 0;
 }
 FUNC_2(&VAR_5->lock);
 return VAR_6;
}
