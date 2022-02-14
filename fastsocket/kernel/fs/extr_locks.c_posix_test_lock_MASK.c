
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct file_lock {int fl_type; scalar_t__ fl_nspid; int fl_pid; struct file_lock* fl_next; } ;
struct TYPE_6__ {TYPE_2__* dentry; } ;
struct file {TYPE_3__ f_path; } ;
struct TYPE_5__ {TYPE_1__* d_inode; } ;
struct TYPE_4__ {struct file_lock* i_flock; } ;


 int VAR_0 ;
 int FUNC_0 (struct file_lock*) ;
 int FUNC_1 (struct file_lock*,struct file_lock*) ;
 int FUNC_2 () ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (struct file_lock*,struct file_lock*) ;
 int FUNC_5 () ;

void
FUNC_6(struct file *VAR_1, struct file_lock *VAR_2)
{
 struct file_lock *VAR_3;

 FUNC_2();
 for (VAR_3 = VAR_1->f_path.dentry->d_inode->i_flock; VAR_3; VAR_3 = VAR_3->fl_next) {
  if (!FUNC_0(VAR_3))
   continue;
  if (FUNC_4(VAR_2, VAR_3))
   break;
 }
 if (VAR_3) {
  FUNC_1(VAR_2, VAR_3);
  if (VAR_3->fl_nspid)
   VAR_2->fl_pid = FUNC_3(VAR_3->fl_nspid);
 } else
  VAR_2->fl_type = VAR_0;
 FUNC_5();
 return;
}
