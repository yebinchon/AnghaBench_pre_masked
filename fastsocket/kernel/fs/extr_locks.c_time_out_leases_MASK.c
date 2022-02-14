
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inode {struct file_lock* i_flock; } ;
struct file_lock {int fl_type; scalar_t__ fl_break_time; struct file_lock* fl_next; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct file_lock*) ;
 int VAR_1 ;
 int FUNC_1 (struct file_lock**,int) ;
 scalar_t__ FUNC_2 (int ,scalar_t__) ;

__attribute__((used)) static void FUNC_3(struct inode *VAR_2)
{
 struct file_lock **VAR_3;
 struct file_lock *VAR_4;

 VAR_3 = &VAR_2->i_flock;
 while ((VAR_4 = *VAR_3) && FUNC_0(VAR_4) && (VAR_4->fl_type & VAR_0)) {
  if ((VAR_4->fl_break_time == 0)
    || FUNC_2(VAR_1, VAR_4->fl_break_time)) {
   VAR_3 = &VAR_4->fl_next;
   continue;
  }
  FUNC_1(VAR_3, VAR_4->fl_type & ~VAR_0);
  if (VAR_4 == *VAR_3)
   VAR_3 = &VAR_4->fl_next;
 }
}
