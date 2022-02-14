
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {scalar_t__ fl_next; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct file_lock*) ;
 int FUNC_1 () ;
 int FUNC_2 () ;

int
FUNC_3(struct file *VAR_1, struct file_lock *VAR_2)
{
 int VAR_3 = 0;

 FUNC_1();
 if (VAR_2->fl_next)
  FUNC_0(VAR_2);
 else
  VAR_3 = -VAR_0;
 FUNC_2();
 return VAR_3;
}
