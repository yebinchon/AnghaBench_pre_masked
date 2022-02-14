
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct timespec {int dummy; } ;
struct inode {struct timespec i_mtime; int i_sb; struct file_lock* i_flock; } ;
struct file_lock {int fl_type; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct file_lock*) ;
 struct timespec FUNC_1 (int ) ;

void FUNC_2(struct inode *VAR_1, struct timespec *VAR_2)
{
 struct file_lock *VAR_3 = VAR_1->i_flock;
 if (VAR_3 && FUNC_0(VAR_3) && (VAR_3->fl_type & VAR_0))
  *VAR_2 = FUNC_1(VAR_1->i_sb);
 else
  *VAR_2 = VAR_1->i_mtime;
}
