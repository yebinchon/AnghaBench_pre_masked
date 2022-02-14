
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct inode {scalar_t__ i_nlink; } ;
struct TYPE_3__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; struct inode* d_inode; } ;
struct btrfs_trans_handle {unsigned long blocks_used; } ;
struct btrfs_root {int dummy; } ;
struct TYPE_4__ {struct btrfs_root* root; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct btrfs_trans_handle*) ;
 int FUNC_2 (struct btrfs_trans_handle*) ;
 int FUNC_3 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 struct btrfs_trans_handle* FUNC_4 (struct inode*,struct dentry*) ;
 int FUNC_5 (struct btrfs_root*,unsigned long) ;
 int FUNC_6 (struct btrfs_trans_handle*,struct inode*) ;
 int FUNC_7 (struct btrfs_trans_handle*,struct inode*,struct inode*,int ) ;
 int FUNC_8 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*,struct inode*,int ,int ) ;

__attribute__((used)) static int FUNC_9(struct inode *VAR_0, struct dentry *VAR_1)
{
 struct btrfs_root *VAR_2 = FUNC_0(VAR_0)->root;
 struct btrfs_trans_handle *VAR_3;
 struct inode *VAR_4 = VAR_1->d_inode;
 int VAR_5;
 unsigned long VAR_6 = 0;

 VAR_3 = FUNC_4(VAR_0, VAR_1);
 if (FUNC_1(VAR_3))
  return FUNC_2(VAR_3);

 FUNC_7(VAR_3, VAR_0, VAR_1->d_inode, 0);

 VAR_5 = FUNC_8(VAR_3, VAR_2, VAR_0, VAR_1->d_inode,
     VAR_1->d_name.name, VAR_1->d_name.len);
 if (VAR_5)
  goto out;

 if (VAR_4->i_nlink == 0) {
  VAR_5 = FUNC_6(VAR_3, VAR_4);
  if (VAR_5)
   goto out;
 }

out:
 VAR_6 = VAR_3->blocks_used;
 FUNC_3(VAR_3, VAR_2);
 FUNC_5(VAR_2, VAR_6);
 return VAR_5;
}
