
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int u64 ;
struct nameidata {int dummy; } ;
struct inode {unsigned long blocks_used; TYPE_2__* i_mapping; int * i_op; int * i_fop; } ;
struct TYPE_6__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;
struct btrfs_trans_handle {unsigned long blocks_used; TYPE_2__* i_mapping; int * i_op; int * i_fop; } ;
struct btrfs_root {TYPE_3__* fs_info; } ;
struct TYPE_9__ {int * ops; } ;
struct TYPE_10__ {TYPE_4__ io_tree; struct btrfs_root* root; } ;
struct TYPE_8__ {int bdi; } ;
struct TYPE_7__ {int * backing_dev_info; int * a_ops; } ;


 TYPE_5__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,struct inode*,struct dentry*,struct inode*,int ,int ) ;
 int VAR_0 ;
 int FUNC_4 (struct btrfs_root*,unsigned long) ;
 int FUNC_5 (struct inode*,struct btrfs_root*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_6 (struct btrfs_root*,int *) ;
 int FUNC_7 (struct inode*,struct inode*,struct inode*) ;
 int FUNC_8 (struct inode*) ;
 struct inode* FUNC_9 (struct inode*,struct btrfs_root*,struct inode*,int ,int ,int ,int ,int,int *) ;
 struct inode* FUNC_10 (struct btrfs_root*,int) ;
 int FUNC_11 (struct dentry*,struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*) ;

__attribute__((used)) static int FUNC_14(struct inode *VAR_4, struct dentry *VAR_5,
   int VAR_6, struct nameidata *VAR_7)
{
 struct btrfs_trans_handle *VAR_8;
 struct btrfs_root *VAR_9 = FUNC_0(VAR_4)->root;
 struct inode *VAR_10 = ((void*)0);
 int VAR_11 = 0;
 int VAR_12;
 unsigned long VAR_13 = 0;
 u64 VAR_14;
 u64 VAR_15 = 0;






 VAR_8 = FUNC_10(VAR_9, 5);
 if (FUNC_1(VAR_8))
  return FUNC_2(VAR_8);

 VAR_12 = FUNC_6(VAR_9, &VAR_14);
 if (VAR_12)
  goto out_unlock;

 VAR_10 = FUNC_9(VAR_8, VAR_9, VAR_4, VAR_5->d_name.name,
    VAR_5->d_name.len, FUNC_8(VAR_4), VAR_14,
    VAR_6, &VAR_15);
 if (FUNC_1(VAR_10)) {
  VAR_12 = FUNC_2(VAR_10);
  goto out_unlock;
 }

 VAR_12 = FUNC_7(VAR_8, VAR_10, VAR_4);
 if (VAR_12) {
  VAR_11 = 1;
  goto out_unlock;
 }







 VAR_10->i_fop = &VAR_3;
 VAR_10->i_op = &VAR_2;

 VAR_12 = FUNC_3(VAR_8, VAR_4, VAR_5, VAR_10, 0, VAR_15);
 if (VAR_12)
  VAR_11 = 1;
 else {
  VAR_10->i_mapping->a_ops = &VAR_0;
  VAR_10->i_mapping->backing_dev_info = &VAR_9->fs_info->bdi;
  FUNC_0(VAR_10)->io_tree.ops = &VAR_1;
  FUNC_11(VAR_5, VAR_10);
 }
out_unlock:
 VAR_13 = VAR_8->blocks_used;
 FUNC_5(VAR_8, VAR_9);
 if (VAR_11) {
  FUNC_12(VAR_10);
  FUNC_13(VAR_10);
 }
 FUNC_4(VAR_9, VAR_13);
 return VAR_12;
}
