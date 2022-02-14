
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_operations {int dummy; } ;
struct cdev {struct file_operations const* ops; int kobj; int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int VAR_0 ;
 int FUNC_2 (struct cdev*,int ,int) ;

void FUNC_3(struct cdev *VAR_1, const struct file_operations *VAR_2)
{
 FUNC_2(VAR_1, 0, sizeof *VAR_1);
 FUNC_0(&VAR_1->list);
 FUNC_1(&VAR_1->kobj, &VAR_0);
 VAR_1->ops = VAR_2;
}
