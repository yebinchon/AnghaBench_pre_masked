
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct TYPE_7__ {void* tv_nsec; void* tv_sec; } ;
struct TYPE_6__ {void* tv_nsec; void* tv_sec; } ;
struct TYPE_5__ {void* tv_nsec; void* tv_sec; } ;
struct inode {int i_generation; TYPE_3__ i_ctime; TYPE_2__ i_mtime; TYPE_1__ i_atime; scalar_t__ i_rdev; int i_version; int i_nlink; int i_mode; int i_gid; int i_uid; } ;
struct btrfs_timespec {int dummy; } ;
struct btrfs_inode_item {int dummy; } ;
struct btrfs_delayed_node {int mutex; struct btrfs_inode_item inode_item; int inode_dirty; } ;
struct TYPE_8__ {scalar_t__ index_cnt; int generation; int flags; } ;


 TYPE_4__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 struct btrfs_delayed_node* FUNC_1 (struct inode*) ;
 int FUNC_2 (struct inode*,int ) ;
 struct btrfs_timespec* FUNC_3 (struct btrfs_inode_item*) ;
 struct btrfs_timespec* FUNC_4 (struct btrfs_inode_item*) ;
 struct btrfs_timespec* FUNC_5 (struct btrfs_inode_item*) ;
 int FUNC_6 (struct btrfs_delayed_node*) ;
 int FUNC_7 (struct btrfs_inode_item*) ;
 int FUNC_8 (struct btrfs_inode_item*) ;
 int FUNC_9 (struct btrfs_inode_item*) ;
 int FUNC_10 (struct btrfs_inode_item*) ;
 int FUNC_11 (struct btrfs_inode_item*) ;
 int FUNC_12 (struct btrfs_inode_item*) ;
 int FUNC_13 (struct btrfs_inode_item*) ;
 int FUNC_14 (struct btrfs_inode_item*) ;
 int FUNC_15 (struct btrfs_inode_item*) ;
 int FUNC_16 (struct btrfs_inode_item*) ;
 void* FUNC_17 (struct btrfs_timespec*) ;
 void* FUNC_18 (struct btrfs_timespec*) ;
 int FUNC_19 (struct inode*,int ) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;

int FUNC_22(struct inode *VAR_1, u32 *VAR_2)
{
 struct btrfs_delayed_node *VAR_3;
 struct btrfs_inode_item *VAR_4;
 struct btrfs_timespec *VAR_5;

 VAR_3 = FUNC_1(VAR_1);
 if (!VAR_3)
  return -VAR_0;

 FUNC_20(&VAR_3->mutex);
 if (!VAR_3->inode_dirty) {
  FUNC_21(&VAR_3->mutex);
  FUNC_6(VAR_3);
  return -VAR_0;
 }

 VAR_4 = &VAR_3->inode_item;

 VAR_1->i_uid = FUNC_16(VAR_4);
 VAR_1->i_gid = FUNC_9(VAR_4);
 FUNC_2(VAR_1, FUNC_15(VAR_4));
 VAR_1->i_mode = FUNC_10(VAR_4);
 VAR_1->i_nlink = FUNC_12(VAR_4);
 FUNC_19(VAR_1, FUNC_11(VAR_4));
 FUNC_0(VAR_1)->generation = FUNC_8(VAR_4);
 VAR_1->i_version = FUNC_14(VAR_4);
 VAR_1->i_rdev = 0;
 *VAR_2 = FUNC_13(VAR_4);
 FUNC_0(VAR_1)->flags = FUNC_7(VAR_4);

 VAR_5 = FUNC_3(VAR_4);
 VAR_1->i_atime.tv_sec = FUNC_18(VAR_5);
 VAR_1->i_atime.tv_nsec = FUNC_17(VAR_5);

 VAR_5 = FUNC_5(VAR_4);
 VAR_1->i_mtime.tv_sec = FUNC_18(VAR_5);
 VAR_1->i_mtime.tv_nsec = FUNC_17(VAR_5);

 VAR_5 = FUNC_4(VAR_4);
 VAR_1->i_ctime.tv_sec = FUNC_18(VAR_5);
 VAR_1->i_ctime.tv_nsec = FUNC_17(VAR_5);

 VAR_1->i_generation = FUNC_0(VAR_1)->generation;
 FUNC_0(VAR_1)->index_cnt = (u64)-1;

 FUNC_21(&VAR_3->mutex);
 FUNC_6(VAR_3);
 return 0;
}
