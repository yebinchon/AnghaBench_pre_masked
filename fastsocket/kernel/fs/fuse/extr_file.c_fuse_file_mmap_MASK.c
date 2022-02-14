
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct vm_area_struct {int vm_flags; int * vm_ops; } ;
struct inode {int dummy; } ;
struct fuse_inode {int write_files; } ;
struct fuse_file {int write_entry; } ;
struct fuse_conn {int lock; } ;
struct file {struct fuse_file* private_data; TYPE_1__* f_dentry; } ;
struct TYPE_2__ {struct inode* d_inode; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct file*) ;
 int VAR_2 ;
 struct fuse_conn* FUNC_1 (struct inode*) ;
 struct fuse_inode* FUNC_2 (struct inode*) ;
 int FUNC_3 (int *,int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(struct file *VAR_3, struct vm_area_struct *VAR_4)
{
 if ((VAR_4->vm_flags & VAR_1) && (VAR_4->vm_flags & VAR_0)) {
  struct inode *VAR_5 = VAR_3->f_dentry->d_inode;
  struct fuse_conn *VAR_6 = FUNC_1(VAR_5);
  struct fuse_inode *VAR_7 = FUNC_2(VAR_5);
  struct fuse_file *VAR_8 = VAR_3->private_data;




  FUNC_5(&VAR_6->lock);
  if (FUNC_4(&VAR_8->write_entry))
   FUNC_3(&VAR_8->write_entry, &VAR_7->write_files);
  FUNC_6(&VAR_6->lock);
 }
 FUNC_0(VAR_3);
 VAR_4->vm_ops = &VAR_2;
 return 0;
}
