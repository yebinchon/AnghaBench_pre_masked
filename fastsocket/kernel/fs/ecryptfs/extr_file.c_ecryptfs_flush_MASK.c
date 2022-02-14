
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {TYPE_1__* f_op; } ;
typedef int fl_owner_t ;
struct TYPE_2__ {int (* flush ) (struct file*,int ) ;} ;


 struct file* FUNC_0 (struct file*) ;
 int FUNC_1 (struct file*,int ) ;

__attribute__((used)) static int FUNC_2(struct file *VAR_0, fl_owner_t VAR_1)
{
 int VAR_2 = 0;
 struct file *VAR_3 = ((void*)0);

 VAR_3 = FUNC_0(VAR_0);
 if (VAR_3->f_op && VAR_3->f_op->flush)
  VAR_2 = VAR_3->f_op->flush(VAR_3, VAR_1);
 return VAR_2;
}
