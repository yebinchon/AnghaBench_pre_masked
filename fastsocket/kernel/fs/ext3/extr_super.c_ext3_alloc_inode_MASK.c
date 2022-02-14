
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_version; } ;
struct ext3_inode_info {struct inode vfs_inode; int i_sync_tid; int i_datasync_tid; int * i_block_alloc_info; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int ) ;
 int VAR_1 ;
 struct ext3_inode_info* FUNC_1 (int ,int ) ;

__attribute__((used)) static struct inode *FUNC_2(struct super_block *VAR_2)
{
 struct ext3_inode_info *VAR_3;

 VAR_3 = FUNC_1(VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);
 VAR_3->i_block_alloc_info = ((void*)0);
 VAR_3->vfs_inode.i_version = 1;
 FUNC_0(&VAR_3->i_datasync_tid, 0);
 FUNC_0(&VAR_3->i_sync_tid, 0);
 return &VAR_3->vfs_inode;
}
