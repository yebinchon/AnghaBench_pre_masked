
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct file_lock {int fl_next; int fl_wait; } ;
struct file {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (struct file_lock*) ;
 int FUNC_1 () ;
 int FUNC_2 (struct file*,struct file_lock*,int *) ;
 int FUNC_3 (int ,int) ;

int FUNC_4(struct file *VAR_1, struct file_lock *VAR_2)
{
 int VAR_3;
 FUNC_1 ();
 for (;;) {
  VAR_3 = FUNC_2(VAR_1, VAR_2, ((void*)0));
  if (VAR_3 != VAR_0)
   break;
  VAR_3 = FUNC_3(VAR_2->fl_wait, !VAR_2->fl_next);
  if (!VAR_3)
   continue;

  FUNC_0(VAR_2);
  break;
 }
 return VAR_3;
}
