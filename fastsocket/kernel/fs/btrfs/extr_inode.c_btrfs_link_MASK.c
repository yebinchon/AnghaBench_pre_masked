
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct inode {unsigned int i_nlink; int i_ctime; } ;
struct dentry {struct dentry* d_parent; struct inode* d_inode; } ;
struct btrfs_trans_handle {unsigned long blocks_used; } ;
struct btrfs_root {scalar_t__ objectid; } ;
struct TYPE_2__ {struct btrfs_root* root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (struct btrfs_trans_handle*) ;
 int FUNC_2 (struct btrfs_trans_handle*) ;
 int FUNC_3 (struct btrfs_trans_handle*,struct inode*,struct dentry*,struct inode*,int,int ) ;
 int FUNC_4 (struct btrfs_root*,unsigned long) ;
 int FUNC_5 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 int FUNC_6 (struct inode*) ;
 int FUNC_7 (struct btrfs_trans_handle*,struct inode*,int *,struct dentry*) ;
 int FUNC_8 (struct inode*,int *) ;
 struct btrfs_trans_handle* FUNC_9 (struct btrfs_root*,int) ;
 int FUNC_10 (struct btrfs_trans_handle*,struct btrfs_root*,struct inode*) ;
 int FUNC_11 (struct dentry*,struct inode*) ;
 int FUNC_12 (struct inode*) ;
 int FUNC_13 (struct inode*) ;
 int FUNC_14 (struct inode*) ;
 int FUNC_15 (struct inode*) ;

__attribute__((used)) static int FUNC_16(struct dentry *VAR_3, struct inode *VAR_4,
        struct dentry *VAR_5)
{
 struct btrfs_trans_handle *VAR_6;
 struct btrfs_root *VAR_7 = FUNC_0(VAR_4)->root;
 struct inode *VAR_8 = VAR_3->d_inode;
 u64 VAR_9;
 unsigned long VAR_10 = 0;
 int VAR_11;
 int VAR_12 = 0;


 if (VAR_7->objectid != FUNC_0(VAR_8)->root->objectid)
  return -VAR_2;

 if (VAR_8->i_nlink == ~0U)
  return -VAR_1;

 VAR_11 = FUNC_8(VAR_4, &VAR_9);
 if (VAR_11)
  goto fail;






 VAR_6 = FUNC_9(VAR_7, 5);
 if (FUNC_1(VAR_6)) {
  VAR_11 = FUNC_2(VAR_6);
  goto fail;
 }

 FUNC_6(VAR_8);
 FUNC_14(VAR_8);
 VAR_8->i_ctime = VAR_0;
 FUNC_12(VAR_8);

 VAR_11 = FUNC_3(VAR_6, VAR_4, VAR_5, VAR_8, 1, VAR_9);

 if (VAR_11) {
  VAR_12 = 1;
 } else {
  struct dentry *VAR_13 = VAR_5->d_parent;
  VAR_11 = FUNC_10(VAR_6, VAR_7, VAR_8);
  if (VAR_11)
   goto fail;
  FUNC_11(VAR_5, VAR_8);
  FUNC_7(VAR_6, VAR_8, ((void*)0), VAR_13);
 }

 VAR_10 = VAR_6->blocks_used;
 FUNC_5(VAR_6, VAR_7);
fail:
 if (VAR_12) {
  FUNC_13(VAR_8);
  FUNC_15(VAR_8);
 }
 FUNC_4(VAR_7, VAR_10);
 return VAR_11;
}
