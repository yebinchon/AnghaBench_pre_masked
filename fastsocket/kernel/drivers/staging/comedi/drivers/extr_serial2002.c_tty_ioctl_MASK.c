
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct file {TYPE_2__* f_dentry; TYPE_1__* f_op; } ;
struct TYPE_4__ {int d_inode; } ;
struct TYPE_3__ {long (* unlocked_ioctl ) (struct file*,unsigned int,unsigned long) ;long (* ioctl ) (int ,struct file*,unsigned int,unsigned long) ;} ;


 long VAR_0 ;
 long FUNC_0 (struct file*,unsigned int,unsigned long) ;
 long FUNC_1 (int ,struct file*,unsigned int,unsigned long) ;

__attribute__((used)) static long FUNC_2(struct file *VAR_1, unsigned VAR_2, unsigned long VAR_3)
{





 if (VAR_1->f_op->ioctl) {
  return VAR_1->f_op->ioctl(VAR_1->f_dentry->d_inode, VAR_1, VAR_2, VAR_3);
 }
 return -VAR_0;
}
