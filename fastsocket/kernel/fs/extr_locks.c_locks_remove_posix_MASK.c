
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct file_lock {int fl_flags; TYPE_4__* fl_ops; int * fl_lmops; struct file* fl_file; int fl_pid; int fl_owner; int fl_end; scalar_t__ fl_start; int fl_type; } ;
struct TYPE_8__ {TYPE_2__* dentry; } ;
struct file {TYPE_3__ f_path; } ;
typedef int fl_owner_t ;
struct TYPE_10__ {int tgid; } ;
struct TYPE_9__ {int (* fl_release_private ) (struct file_lock*) ;} ;
struct TYPE_7__ {TYPE_1__* d_inode; } ;
struct TYPE_6__ {int i_flock; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 TYPE_5__* VAR_5 ;
 int FUNC_0 (struct file_lock*) ;
 int FUNC_1 (struct file*,int ,struct file_lock*,int *) ;

void FUNC_2(struct file *VAR_6, fl_owner_t VAR_7)
{
 struct file_lock VAR_8;






 if (!VAR_6->f_path.dentry->d_inode->i_flock)
  return;

 VAR_8.fl_type = VAR_3;
 VAR_8.fl_flags = VAR_1 | VAR_0;
 VAR_8.fl_start = 0;
 VAR_8.fl_end = VAR_4;
 VAR_8.fl_owner = VAR_7;
 VAR_8.fl_pid = VAR_5->tgid;
 VAR_8.fl_file = VAR_6;
 VAR_8.fl_ops = ((void*)0);
 VAR_8.fl_lmops = ((void*)0);

 FUNC_1(VAR_6, VAR_2, &VAR_8, ((void*)0));

 if (VAR_8.fl_ops && VAR_8.fl_ops->fl_release_private)
  VAR_8.fl_ops->fl_release_private(&VAR_8);
}
