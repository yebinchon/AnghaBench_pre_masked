
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
struct map_lookup {int num_stripes; TYPE_2__* stripes; int sub_stripes; int type; int stripe_len; int sector_size; int io_align; int io_width; } ;
struct extent_map {scalar_t__ start; scalar_t__ len; scalar_t__ block_len; scalar_t__ block_start; struct block_device* bdev; } ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct TYPE_9__ {int lock; } ;
struct btrfs_mapping_tree {TYPE_3__ map_tree; } ;
struct btrfs_key {scalar_t__ offset; } ;
struct btrfs_chunk {int dummy; } ;
struct block_device {int dummy; } ;
struct TYPE_10__ {int in_fs_metadata; } ;
struct TYPE_8__ {TYPE_4__* dev; int physical; } ;
struct TYPE_7__ {struct btrfs_mapping_tree mapping_tree; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (TYPE_3__*,struct extent_map*) ;
 TYPE_4__* FUNC_2 (struct btrfs_root*,scalar_t__,int *) ;
 struct extent_map* FUNC_3 () ;
 int FUNC_4 (struct extent_buffer*,struct btrfs_chunk*) ;
 int FUNC_5 (struct extent_buffer*,struct btrfs_chunk*) ;
 scalar_t__ FUNC_6 (struct extent_buffer*,struct btrfs_chunk*) ;
 int FUNC_7 (struct extent_buffer*,struct btrfs_chunk*) ;
 int FUNC_8 (struct extent_buffer*,struct btrfs_chunk*) ;
 int FUNC_9 (struct extent_buffer*,struct btrfs_chunk*) ;
 int FUNC_10 (struct extent_buffer*,struct btrfs_chunk*) ;
 int FUNC_11 (struct extent_buffer*,struct btrfs_chunk*) ;
 TYPE_4__* FUNC_12 (struct btrfs_root*,scalar_t__,int *,int *) ;
 scalar_t__ FUNC_13 (struct btrfs_chunk*,int) ;
 scalar_t__ FUNC_14 (struct extent_buffer*,struct btrfs_chunk*,int) ;
 int FUNC_15 (struct extent_buffer*,struct btrfs_chunk*,int) ;
 int FUNC_16 (struct btrfs_root*,int ) ;
 int FUNC_17 (struct extent_map*) ;
 int FUNC_18 (struct map_lookup*) ;
 struct map_lookup* FUNC_19 (int ,int ) ;
 struct extent_map* FUNC_20 (TYPE_3__*,scalar_t__,int) ;
 int FUNC_21 (int) ;
 int FUNC_22 (struct extent_buffer*,int *,unsigned long,int) ;
 int FUNC_23 (int *) ;
 int FUNC_24 (int *) ;
 int FUNC_25 (int *) ;
 int FUNC_26 (int *) ;

__attribute__((used)) static int FUNC_27(struct btrfs_root *VAR_5, struct btrfs_key *VAR_6,
     struct extent_buffer *VAR_7,
     struct btrfs_chunk *VAR_8)
{
 struct btrfs_mapping_tree *VAR_9 = &VAR_5->fs_info->mapping_tree;
 struct map_lookup *VAR_10;
 struct extent_map *VAR_11;
 u64 VAR_12;
 u64 VAR_13;
 u64 VAR_14;
 u8 VAR_15[VAR_0];
 int VAR_16;
 int VAR_17;
 int VAR_18;

 VAR_12 = VAR_6->offset;
 VAR_13 = FUNC_6(VAR_7, VAR_8);

 FUNC_23(&VAR_9->map_tree.lock);
 VAR_11 = FUNC_20(&VAR_9->map_tree, VAR_12, 1);
 FUNC_24(&VAR_9->map_tree.lock);


 if (VAR_11 && VAR_11->start <= VAR_12 && VAR_11->start + VAR_11->len > VAR_12) {
  FUNC_17(VAR_11);
  return 0;
 } else if (VAR_11) {
  FUNC_17(VAR_11);
 }

 VAR_11 = FUNC_3();
 if (!VAR_11)
  return -VAR_3;
 VAR_16 = FUNC_7(VAR_7, VAR_8);
 VAR_10 = FUNC_19(FUNC_21(VAR_16), VAR_4);
 if (!VAR_10) {
  FUNC_17(VAR_11);
  return -VAR_3;
 }

 VAR_11->bdev = (struct block_device *)VAR_10;
 VAR_11->start = VAR_12;
 VAR_11->len = VAR_13;
 VAR_11->block_start = 0;
 VAR_11->block_len = VAR_11->len;

 VAR_10->num_stripes = VAR_16;
 VAR_10->io_width = FUNC_5(VAR_7, VAR_8);
 VAR_10->io_align = FUNC_4(VAR_7, VAR_8);
 VAR_10->sector_size = FUNC_8(VAR_7, VAR_8);
 VAR_10->stripe_len = FUNC_9(VAR_7, VAR_8);
 VAR_10->type = FUNC_11(VAR_7, VAR_8);
 VAR_10->sub_stripes = FUNC_10(VAR_7, VAR_8);
 for (VAR_18 = 0; VAR_18 < VAR_16; VAR_18++) {
  VAR_10->stripes[VAR_18].physical =
   FUNC_15(VAR_7, VAR_8, VAR_18);
  VAR_14 = FUNC_14(VAR_7, VAR_8, VAR_18);
  FUNC_22(VAR_7, VAR_15, (unsigned long)
       FUNC_13(VAR_8, VAR_18),
       VAR_0);
  VAR_10->stripes[VAR_18].dev = FUNC_12(VAR_5, VAR_14, VAR_15,
       ((void*)0));
  if (!VAR_10->stripes[VAR_18].dev && !FUNC_16(VAR_5, VAR_1)) {
   FUNC_18(VAR_10);
   FUNC_17(VAR_11);
   return -VAR_2;
  }
  if (!VAR_10->stripes[VAR_18].dev) {
   VAR_10->stripes[VAR_18].dev =
    FUNC_2(VAR_5, VAR_14, VAR_15);
   if (!VAR_10->stripes[VAR_18].dev) {
    FUNC_18(VAR_10);
    FUNC_17(VAR_11);
    return -VAR_2;
   }
  }
  VAR_10->stripes[VAR_18].dev->in_fs_metadata = 1;
 }

 FUNC_25(&VAR_9->map_tree.lock);
 VAR_17 = FUNC_1(&VAR_9->map_tree, VAR_11);
 FUNC_26(&VAR_9->map_tree.lock);
 FUNC_0(VAR_17);
 FUNC_17(VAR_11);

 return 0;
}
