
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct tty_struct {int minimum_to_wake; int read_wait; int fasync; int ctrl_lock; struct pid* pgrp; } ;
struct pid {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; scalar_t__ private_data; } ;
typedef enum pid_type { ____Placeholder_pid_type } pid_type ;
struct TYPE_3__ {int d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*,struct pid*,int,int ) ;
 int VAR_3 ;
 int FUNC_1 (int,struct file*,int,int *) ;
 int FUNC_2 (struct pid*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct pid*) ;
 int FUNC_5 (int *,unsigned long) ;
 int FUNC_6 (int *,unsigned long) ;
 struct pid* FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (struct tty_struct*,int ,char*) ;
 int FUNC_9 () ;
 int FUNC_10 (int *) ;

__attribute__((used)) static int FUNC_11(int VAR_4, struct file *VAR_5, int VAR_6)
{
 struct tty_struct *VAR_7;
 unsigned long VAR_8;
 int VAR_9 = 0;

 FUNC_3();
 VAR_7 = (struct tty_struct *)VAR_5->private_data;
 if (FUNC_8(VAR_7, VAR_5->f_path.dentry->d_inode, "tty_fasync"))
  goto out;

 VAR_9 = FUNC_1(VAR_4, VAR_5, VAR_6, &VAR_7->fasync);
 if (VAR_9 <= 0)
  goto out;

 if (VAR_6) {
  enum pid_type VAR_10;
  struct pid *VAR_11;
  if (!FUNC_10(&VAR_7->read_wait))
   VAR_7->minimum_to_wake = 1;
  FUNC_5(&VAR_7->ctrl_lock, VAR_8);
  if (VAR_7->pgrp) {
   VAR_11 = VAR_7->pgrp;
   VAR_10 = VAR_1;
  } else {
   VAR_11 = FUNC_7(VAR_3);
   VAR_10 = VAR_2;
  }
  FUNC_2(VAR_11);
  FUNC_6(&VAR_7->ctrl_lock, VAR_8);
  VAR_9 = FUNC_0(VAR_5, VAR_11, VAR_10, 0);
  FUNC_4(VAR_11);
  if (VAR_9)
   goto out;
 } else {
  if (!VAR_7->fasync && !FUNC_10(&VAR_7->read_wait))
   VAR_7->minimum_to_wake = VAR_0;
 }
 VAR_9 = 0;
out:
 FUNC_9();
 return VAR_9;
}
