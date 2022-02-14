
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct inode {unsigned long blocks_used; int i_mode; int * i_op; } ;
struct TYPE_3__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;
struct btrfs_trans_handle {unsigned long blocks_used; int i_mode; int * i_op; } ;
struct btrfs_root {int dummy; } ;
typedef int dev_t ;
struct TYPE_4__ {struct btrfs_root* root; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int FUNC_3 (struct inode*,struct inode*,struct dentry*,struct inode*,int ,int ) ;
 int FUNC_4 (struct btrfs_root*,unsigned long) ;
 int FUNC_5 (struct inode*,struct btrfs_root*) ;
 int FUNC_6 (struct btrfs_root*,int *) ;
 int FUNC_7 (struct inode*,struct inode*,struct inode*) ;
 int FUNC_8 (struct inode*) ;
 struct inode* FUNC_9 (struct inode*,struct btrfs_root*,struct inode*,int ,int ,int ,int ,int,int *) ;
 int VAR_1 ;
 struct inode* FUNC_10 (struct btrfs_root*,int) ;
 int FUNC_11 (struct inode*,struct btrfs_root*,struct inode*) ;
 int FUNC_12 (struct dentry*,struct inode*) ;
 int FUNC_13 (struct inode*,int ,int ) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*) ;
 int FUNC_16 (int ) ;

__attribute__((used)) static int FUNC_17(struct inode *VAR_2, struct dentry *VAR_3,
   int VAR_4, dev_t VAR_5)
{
 struct btrfs_trans_handle *VAR_6;
 struct btrfs_root *VAR_7 = FUNC_0(VAR_2)->root;
 struct inode *VAR_8 = ((void*)0);
 int VAR_9;
 int VAR_10 = 0;
 u64 VAR_11;
 unsigned long VAR_12 = 0;
 u64 VAR_13 = 0;

 if (!FUNC_16(VAR_5))
  return -VAR_0;






 VAR_6 = FUNC_10(VAR_7, 5);
 if (FUNC_1(VAR_6))
  return FUNC_2(VAR_6);

 VAR_9 = FUNC_6(VAR_7, &VAR_11);
 if (VAR_9)
  goto out_unlock;

 VAR_8 = FUNC_9(VAR_6, VAR_7, VAR_2, VAR_3->d_name.name,
    VAR_3->d_name.len, FUNC_8(VAR_2), VAR_11,
    VAR_4, &VAR_13);
 if (FUNC_1(VAR_8)) {
  VAR_9 = FUNC_2(VAR_8);
  goto out_unlock;
 }

 VAR_9 = FUNC_7(VAR_6, VAR_8, VAR_2);
 if (VAR_9) {
  VAR_10 = 1;
  goto out_unlock;
 }
 VAR_8->i_op = &VAR_1;
 VAR_9 = FUNC_3(VAR_6, VAR_2, VAR_3, VAR_8, 0, VAR_13);
 if (VAR_9)
  VAR_10 = 1;
 else {
  FUNC_13(VAR_8, VAR_8->i_mode, VAR_5);
  FUNC_11(VAR_6, VAR_7, VAR_8);
  FUNC_12(VAR_3, VAR_8);
 }
out_unlock:
 VAR_12 = VAR_6->blocks_used;
 FUNC_5(VAR_6, VAR_7);
 FUNC_4(VAR_7, VAR_12);
 if (VAR_10) {
  FUNC_14(VAR_8);
  FUNC_15(VAR_8);
 }
 return VAR_9;
}
