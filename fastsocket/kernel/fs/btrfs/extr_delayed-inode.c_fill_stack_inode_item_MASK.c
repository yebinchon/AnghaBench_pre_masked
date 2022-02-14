
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_7__ {int tv_nsec; int tv_sec; } ;
struct TYPE_6__ {int tv_nsec; int tv_sec; } ;
struct TYPE_5__ {int tv_nsec; int tv_sec; } ;
struct inode {TYPE_3__ i_ctime; TYPE_2__ i_mtime; TYPE_1__ i_atime; int i_rdev; int i_version; int i_nlink; int i_mode; int i_gid; int i_uid; } ;
struct btrfs_trans_handle {int transid; } ;
struct btrfs_inode_item {int dummy; } ;
struct TYPE_8__ {int flags; int generation; int disk_i_size; } ;


 TYPE_4__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct btrfs_inode_item*) ;
 int FUNC_2 (struct btrfs_inode_item*) ;
 int FUNC_3 (struct btrfs_inode_item*) ;
 int FUNC_4 (struct btrfs_inode_item*,int ) ;
 int FUNC_5 (struct btrfs_inode_item*,int ) ;
 int FUNC_6 (struct btrfs_inode_item*,int ) ;
 int FUNC_7 (struct btrfs_inode_item*,int ) ;
 int FUNC_8 (struct btrfs_inode_item*,int ) ;
 int FUNC_9 (struct btrfs_inode_item*,int ) ;
 int FUNC_10 (struct btrfs_inode_item*,int ) ;
 int FUNC_11 (struct btrfs_inode_item*,int ) ;
 int FUNC_12 (struct btrfs_inode_item*,int ) ;
 int FUNC_13 (struct btrfs_inode_item*,int ) ;
 int FUNC_14 (struct btrfs_inode_item*,int ) ;
 int FUNC_15 (struct btrfs_inode_item*,int ) ;
 int FUNC_16 (int ,int ) ;
 int FUNC_17 (int ,int ) ;
 int FUNC_18 (struct inode*) ;

__attribute__((used)) static void FUNC_19(struct btrfs_trans_handle *VAR_0,
      struct btrfs_inode_item *VAR_1,
      struct inode *VAR_2)
{
 FUNC_15(VAR_1, VAR_2->i_uid);
 FUNC_7(VAR_1, VAR_2->i_gid);
 FUNC_13(VAR_1, FUNC_0(VAR_2)->disk_i_size);
 FUNC_8(VAR_1, VAR_2->i_mode);
 FUNC_10(VAR_1, VAR_2->i_nlink);
 FUNC_9(VAR_1, FUNC_18(VAR_2));
 FUNC_6(VAR_1,
      FUNC_0(VAR_2)->generation);
 FUNC_12(VAR_1, VAR_2->i_version);
 FUNC_14(VAR_1, VAR_0->transid);
 FUNC_11(VAR_1, VAR_2->i_rdev);
 FUNC_5(VAR_1, FUNC_0(VAR_2)->flags);
 FUNC_4(VAR_1, 0);

 FUNC_17(FUNC_1(VAR_1),
         VAR_2->i_atime.tv_sec);
 FUNC_16(FUNC_1(VAR_1),
          VAR_2->i_atime.tv_nsec);

 FUNC_17(FUNC_3(VAR_1),
         VAR_2->i_mtime.tv_sec);
 FUNC_16(FUNC_3(VAR_1),
          VAR_2->i_mtime.tv_nsec);

 FUNC_17(FUNC_2(VAR_1),
         VAR_2->i_ctime.tv_sec);
 FUNC_16(FUNC_2(VAR_1),
          VAR_2->i_ctime.tv_nsec);
}
