
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct extent_map {int bdev; } ;
struct TYPE_3__ {int lock; } ;
struct btrfs_mapping_tree {TYPE_1__ map_tree; } ;


 int FUNC_0 (struct extent_map*) ;
 int FUNC_1 (int ) ;
 struct extent_map* FUNC_2 (TYPE_1__*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,struct extent_map*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

void FUNC_6(struct btrfs_mapping_tree *VAR_0)
{
 struct extent_map *VAR_1;

 while (1) {
  FUNC_4(&VAR_0->map_tree.lock);
  VAR_1 = FUNC_2(&VAR_0->map_tree, 0, (u64)-1);
  if (VAR_1)
   FUNC_3(&VAR_0->map_tree, VAR_1);
  FUNC_5(&VAR_0->map_tree.lock);
  if (!VAR_1)
   break;
  FUNC_1(VAR_1->bdev);

  FUNC_0(VAR_1);

  FUNC_0(VAR_1);
 }
}
