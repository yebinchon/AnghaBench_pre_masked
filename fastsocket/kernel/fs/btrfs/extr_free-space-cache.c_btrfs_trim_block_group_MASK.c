
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct btrfs_block_group_cache {int dummy; } ;


 int FUNC_0 (struct btrfs_block_group_cache*,scalar_t__*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_1 (struct btrfs_block_group_cache*,scalar_t__*,scalar_t__,scalar_t__,scalar_t__) ;

int FUNC_2(struct btrfs_block_group_cache *VAR_0,
      u64 *VAR_1, u64 VAR_2, u64 VAR_3, u64 VAR_4)
{
 int VAR_5;

 *VAR_1 = 0;

 VAR_5 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);
 if (VAR_5)
  return VAR_5;

 VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4);

 return VAR_5;
}
