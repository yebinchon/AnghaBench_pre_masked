
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_block_group_cache {scalar_t__ flags; TYPE_1__* space_info; int ro; } ;
struct TYPE_2__ {int flags; } ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 scalar_t__ FUNC_1 (struct btrfs_trans_handle*) ;
 int FUNC_2 (struct btrfs_trans_handle*) ;
 int FUNC_3 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 struct btrfs_trans_handle* FUNC_4 (struct btrfs_root*) ;
 int FUNC_5 (struct btrfs_trans_handle*,struct btrfs_root*,int,scalar_t__,int ) ;
 scalar_t__ FUNC_6 (struct btrfs_root*,int ) ;
 int FUNC_7 (struct btrfs_block_group_cache*,int ) ;
 scalar_t__ FUNC_8 (struct btrfs_root*,scalar_t__) ;

int FUNC_9(struct btrfs_root *VAR_1,
        struct btrfs_block_group_cache *VAR_2)

{
 struct btrfs_trans_handle *VAR_3;
 u64 VAR_4;
 int VAR_5;

 FUNC_0(VAR_2->ro);

 VAR_3 = FUNC_4(VAR_1);
 if (FUNC_1(VAR_3))
  return FUNC_2(VAR_3);

 VAR_4 = FUNC_8(VAR_1, VAR_2->flags);
 if (VAR_4 != VAR_2->flags) {
  VAR_5 = FUNC_5(VAR_3, VAR_1, 2 * 1024 * 1024, VAR_4,
         VAR_0);
  if (VAR_5 < 0)
   goto out;
 }

 VAR_5 = FUNC_7(VAR_2, 0);
 if (!VAR_5)
  goto out;
 VAR_4 = FUNC_6(VAR_1, VAR_2->space_info->flags);
 VAR_5 = FUNC_5(VAR_3, VAR_1, 2 * 1024 * 1024, VAR_4,
        VAR_0);
 if (VAR_5 < 0)
  goto out;
 VAR_5 = FUNC_7(VAR_2, 0);
out:
 FUNC_3(VAR_3, VAR_1);
 return VAR_5;
}
