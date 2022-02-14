
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u64 ;
struct super_block {int dummy; } ;
struct inode {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_iget_args {struct btrfs_root* root; int ino; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct inode* FUNC_0 (struct super_block*,int ,int ,int ,void*) ;

__attribute__((used)) static struct inode *FUNC_1(struct super_block *VAR_2,
           u64 VAR_3,
           struct btrfs_root *VAR_4)
{
 struct inode *VAR_5;
 struct btrfs_iget_args VAR_6;
 VAR_6.ino = VAR_3;
 VAR_6.root = VAR_4;

 VAR_5 = FUNC_0(VAR_2, VAR_3, VAR_0,
        VAR_1,
        (void *)&VAR_6);
 return VAR_5;
}
