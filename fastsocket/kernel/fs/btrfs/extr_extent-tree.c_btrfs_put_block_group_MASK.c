
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_block_group_cache {scalar_t__ pinned; scalar_t__ reserved; struct btrfs_block_group_cache* free_space_ctl; int count; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct btrfs_block_group_cache*) ;

void FUNC_3(struct btrfs_block_group_cache *VAR_0)
{
 if (FUNC_1(&VAR_0->count)) {
  FUNC_0(VAR_0->pinned > 0);
  FUNC_0(VAR_0->reserved > 0);
  FUNC_2(VAR_0->free_space_ctl);
  FUNC_2(VAR_0);
 }
}
