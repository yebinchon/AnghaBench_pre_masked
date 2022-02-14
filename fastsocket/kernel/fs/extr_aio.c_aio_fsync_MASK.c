
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct kiocb {struct file* ki_filp; } ;
struct file {TYPE_1__* f_op; } ;
typedef int ssize_t ;
struct TYPE_2__ {int (* aio_fsync ) (struct kiocb*,int ) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct kiocb*,int ) ;

__attribute__((used)) static ssize_t FUNC_1(struct kiocb *VAR_1)
{
 struct file *VAR_2 = VAR_1->ki_filp;
 ssize_t VAR_3 = -VAR_0;

 if (VAR_2->f_op->aio_fsync)
  VAR_3 = VAR_2->f_op->aio_fsync(VAR_1, 0);
 return VAR_3;
}
