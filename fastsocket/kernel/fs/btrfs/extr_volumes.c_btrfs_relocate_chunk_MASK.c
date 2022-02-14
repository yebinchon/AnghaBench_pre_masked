
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct map_lookup {int num_stripes; int type; TYPE_3__* stripes; } ;
struct extent_map_tree {int lock; } ;
struct extent_map {scalar_t__ start; scalar_t__ len; int * bdev; } ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_root {TYPE_2__* fs_info; } ;
struct TYPE_6__ {scalar_t__ dev; int physical; } ;
struct TYPE_4__ {struct extent_map_tree map_tree; } ;
struct TYPE_5__ {TYPE_1__ mapping_tree; struct btrfs_root* extent_root; struct btrfs_root* chunk_root; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (struct btrfs_trans_handle*) ;
 int FUNC_2 (struct btrfs_root*,scalar_t__) ;
 int FUNC_3 (struct btrfs_root*,scalar_t__,scalar_t__) ;
 int FUNC_4 (struct btrfs_trans_handle*,struct btrfs_root*) ;
 int FUNC_5 (struct btrfs_trans_handle*,struct btrfs_root*,scalar_t__,scalar_t__,scalar_t__) ;
 int FUNC_6 (struct btrfs_trans_handle*,scalar_t__,int ) ;
 int FUNC_7 (struct btrfs_root*,scalar_t__) ;
 int FUNC_8 (struct btrfs_trans_handle*,struct btrfs_root*,scalar_t__) ;
 struct btrfs_trans_handle* FUNC_9 (struct btrfs_root*,int ) ;
 int FUNC_10 (struct btrfs_trans_handle*,scalar_t__) ;
 int FUNC_11 (struct extent_map*) ;
 int FUNC_12 (struct map_lookup*) ;
 int FUNC_13 (struct btrfs_root*) ;
 struct extent_map* FUNC_14 (struct extent_map_tree*,scalar_t__,int) ;
 int FUNC_15 (int *) ;
 int FUNC_16 (int *) ;
 int FUNC_17 (struct extent_map_tree*,struct extent_map*) ;
 int FUNC_18 (struct btrfs_root*,struct map_lookup*,scalar_t__,scalar_t__) ;
 int FUNC_19 (struct btrfs_root*) ;
 int FUNC_20 (int *) ;
 int FUNC_21 (int *) ;

__attribute__((used)) static int FUNC_22(struct btrfs_root *VAR_2,
    u64 VAR_3, u64 VAR_4,
    u64 VAR_5)
{
 struct extent_map_tree *VAR_6;
 struct btrfs_root *VAR_7;
 struct btrfs_trans_handle *VAR_8;
 struct extent_map *VAR_9;
 struct map_lookup *VAR_10;
 int VAR_11;
 int VAR_12;

 VAR_2 = VAR_2->fs_info->chunk_root;
 VAR_7 = VAR_2->fs_info->extent_root;
 VAR_6 = &VAR_2->fs_info->mapping_tree.map_tree;

 VAR_11 = FUNC_2(VAR_7, VAR_5);
 if (VAR_11)
  return -VAR_1;


 VAR_11 = FUNC_7(VAR_7, VAR_5);
 if (VAR_11)
  return VAR_11;

 VAR_8 = FUNC_9(VAR_2, 0);
 FUNC_0(FUNC_1(VAR_8));

 FUNC_13(VAR_2);





 FUNC_15(&VAR_6->lock);
 VAR_9 = FUNC_14(VAR_6, VAR_5, 1);
 FUNC_16(&VAR_6->lock);

 FUNC_0(!VAR_9 || VAR_9->start > VAR_5 ||
        VAR_9->start + VAR_9->len < VAR_5);
 VAR_10 = (struct map_lookup *)VAR_9->bdev;

 for (VAR_12 = 0; VAR_12 < VAR_10->num_stripes; VAR_12++) {
  VAR_11 = FUNC_6(VAR_8, VAR_10->stripes[VAR_12].dev,
         VAR_10->stripes[VAR_12].physical);
  FUNC_0(VAR_11);

  if (VAR_10->stripes[VAR_12].dev) {
   VAR_11 = FUNC_10(VAR_8, VAR_10->stripes[VAR_12].dev);
   FUNC_0(VAR_11);
  }
 }
 VAR_11 = FUNC_5(VAR_8, VAR_2, VAR_3, VAR_4,
          VAR_5);

 FUNC_0(VAR_11);

 FUNC_18(VAR_2, VAR_10, VAR_5, VAR_9->len);

 if (VAR_10->type & VAR_0) {
  VAR_11 = FUNC_3(VAR_2, VAR_4, VAR_5);
  FUNC_0(VAR_11);
 }

 VAR_11 = FUNC_8(VAR_8, VAR_7, VAR_5);
 FUNC_0(VAR_11);

 FUNC_20(&VAR_6->lock);
 FUNC_17(VAR_6, VAR_9);
 FUNC_21(&VAR_6->lock);

 FUNC_12(VAR_10);
 VAR_9->bdev = ((void*)0);


 FUNC_11(VAR_9);

 FUNC_11(VAR_9);

 FUNC_19(VAR_2);
 FUNC_4(VAR_8, VAR_2);
 return 0;
}
