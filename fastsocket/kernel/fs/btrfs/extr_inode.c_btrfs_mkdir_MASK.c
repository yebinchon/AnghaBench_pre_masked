
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct inode {unsigned long blocks_used; int * i_fop; int * i_op; } ;
struct TYPE_3__ {int len; int name; } ;
struct dentry {TYPE_1__ d_name; } ;
struct btrfs_trans_handle {unsigned long blocks_used; int * i_fop; int * i_op; } ;
struct btrfs_root {int dummy; } ;
struct TYPE_4__ {struct btrfs_root* root; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 scalar_t__ FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*) ;
 int VAR_0 ;
 int FUNC_3 (struct inode*,struct inode*,struct inode*,int ,int ,int ,int ) ;
 int FUNC_4 (struct btrfs_root*,unsigned long) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_5 (struct inode*,struct btrfs_root*) ;
 int FUNC_6 (struct btrfs_root*,int *) ;
 int FUNC_7 (struct inode*,int ) ;
 int FUNC_8 (struct inode*,struct inode*,struct inode*) ;
 int FUNC_9 (struct inode*) ;
 struct inode* FUNC_10 (struct inode*,struct btrfs_root*,struct inode*,int ,int ,int ,int ,int,int *) ;
 struct inode* FUNC_11 (struct btrfs_root*,int) ;
 int FUNC_12 (struct inode*,struct btrfs_root*,struct inode*) ;
 int FUNC_13 (struct dentry*,struct inode*) ;
 int FUNC_14 (struct inode*) ;

__attribute__((used)) static int FUNC_15(struct inode *VAR_3, struct dentry *VAR_4, int VAR_5)
{
 struct inode *VAR_6 = ((void*)0);
 struct btrfs_trans_handle *VAR_7;
 struct btrfs_root *VAR_8 = FUNC_0(VAR_3)->root;
 int VAR_9 = 0;
 int VAR_10 = 0;
 u64 VAR_11 = 0;
 u64 VAR_12 = 0;
 unsigned long VAR_13 = 1;






 VAR_7 = FUNC_11(VAR_8, 5);
 if (FUNC_1(VAR_7))
  return FUNC_2(VAR_7);

 VAR_9 = FUNC_6(VAR_8, &VAR_11);
 if (VAR_9)
  goto out_fail;

 VAR_6 = FUNC_10(VAR_7, VAR_8, VAR_3, VAR_4->d_name.name,
    VAR_4->d_name.len, FUNC_9(VAR_3), VAR_11,
    VAR_0 | VAR_5, &VAR_12);
 if (FUNC_1(VAR_6)) {
  VAR_9 = FUNC_2(VAR_6);
  goto out_fail;
 }

 VAR_10 = 1;

 VAR_9 = FUNC_8(VAR_7, VAR_6, VAR_3);
 if (VAR_9)
  goto out_fail;

 VAR_6->i_op = &VAR_2;
 VAR_6->i_fop = &VAR_1;

 FUNC_7(VAR_6, 0);
 VAR_9 = FUNC_12(VAR_7, VAR_8, VAR_6);
 if (VAR_9)
  goto out_fail;

 VAR_9 = FUNC_3(VAR_7, VAR_3, VAR_6, VAR_4->d_name.name,
        VAR_4->d_name.len, 0, VAR_12);
 if (VAR_9)
  goto out_fail;

 FUNC_13(VAR_4, VAR_6);
 VAR_10 = 0;

out_fail:
 VAR_13 = VAR_7->blocks_used;
 FUNC_5(VAR_7, VAR_8);
 if (VAR_10)
  FUNC_14(VAR_6);
 FUNC_4(VAR_8, VAR_13);
 return VAR_9;
}
