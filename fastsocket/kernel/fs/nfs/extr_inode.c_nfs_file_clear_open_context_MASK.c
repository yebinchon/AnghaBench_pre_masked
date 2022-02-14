
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct nfs_open_context {int list; } ;
struct inode {int i_lock; } ;
struct TYPE_5__ {TYPE_1__* dentry; } ;
struct file {int * private_data; TYPE_2__ f_path; } ;
struct TYPE_6__ {int open_files; } ;
struct TYPE_4__ {struct inode* d_inode; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 int FUNC_1 (int *,int *) ;
 struct nfs_open_context* FUNC_2 (struct file*) ;
 int FUNC_3 (struct nfs_open_context*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(struct file *VAR_0)
{
 struct inode *VAR_1 = VAR_0->f_path.dentry->d_inode;
 struct nfs_open_context *VAR_2 = FUNC_2(VAR_0);

 if (VAR_2) {
  VAR_0->private_data = ((void*)0);
  FUNC_4(&VAR_1->i_lock);
  FUNC_1(&VAR_2->list, &FUNC_0(VAR_1)->open_files);
  FUNC_5(&VAR_1->i_lock);
  FUNC_3(VAR_2);
 }
}
