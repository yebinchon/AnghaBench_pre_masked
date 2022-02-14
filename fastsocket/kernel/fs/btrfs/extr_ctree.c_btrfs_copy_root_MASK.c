
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct extent_buffer {int start; int len; } ;
struct btrfs_trans_handle {int transid; } ;
struct btrfs_root {TYPE_2__* fs_info; int last_trans; scalar_t__ ref_cows; } ;
struct btrfs_disk_key {int dummy; } ;
struct TYPE_4__ {int fsid; TYPE_1__* running_transaction; } ;
struct TYPE_3__ {int transid; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct extent_buffer*) ;
 int FUNC_1 (struct extent_buffer*) ;
 int FUNC_2 (int) ;
 struct extent_buffer* FUNC_3 (struct btrfs_trans_handle*,struct btrfs_root*,int ,int ,int ,struct btrfs_disk_key*,int,int ,int ) ;
 int FUNC_4 (struct extent_buffer*,int) ;
 scalar_t__ FUNC_5 (struct extent_buffer*) ;
 int FUNC_6 (struct extent_buffer*) ;
 int FUNC_7 (struct extent_buffer*) ;
 int FUNC_8 (struct btrfs_trans_handle*,struct btrfs_root*,struct extent_buffer*,int,int) ;
 int FUNC_9 (struct extent_buffer*,struct btrfs_disk_key*,int ) ;
 int FUNC_10 (struct extent_buffer*) ;
 int FUNC_11 (struct extent_buffer*,struct btrfs_disk_key*,int ) ;
 int FUNC_12 (struct extent_buffer*,int ) ;
 int FUNC_13 (struct extent_buffer*,int ) ;
 int FUNC_14 (struct extent_buffer*,int) ;
 int FUNC_15 (struct extent_buffer*,int ) ;
 int FUNC_16 (struct extent_buffer*,int ) ;
 int FUNC_17 (struct extent_buffer*,struct extent_buffer*,int ,int ,int ) ;
 int FUNC_18 (struct extent_buffer*,int ,unsigned long,int ) ;

int FUNC_19(struct btrfs_trans_handle *VAR_5,
        struct btrfs_root *VAR_6,
        struct extent_buffer *VAR_7,
        struct extent_buffer **VAR_8, u64 VAR_9)
{
 struct extent_buffer *VAR_10;
 int VAR_11 = 0;
 int VAR_12;
 struct btrfs_disk_key VAR_13;

 FUNC_2(VAR_6->ref_cows && VAR_5->transid !=
  VAR_6->fs_info->running_transaction->transid);
 FUNC_2(VAR_6->ref_cows && VAR_5->transid != VAR_6->last_trans);

 VAR_12 = FUNC_7(VAR_7);
 if (VAR_12 == 0)
  FUNC_9(VAR_7, &VAR_13, 0);
 else
  FUNC_11(VAR_7, &VAR_13, 0);

 VAR_10 = FUNC_3(VAR_5, VAR_6, VAR_7->len, 0,
         VAR_9, &VAR_13, VAR_12,
         VAR_7->start, 0);
 if (FUNC_0(VAR_10))
  return FUNC_1(VAR_10);

 FUNC_17(VAR_10, VAR_7, 0, 0, VAR_10->len);
 FUNC_13(VAR_10, VAR_10->start);
 FUNC_15(VAR_10, VAR_5->transid);
 FUNC_12(VAR_10, VAR_3);
 FUNC_4(VAR_10, VAR_2 |
         VAR_1);
 if (VAR_9 == VAR_4)
  FUNC_14(VAR_10, VAR_1);
 else
  FUNC_16(VAR_10, VAR_9);

 FUNC_18(VAR_10, VAR_6->fs_info->fsid,
       (unsigned long)FUNC_5(VAR_10),
       VAR_0);

 FUNC_2(FUNC_6(VAR_7) > VAR_5->transid);
 if (VAR_9 == VAR_4)
  VAR_11 = FUNC_8(VAR_5, VAR_6, VAR_10, 1, 1);
 else
  VAR_11 = FUNC_8(VAR_5, VAR_6, VAR_10, 0, 1);

 if (VAR_11)
  return VAR_11;

 FUNC_10(VAR_10);
 *VAR_8 = VAR_10;
 return 0;
}
