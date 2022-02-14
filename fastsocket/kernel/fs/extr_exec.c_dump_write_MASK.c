
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int f_pos; TYPE_1__* f_op; } ;
struct TYPE_2__ {int (* write ) (struct file*,void const*,int,int *) ;} ;


 int FUNC_0 () ;
 int FUNC_1 (struct file*,void const*,int,int *) ;

int FUNC_2(struct file *VAR_0, const void *VAR_1, int VAR_2)
{
 return !FUNC_0() &&
  VAR_0->f_op->write(VAR_0, VAR_1, VAR_2, &VAR_0->f_pos) == VAR_2;
}
