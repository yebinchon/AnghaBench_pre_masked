
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dentry {int d_inode; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;


 int FUNC_0 (struct btrfs_trans_handle*,struct btrfs_root*,int ,struct dentry*,int ) ;
 struct dentry* FUNC_1 (struct dentry*) ;
 int FUNC_2 (struct dentry*) ;

int FUNC_3(struct btrfs_trans_handle *VAR_0,
     struct btrfs_root *VAR_1, struct dentry *VAR_2)
{
 struct dentry *VAR_3 = FUNC_1(VAR_2);
 int VAR_4;

 VAR_4 = FUNC_0(VAR_0, VAR_1, VAR_2->d_inode, VAR_3, 0);
 FUNC_2(VAR_3);

 return VAR_4;
}
