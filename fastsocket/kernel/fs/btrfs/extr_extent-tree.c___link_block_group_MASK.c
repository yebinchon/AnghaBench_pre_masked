
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_space_info {int groups_sem; int * block_groups; } ;
struct btrfs_block_group_cache {int list; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (struct btrfs_block_group_cache*) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct btrfs_space_info *VAR_0,
          struct btrfs_block_group_cache *VAR_1)
{
 int VAR_2 = FUNC_1(VAR_1);

 FUNC_0(&VAR_0->groups_sem);
 FUNC_2(&VAR_1->list, &VAR_0->block_groups[VAR_2]);
 FUNC_3(&VAR_0->groups_sem);
}
