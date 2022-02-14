
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
struct inode {int i_rdev; int i_version; TYPE_3__ i_ctime; TYPE_2__ i_mtime; TYPE_1__ i_atime; int i_nlink; int i_mode; int i_gid; int i_uid; } ;
struct extent_buffer {int dummy; } ;
struct btrfs_trans_handle {int transid; } ;
struct btrfs_inode_item {int dummy; } ;
struct TYPE_8__ {int flags; int generation; int disk_i_size; } ;


 TYPE_4__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct btrfs_inode_item*) ;
 int FUNC_2 (struct btrfs_inode_item*) ;
 int FUNC_3 (struct btrfs_inode_item*) ;
 int FUNC_4 (struct extent_buffer*,struct btrfs_inode_item*,int ) ;
 int FUNC_5 (struct extent_buffer*,struct btrfs_inode_item*,int ) ;
 int FUNC_6 (struct extent_buffer*,struct btrfs_inode_item*,int ) ;
 int FUNC_7 (struct extent_buffer*,struct btrfs_inode_item*,int ) ;
 int FUNC_8 (struct extent_buffer*,struct btrfs_inode_item*,int ) ;
 int FUNC_9 (struct extent_buffer*,struct btrfs_inode_item*,int ) ;
 int FUNC_10 (struct extent_buffer*,struct btrfs_inode_item*,int ) ;
 int FUNC_11 (struct extent_buffer*,struct btrfs_inode_item*,int ) ;
 int FUNC_12 (struct extent_buffer*,struct btrfs_inode_item*,int ) ;
 int FUNC_13 (struct extent_buffer*,struct btrfs_inode_item*,int ) ;
 int FUNC_14 (struct extent_buffer*,struct btrfs_inode_item*,int ) ;
 int FUNC_15 (struct extent_buffer*,struct btrfs_inode_item*,int ) ;
 int FUNC_16 (struct extent_buffer*,int ,int ) ;
 int FUNC_17 (struct extent_buffer*,int ,int ) ;
 int FUNC_18 (struct inode*) ;

__attribute__((used)) static void FUNC_19(struct btrfs_trans_handle *VAR_0,
       struct extent_buffer *VAR_1,
       struct btrfs_inode_item *VAR_2,
       struct inode *VAR_3)
{
 FUNC_15(VAR_1, VAR_2, VAR_3->i_uid);
 FUNC_7(VAR_1, VAR_2, VAR_3->i_gid);
 FUNC_13(VAR_1, VAR_2, FUNC_0(VAR_3)->disk_i_size);
 FUNC_8(VAR_1, VAR_2, VAR_3->i_mode);
 FUNC_10(VAR_1, VAR_2, VAR_3->i_nlink);

 FUNC_17(VAR_1, FUNC_1(VAR_2),
          VAR_3->i_atime.tv_sec);
 FUNC_16(VAR_1, FUNC_1(VAR_2),
    VAR_3->i_atime.tv_nsec);

 FUNC_17(VAR_1, FUNC_3(VAR_2),
          VAR_3->i_mtime.tv_sec);
 FUNC_16(VAR_1, FUNC_3(VAR_2),
    VAR_3->i_mtime.tv_nsec);

 FUNC_17(VAR_1, FUNC_2(VAR_2),
          VAR_3->i_ctime.tv_sec);
 FUNC_16(VAR_1, FUNC_2(VAR_2),
    VAR_3->i_ctime.tv_nsec);

 FUNC_9(VAR_1, VAR_2, FUNC_18(VAR_3));
 FUNC_6(VAR_1, VAR_2, FUNC_0(VAR_3)->generation);
 FUNC_12(VAR_1, VAR_2, VAR_3->i_version);
 FUNC_14(VAR_1, VAR_2, VAR_0->transid);
 FUNC_11(VAR_1, VAR_2, VAR_3->i_rdev);
 FUNC_5(VAR_1, VAR_2, FUNC_0(VAR_3)->flags);
 FUNC_4(VAR_1, VAR_2, 0);
}
