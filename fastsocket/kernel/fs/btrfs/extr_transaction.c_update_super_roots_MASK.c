
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct btrfs_super_block {int cache_generation; int root_level; int generation; int root; int chunk_root_level; int chunk_root_generation; int chunk_root; } ;
struct btrfs_root_item {int generation; int level; int bytenr; } ;
struct btrfs_root {TYPE_3__* fs_info; } ;
struct TYPE_6__ {TYPE_2__* tree_root; TYPE_1__* chunk_root; struct btrfs_super_block* super_copy; } ;
struct TYPE_5__ {struct btrfs_root_item root_item; } ;
struct TYPE_4__ {struct btrfs_root_item root_item; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct btrfs_root*,int ) ;

__attribute__((used)) static void FUNC_1(struct btrfs_root *VAR_1)
{
 struct btrfs_root_item *VAR_2;
 struct btrfs_super_block *VAR_3;

 VAR_3 = VAR_1->fs_info->super_copy;

 VAR_2 = &VAR_1->fs_info->chunk_root->root_item;
 VAR_3->chunk_root = VAR_2->bytenr;
 VAR_3->chunk_root_generation = VAR_2->generation;
 VAR_3->chunk_root_level = VAR_2->level;

 VAR_2 = &VAR_1->fs_info->tree_root->root_item;
 VAR_3->root = VAR_2->bytenr;
 VAR_3->generation = VAR_2->generation;
 VAR_3->root_level = VAR_2->level;
 if (FUNC_0(VAR_1, VAR_0))
  VAR_3->cache_generation = VAR_2->generation;
}
