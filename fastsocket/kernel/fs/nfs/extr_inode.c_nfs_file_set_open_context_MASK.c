
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct nfs_open_context {int list; } ;
struct nfs_inode {int open_files; } ;
struct inode {int i_lock; } ;
struct TYPE_4__ {TYPE_1__* dentry; } ;
struct file {int private_data; TYPE_2__ f_path; } ;
struct TYPE_3__ {struct inode* d_inode; } ;


 struct nfs_inode* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct nfs_open_context*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

void FUNC_5(struct file *VAR_0, struct nfs_open_context *VAR_1)
{
 struct inode *VAR_2 = VAR_0->f_path.dentry->d_inode;
 struct nfs_inode *VAR_3 = FUNC_0(VAR_2);

 VAR_0->private_data = FUNC_1(VAR_1);
 FUNC_3(&VAR_2->i_lock);
 FUNC_2(&VAR_1->list, &VAR_3->open_files);
 FUNC_4(&VAR_2->i_lock);
}
