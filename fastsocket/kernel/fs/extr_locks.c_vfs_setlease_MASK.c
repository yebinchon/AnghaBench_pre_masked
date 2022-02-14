
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file_lock {int dummy; } ;
struct file {TYPE_1__* f_op; } ;
struct TYPE_2__ {int (* setlease ) (struct file*,long,struct file_lock**) ;} ;


 int FUNC_0 (struct file*,long,struct file_lock**) ;
 int FUNC_1 () ;
 int FUNC_2 (struct file*,long,struct file_lock**) ;
 int FUNC_3 () ;

int FUNC_4(struct file *VAR_0, long VAR_1, struct file_lock **VAR_2)
{
 int VAR_3;

 FUNC_1();
 if (VAR_0->f_op && VAR_0->f_op->setlease)
  VAR_3 = VAR_0->f_op->setlease(VAR_0, VAR_1, VAR_2);
 else
  VAR_3 = FUNC_0(VAR_0, VAR_1, VAR_2);
 FUNC_3();

 return VAR_3;
}
