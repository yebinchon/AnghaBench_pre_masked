
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {int f_mode; TYPE_1__* f_op; } ;
typedef int loff_t ;
struct TYPE_2__ {int (* llseek ) (struct file*,int ,int) ;} ;


 int VAR_0 ;
 int FUNC_0 (struct file*,int ,int) ;
 int FUNC_1 (struct file*,int ,int) ;

loff_t FUNC_2(struct file *VAR_1, loff_t VAR_2, int VAR_3)
{
 loff_t (*VAR_4)(struct file *, loff_t, int);

 VAR_4 = FUNC_1;
 if (VAR_1->f_mode & VAR_0) {
  VAR_4 = FUNC_0;
  if (VAR_1->f_op && VAR_1->f_op->llseek)
   VAR_4 = VAR_1->f_op->llseek;
 }
 return VAR_4(VAR_1, VAR_2, VAR_3);
}
