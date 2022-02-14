
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {int dummy; } ;
struct TYPE_3__ {struct dentry* dentry; } ;
struct file {struct configfs_dirent* private_data; TYPE_1__ f_path; } ;
struct dentry {TYPE_2__* d_inode; } ;
struct configfs_dirent {int s_sibling; } ;
struct TYPE_4__ {int i_mutex; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (struct configfs_dirent*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int FUNC_6(struct inode *VAR_1, struct file *VAR_2)
{
 struct dentry * VAR_3 = VAR_2->f_path.dentry;
 struct configfs_dirent * VAR_4 = VAR_2->private_data;

 FUNC_1(&VAR_3->d_inode->i_mutex);
 FUNC_4(&VAR_0);
 FUNC_0(&VAR_4->s_sibling);
 FUNC_5(&VAR_0);
 FUNC_2(&VAR_3->d_inode->i_mutex);

 FUNC_3(VAR_4);

 return 0;
}
