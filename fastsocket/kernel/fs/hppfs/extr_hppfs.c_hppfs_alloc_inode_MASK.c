
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct hppfs_inode_info {struct inode vfs_inode; int * proc_dentry; } ;


 int VAR_0 ;
 int FUNC_0 (struct inode*) ;
 struct hppfs_inode_info* FUNC_1 (int,int ) ;

__attribute__((used)) static struct inode *FUNC_2(struct super_block *VAR_1)
{
 struct hppfs_inode_info *VAR_2;

 VAR_2 = FUNC_1(sizeof(*VAR_2), VAR_0);
 if (!VAR_2)
  return ((void*)0);

 VAR_2->proc_dentry = ((void*)0);
 FUNC_0(&VAR_2->vfs_inode);
 return &VAR_2->vfs_inode;
}
