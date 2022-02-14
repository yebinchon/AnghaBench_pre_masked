
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct file {TYPE_1__* f_op; } ;
typedef unsigned long loff_t ;
struct TYPE_2__ {scalar_t__ (* llseek ) (struct file*,unsigned long,int ) ;} ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 () ;
 int FUNC_1 (struct file*,char*,unsigned long) ;
 int FUNC_2 (unsigned long) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_4 (struct file*,unsigned long,int ) ;

int FUNC_5(struct file *VAR_4, loff_t VAR_5)
{
 int VAR_6 = 1;

 if (VAR_4->f_op->llseek && VAR_4->f_op->llseek != VAR_3) {
  if (FUNC_0() ||
      VAR_4->f_op->llseek(VAR_4, VAR_5, VAR_2) < 0)
   return 0;
 } else {
  char *VAR_7 = (char *)FUNC_3(VAR_0);

  if (!VAR_7)
   return 0;
  while (VAR_5 > 0) {
   unsigned long VAR_8 = VAR_5;

   if (VAR_8 > VAR_1)
    VAR_8 = VAR_1;
   if (!FUNC_1(VAR_4, VAR_7, VAR_8)) {
    VAR_6 = 0;
    break;
   }
   VAR_5 -= VAR_8;
  }
  FUNC_2((unsigned long)VAR_7);
 }
 return VAR_6;
}
