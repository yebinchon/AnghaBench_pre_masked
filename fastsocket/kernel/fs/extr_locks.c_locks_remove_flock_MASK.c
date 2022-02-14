
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct inode {struct file_lock* i_flock; } ;
struct file_lock {struct file_lock* fl_next; struct file* fl_file; TYPE_4__* fl_ops; int fl_end; int fl_type; int fl_flags; int fl_pid; } ;
struct TYPE_7__ {TYPE_1__* dentry; } ;
struct file {TYPE_3__* f_op; TYPE_2__ f_path; } ;
struct TYPE_10__ {int tgid; } ;
struct TYPE_9__ {int (* fl_release_private ) (struct file_lock*) ;} ;
struct TYPE_8__ {int (* flock ) (struct file*,int ,struct file_lock*) ;} ;
struct TYPE_6__ {struct inode* d_inode; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct file_lock*) ;
 scalar_t__ FUNC_2 (struct file_lock*) ;
 int VAR_3 ;
 TYPE_5__* VAR_4 ;
 int FUNC_3 (struct file_lock**,int ) ;
 int FUNC_4 () ;
 int FUNC_5 (struct file_lock**) ;
 int FUNC_6 (struct file*,int ,struct file_lock*) ;
 int FUNC_7 (struct file_lock*) ;
 int FUNC_8 () ;

void FUNC_9(struct file *VAR_5)
{
 struct inode * VAR_6 = VAR_5->f_path.dentry->d_inode;
 struct file_lock *VAR_7;
 struct file_lock **VAR_8;

 if (!VAR_6->i_flock)
  return;

 if (VAR_5->f_op && VAR_5->f_op->flock) {
  struct file_lock VAR_9 = {
   .fl_pid = VAR_4->tgid,
   .fl_file = VAR_5,
   .fl_flags = VAR_0,
   .fl_type = VAR_2,
   .fl_end = VAR_3,
  };
  VAR_5->f_op->flock(VAR_5, VAR_1, &VAR_9);
  if (VAR_9.fl_ops && VAR_9.fl_ops->fl_release_private)
   VAR_9.fl_ops->fl_release_private(&VAR_9);
 }

 FUNC_4();
 VAR_8 = &VAR_6->i_flock;

 while ((VAR_7 = *VAR_8) != ((void*)0)) {
  if (VAR_7->fl_file == VAR_5) {
   if (FUNC_1(VAR_7)) {
    FUNC_5(VAR_8);
    continue;
   }
   if (FUNC_2(VAR_7)) {
    FUNC_3(VAR_8, VAR_2);
    continue;
   }

   FUNC_0();
   }
  VAR_8 = &VAR_7->fl_next;
 }
 FUNC_8();
}
