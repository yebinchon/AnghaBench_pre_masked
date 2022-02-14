
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file_lock {int fl_flags; int fl_next; int fl_wait; void* fl_end; void* fl_start; int fl_type; struct file* fl_file; int fl_pid; int fl_owner; } ;
struct file {int f_flags; } ;
typedef void* loff_t ;
struct TYPE_2__ {int tgid; int files; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct inode*) ;
 int FUNC_1 (struct inode*,struct file_lock*,int *) ;
 TYPE_1__* VAR_8 ;
 int FUNC_2 (struct file_lock*) ;
 int FUNC_3 (struct file_lock*) ;
 int FUNC_4 (int ,int) ;

int FUNC_5(int VAR_9, struct inode *VAR_10,
    struct file *VAR_11, loff_t VAR_12,
    size_t VAR_13)
{
 struct file_lock VAR_14;
 int VAR_15;

 FUNC_3(&VAR_14);
 VAR_14.fl_owner = VAR_8->files;
 VAR_14.fl_pid = VAR_8->tgid;
 VAR_14.fl_file = VAR_11;
 VAR_14.fl_flags = VAR_3 | VAR_2;
 if (VAR_11 && !(VAR_11->f_flags & VAR_7))
  VAR_14.fl_flags |= VAR_4;
 VAR_14.fl_type = (VAR_9 == VAR_1) ? VAR_6 : VAR_5;
 VAR_14.fl_start = VAR_12;
 VAR_14.fl_end = VAR_12 + VAR_13 - 1;

 for (;;) {
  VAR_15 = FUNC_1(VAR_10, &VAR_14, ((void*)0));
  if (VAR_15 != VAR_0)
   break;
  VAR_15 = FUNC_4(VAR_14.fl_wait, !VAR_14.fl_next);
  if (!VAR_15) {




   if (FUNC_0(VAR_10))
    continue;
  }

  FUNC_2(&VAR_14);
  break;
 }

 return VAR_15;
}
