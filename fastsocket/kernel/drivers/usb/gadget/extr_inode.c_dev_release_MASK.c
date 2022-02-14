
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {int dummy; } ;
struct file {struct dev_data* private_data; } ;
struct dev_data {int lock; int state; int * buf; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (struct dev_data*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

__attribute__((used)) static int
FUNC_5 (struct inode *VAR_2, struct file *VAR_3)
{
 struct dev_data *VAR_4 = VAR_3->private_data;



 FUNC_4 (&VAR_1);






 FUNC_0 (VAR_4->buf);
 VAR_4->buf = ((void*)0);
 FUNC_1 (VAR_4);


 FUNC_2(&VAR_4->lock);
 VAR_4->state = VAR_0;
 FUNC_3(&VAR_4->lock);
 return 0;
}
