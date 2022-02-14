
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct map_lookup {int type; int num_stripes; int sub_stripes; } ;
struct extent_map_tree {int lock; } ;
struct extent_map {scalar_t__ start; scalar_t__ len; scalar_t__ bdev; } ;
struct btrfs_mapping_tree {struct extent_map_tree map_tree; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 int FUNC_1 (struct extent_map*) ;
 struct extent_map* FUNC_2 (struct extent_map_tree*,scalar_t__,scalar_t__) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;

int FUNC_5(struct btrfs_mapping_tree *VAR_3, u64 VAR_4, u64 VAR_5)
{
 struct extent_map *VAR_6;
 struct map_lookup *VAR_7;
 struct extent_map_tree *VAR_8 = &VAR_3->map_tree;
 int VAR_9;

 FUNC_3(&VAR_8->lock);
 VAR_6 = FUNC_2(VAR_8, VAR_4, VAR_5);
 FUNC_4(&VAR_8->lock);
 FUNC_0(!VAR_6);

 FUNC_0(VAR_6->start > VAR_4 || VAR_6->start + VAR_6->len < VAR_4);
 VAR_7 = (struct map_lookup *)VAR_6->bdev;
 if (VAR_7->type & (VAR_0 | VAR_1))
  VAR_9 = VAR_7->num_stripes;
 else if (VAR_7->type & VAR_2)
  VAR_9 = VAR_7->sub_stripes;
 else
  VAR_9 = 1;
 FUNC_1(VAR_6);
 return VAR_9;
}
