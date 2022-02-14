
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {struct file_lock* i_flock; } ;
struct file_lock {int fl_type; scalar_t__ fl_end; scalar_t__ fl_start; struct file_lock* fl_next; } ;
typedef scalar_t__ loff_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct file_lock*) ;
 scalar_t__ FUNC_1 (struct file_lock*) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 () ;
 int FUNC_3 () ;

int FUNC_4(struct inode *VAR_3, loff_t VAR_4, unsigned long VAR_5)
{
 struct file_lock *VAR_6;
 int VAR_7 = 1;
 FUNC_2();
 for (VAR_6 = VAR_3->i_flock; VAR_6 != ((void*)0); VAR_6 = VAR_6->fl_next) {
  if (FUNC_1(VAR_6)) {
   if (VAR_6->fl_type == VAR_0)
    continue;
   if ((VAR_6->fl_end < VAR_4) || (VAR_6->fl_start > (VAR_4 + VAR_5)))
    continue;
  } else if (FUNC_0(VAR_6)) {
   if (!(VAR_6->fl_type & VAR_1))
    continue;
   if (VAR_6->fl_type & VAR_2)
    continue;
  } else
   continue;
  VAR_7 = 0;
  break;
 }
 FUNC_3();
 return VAR_7;
}
