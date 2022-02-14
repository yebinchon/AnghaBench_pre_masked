
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct btrfs_free_space_ctl {int extents_thresh; int * op; struct btrfs_block_group_cache* private; int start; int unit; int tree_lock; } ;
struct btrfs_free_space {int dummy; } ;
struct TYPE_2__ {int objectid; } ;
struct btrfs_block_group_cache {TYPE_1__ key; int sectorsize; struct btrfs_free_space_ctl* free_space_ctl; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;

void FUNC_1(struct btrfs_block_group_cache *VAR_1)
{
 struct btrfs_free_space_ctl *VAR_2 = VAR_1->free_space_ctl;

 FUNC_0(&VAR_2->tree_lock);
 VAR_2->unit = VAR_1->sectorsize;
 VAR_2->start = VAR_1->key.objectid;
 VAR_2->private = VAR_1;
 VAR_2->op = &VAR_0;






 VAR_2->extents_thresh = ((1024 * 32) / 2) /
    sizeof(struct btrfs_free_space);
}
