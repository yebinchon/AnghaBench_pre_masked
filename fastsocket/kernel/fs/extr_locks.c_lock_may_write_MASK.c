
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {struct file_lock* i_flock; } ;
struct file_lock {scalar_t__ fl_end; scalar_t__ fl_start; int fl_type; struct file_lock* fl_next; } ;
typedef scalar_t__ loff_t ;


 scalar_t__ FUNC_0 (struct file_lock*) ;
 scalar_t__ FUNC_1 (struct file_lock*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 () ;
 int FUNC_3 () ;

int FUNC_4(struct inode *VAR_2, loff_t VAR_3, unsigned long VAR_4)
{
 struct file_lock *VAR_5;
 int VAR_6 = 1;
 FUNC_2();
 for (VAR_5 = VAR_2->i_flock; VAR_5 != ((void*)0); VAR_5 = VAR_5->fl_next) {
  if (FUNC_1(VAR_5)) {
   if ((VAR_5->fl_end < VAR_3) || (VAR_5->fl_start > (VAR_3 + VAR_4)))
    continue;
  } else if (FUNC_0(VAR_5)) {
   if (!(VAR_5->fl_type & VAR_0))
    continue;
   if (VAR_5->fl_type & VAR_1)
    continue;
  } else
   continue;
  VAR_6 = 0;
  break;
 }
 FUNC_3();
 return VAR_6;
}
