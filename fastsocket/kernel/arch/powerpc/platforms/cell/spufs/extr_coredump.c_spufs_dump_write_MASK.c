
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct file {int f_pos; TYPE_3__* f_op; } ;
typedef int ssize_t ;
typedef int loff_t ;
struct TYPE_8__ {TYPE_2__* signal; } ;
struct TYPE_7__ {int (* write ) (struct file*,void const*,int,int *) ;} ;
struct TYPE_6__ {TYPE_1__* rlim; } ;
struct TYPE_5__ {unsigned long rlim_cur; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_0 (struct file*,void const*,int,int *) ;

__attribute__((used)) static int FUNC_1(struct file *VAR_3, const void *VAR_4, int VAR_5, loff_t *VAR_6)
{
 unsigned long VAR_7 = VAR_2->signal->rlim[VAR_1].rlim_cur;
 ssize_t VAR_8;

 if (*VAR_6 + VAR_5 > VAR_7)
  return -VAR_0;

 VAR_8 = VAR_3->f_op->write(VAR_3, VAR_4, VAR_5, &VAR_3->f_pos);
 *VAR_6 += VAR_8;

 if (VAR_8 != VAR_5)
  return -VAR_0;

 return 0;
}
