
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct inode {scalar_t__ i_size; } ;
struct TYPE_5__ {int len; int name; } ;
struct dentry {TYPE_2__ d_name; struct inode* d_inode; } ;
struct btrfs_trans_handle {unsigned long blocks_used; } ;
struct btrfs_root {int dummy; } ;
struct TYPE_4__ {int objectid; } ;
struct TYPE_6__ {TYPE_1__ location; struct btrfs_root* root; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_3 ;
 scalar_t__ FUNC_1 (struct btrfs_trans_handle*) ;
 int FUNC_2 (struct btrfs_trans_handle*) ;
 int FUNC_3 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 struct btrfs_trans_handle* FUNC_4 (struct inode*,struct dentry*) ;
 int FUNC_5 (struct btrfs_root*,unsigned long) ;
 int FUNC_6 (struct inode*,int ) ;
 scalar_t__ FUNC_7 (struct inode*) ;
 int FUNC_8 (struct btrfs_trans_handle*,struct inode*) ;
 int FUNC_9 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*,struct inode*,int ,int ) ;
 int FUNC_10 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*,int ,int ,int ) ;
 scalar_t__ FUNC_11 (int) ;

__attribute__((used)) static int FUNC_12(struct inode *VAR_4, struct dentry *VAR_5)
{
 struct inode *VAR_6 = VAR_5->d_inode;
 int VAR_7 = 0;
 struct btrfs_root *VAR_8 = FUNC_0(VAR_4)->root;
 struct btrfs_trans_handle *VAR_9;
 unsigned long VAR_10 = 0;

 if (VAR_6->i_size > VAR_0 ||
     FUNC_7(VAR_6) == VAR_2)
  return -VAR_3;

 VAR_9 = FUNC_4(VAR_4, VAR_5);
 if (FUNC_1(VAR_9))
  return FUNC_2(VAR_9);

 if (FUNC_11(FUNC_7(VAR_6) == VAR_1)) {
  VAR_7 = FUNC_10(VAR_9, VAR_8, VAR_4,
       FUNC_0(VAR_6)->location.objectid,
       VAR_5->d_name.name,
       VAR_5->d_name.len);
  goto out;
 }

 VAR_7 = FUNC_8(VAR_9, VAR_6);
 if (VAR_7)
  goto out;


 VAR_7 = FUNC_9(VAR_9, VAR_8, VAR_4, VAR_5->d_inode,
     VAR_5->d_name.name, VAR_5->d_name.len);
 if (!VAR_7)
  FUNC_6(VAR_6, 0);
out:
 VAR_10 = VAR_9->blocks_used;
 FUNC_3(VAR_9, VAR_8);
 FUNC_5(VAR_8, VAR_10);

 return VAR_7;
}
