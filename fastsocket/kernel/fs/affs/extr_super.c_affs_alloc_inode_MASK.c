
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct inode {int i_version; } ;
struct affs_inode_info {struct inode vfs_inode; scalar_t__ i_pa_cnt; int * i_ext_bh; int * i_lc; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct affs_inode_info* FUNC_0 (int ,int ) ;

__attribute__((used)) static struct inode *FUNC_1(struct super_block *VAR_2)
{
 struct affs_inode_info *VAR_3;

 VAR_3 = FUNC_0(VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->vfs_inode.i_version = 1;
 VAR_3->i_lc = ((void*)0);
 VAR_3->i_ext_bh = ((void*)0);
 VAR_3->i_pa_cnt = 0;

 return &VAR_3->vfs_inode;
}
