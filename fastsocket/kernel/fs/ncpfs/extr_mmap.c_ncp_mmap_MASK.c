
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; int vm_end; int vm_start; int vm_pgoff; int * vm_ops; } ;
struct inode {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 int FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct inode*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct file*) ;
 int FUNC_3 (int ) ;
 int VAR_5 ;

int FUNC_4(struct file *VAR_6, struct vm_area_struct *VAR_7)
{
 struct inode *VAR_8 = VAR_6->f_path.dentry->d_inode;

 FUNC_0("ncp_mmap: called\n");

 if (!FUNC_3(FUNC_1(VAR_8)))
  return -VAR_2;


 if (VAR_7->vm_flags & VAR_4)
  return -VAR_1;


 if (((VAR_7->vm_end - VAR_7->vm_start) >> VAR_3) + VAR_7->vm_pgoff
    > (1U << (32 - VAR_3)))
  return -VAR_0;

 VAR_7->vm_ops = &VAR_5;
 FUNC_2(VAR_6);
 return 0;
}
