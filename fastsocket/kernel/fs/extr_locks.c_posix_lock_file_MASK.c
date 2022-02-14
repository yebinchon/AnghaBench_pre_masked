
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file_lock {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct TYPE_3__ {int d_inode; } ;


 int FUNC_0 (int ,struct file_lock*,struct file_lock*) ;

int FUNC_1(struct file *VAR_0, struct file_lock *VAR_1,
   struct file_lock *VAR_2)
{
 return FUNC_0(VAR_0->f_path.dentry->d_inode, VAR_1, VAR_2);
}
