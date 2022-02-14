
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file_lock {int dummy; } ;
struct file {TYPE_1__* f_op; } ;
struct TYPE_2__ {int (* lock ) (struct file*,int ,struct file_lock*) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct file*,struct file_lock*) ;
 int FUNC_1 (struct file*,int ,struct file_lock*) ;

int FUNC_2(struct file *VAR_1, struct file_lock *VAR_2)
{
 if (VAR_1->f_op && VAR_1->f_op->lock)
  return VAR_1->f_op->lock(VAR_1, VAR_0, VAR_2);
 FUNC_0(VAR_1, VAR_2);
 return 0;
}
