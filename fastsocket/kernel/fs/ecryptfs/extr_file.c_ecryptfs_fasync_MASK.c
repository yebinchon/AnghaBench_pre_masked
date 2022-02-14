
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {TYPE_1__* f_op; } ;
struct TYPE_2__ {int (* fasync ) (int,struct file*,int) ;} ;


 struct file* FUNC_0 (struct file*) ;
 int FUNC_1 () ;
 int FUNC_2 (int,struct file*,int) ;
 int FUNC_3 () ;

__attribute__((used)) static int FUNC_4(int VAR_0, struct file *VAR_1, int VAR_2)
{
 int VAR_3 = 0;
 struct file *VAR_4 = ((void*)0);

 FUNC_1();
 VAR_4 = FUNC_0(VAR_1);
 if (VAR_4->f_op && VAR_4->f_op->fasync)
  VAR_3 = VAR_4->f_op->fasync(VAR_0, VAR_4, VAR_2);
 FUNC_3();
 return VAR_3;
}
