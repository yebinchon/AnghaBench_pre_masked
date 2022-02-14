
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {TYPE_2__ f_path; int f_pos; } ;
struct ecryptfs_getdents_callback {scalar_t__ entries_written; scalar_t__ filldir_called; int filldir; TYPE_1__* dentry; void* dirent; } ;
typedef int filldir_t ;
typedef int buf ;
struct TYPE_3__ {struct inode* d_inode; } ;


 struct file* FUNC_0 (struct file*) ;
 int VAR_0 ;
 int FUNC_1 (struct inode*,struct inode*) ;
 int FUNC_2 (struct ecryptfs_getdents_callback*,int ,int) ;
 int FUNC_3 (struct file*,int ,void*) ;

__attribute__((used)) static int FUNC_4(struct file *VAR_1, void *VAR_2, filldir_t VAR_3)
{
 int VAR_4;
 struct file *VAR_5;
 struct inode *VAR_6;
 struct ecryptfs_getdents_callback VAR_7;

 VAR_5 = FUNC_0(VAR_1);
 VAR_5->f_pos = VAR_1->f_pos;
 VAR_6 = VAR_1->f_path.dentry->d_inode;
 FUNC_2(&VAR_7, 0, sizeof(VAR_7));
 VAR_7.dirent = VAR_2;
 VAR_7.dentry = VAR_1->f_path.dentry;
 VAR_7.filldir = VAR_3;
 VAR_7.filldir_called = 0;
 VAR_7.entries_written = 0;
 VAR_4 = FUNC_3(VAR_5, VAR_0, (void *)&VAR_7);
 VAR_1->f_pos = VAR_5->f_pos;
 if (VAR_4 < 0)
  goto out;
 if (VAR_7.filldir_called && !VAR_7.entries_written)
  goto out;
 if (VAR_4 >= 0)
  FUNC_1(VAR_6,
     VAR_5->f_path.dentry->d_inode);
out:
 return VAR_4;
}
