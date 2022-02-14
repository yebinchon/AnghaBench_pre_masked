
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct file_lock {long fl_type; scalar_t__ fl_break_time; int fl_fasync; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 long VAR_0 ;
 long VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct file*,int ,int ,int ) ;
 int VAR_3 ;
 int FUNC_1 (unsigned int,struct file*,int,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_2 (struct file*,long,struct file_lock*) ;
 int FUNC_3 () ;
 int FUNC_4 (struct file_lock*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 () ;
 int FUNC_8 (struct file*,long,struct file_lock**) ;

int FUNC_9(unsigned int VAR_5, struct file *VAR_6, long VAR_7)
{
 struct file_lock VAR_8, *VAR_9 = &VAR_8;
 struct inode *VAR_10 = VAR_6->f_path.dentry->d_inode;
 int VAR_11;

 FUNC_4(&VAR_8);
 VAR_11 = FUNC_2(VAR_6, VAR_7, &VAR_8);
 if (VAR_11)
  return VAR_11;

 FUNC_3();

 VAR_11 = FUNC_8(VAR_6, VAR_7, &VAR_9);
 if (VAR_11 || VAR_7 == VAR_1)
  goto out_unlock;

 VAR_11 = FUNC_1(VAR_5, VAR_6, 1, &VAR_9->fl_fasync);
 if (VAR_11 < 0) {

  VAR_9->fl_type = VAR_1 | VAR_0;
  VAR_9->fl_break_time = VAR_4 - 10;
  FUNC_6(VAR_10);
  goto out_unlock;
 }

 VAR_11 = FUNC_0(VAR_6, FUNC_5(VAR_3), VAR_2, 0);
out_unlock:
 FUNC_7();
 return VAR_11;
}
