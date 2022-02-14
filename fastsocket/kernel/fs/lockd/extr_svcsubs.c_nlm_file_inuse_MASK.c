
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct nlm_file {scalar_t__ f_locks; scalar_t__ f_shares; int f_blocks; scalar_t__ f_count; } ;
struct inode {struct file_lock* i_flock; } ;
struct file_lock {int * fl_lmops; struct file_lock* fl_next; } ;


 int FUNC_0 (int *) ;
 struct inode* FUNC_1 (struct nlm_file*) ;
 int VAR_0 ;

__attribute__((used)) static inline int
FUNC_2(struct nlm_file *VAR_1)
{
 struct inode *VAR_2 = FUNC_1(VAR_1);
 struct file_lock *VAR_3;

 if (VAR_1->f_count || !FUNC_0(&VAR_1->f_blocks) || VAR_1->f_shares)
  return 1;

 for (VAR_3 = VAR_2->i_flock; VAR_3; VAR_3 = VAR_3->fl_next) {
  if (VAR_3->fl_lmops == &VAR_0)
   return 1;
 }
 VAR_1->f_locks = 0;
 return 0;
}
