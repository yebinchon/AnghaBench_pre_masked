
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u64 ;
struct map_lookup {int num_stripes; TYPE_3__* stripes; } ;
struct extent_map {scalar_t__ bdev; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct TYPE_8__ {int lock; } ;
struct btrfs_mapping_tree {TYPE_4__ map_tree; } ;
struct TYPE_7__ {TYPE_2__* dev; } ;
struct TYPE_6__ {int writeable; } ;
struct TYPE_5__ {struct btrfs_mapping_tree mapping_tree; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct btrfs_root*,int ) ;
 int FUNC_1 (struct extent_map*) ;
 struct extent_map* FUNC_2 (TYPE_4__*,int ,int) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct btrfs_root *VAR_1, u64 VAR_2)
{
 struct extent_map *VAR_3;
 struct map_lookup *VAR_4;
 struct btrfs_mapping_tree *VAR_5 = &VAR_1->fs_info->mapping_tree;
 int VAR_6 = 0;
 int VAR_7;

 FUNC_3(&VAR_5->map_tree.lock);
 VAR_3 = FUNC_2(&VAR_5->map_tree, VAR_2, 1);
 FUNC_4(&VAR_5->map_tree.lock);
 if (!VAR_3)
  return 1;

 if (FUNC_0(VAR_1, VAR_0)) {
  FUNC_1(VAR_3);
  return 0;
 }

 VAR_4 = (struct map_lookup *)VAR_3->bdev;
 for (VAR_7 = 0; VAR_7 < VAR_4->num_stripes; VAR_7++) {
  if (!VAR_4->stripes[VAR_7].dev->writeable) {
   VAR_6 = 1;
   break;
  }
 }
 FUNC_1(VAR_3);
 return VAR_6;
}
