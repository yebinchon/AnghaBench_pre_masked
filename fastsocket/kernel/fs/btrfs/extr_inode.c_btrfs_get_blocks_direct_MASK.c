
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {scalar_t__ i_blkbits; } ;
struct extent_map {scalar_t__ block_start; scalar_t__ len; scalar_t__ start; int flags; int bdev; } ;
struct buffer_head {scalar_t__ b_size; int b_bdev; scalar_t__ b_blocknr; } ;
struct btrfs_trans_handle {scalar_t__ block_start; scalar_t__ len; scalar_t__ start; int flags; int bdev; } ;
struct btrfs_root {scalar_t__ sectorsize; } ;
typedef scalar_t__ sector_t ;
struct TYPE_2__ {int flags; int io_tree; struct btrfs_root* root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 scalar_t__ VAR_10 ;
 int VAR_11 ;
 scalar_t__ FUNC_1 (struct extent_map*) ;
 int FUNC_2 (struct extent_map*) ;
 int FUNC_3 (struct inode*,scalar_t__,scalar_t__,scalar_t__,scalar_t__,int) ;
 int FUNC_4 (struct extent_map*,struct btrfs_root*) ;
 struct extent_map* FUNC_5 (struct inode*,int *,int ,scalar_t__,scalar_t__,int ) ;
 struct extent_map* FUNC_6 (struct btrfs_root*) ;
 struct extent_map* FUNC_7 (struct inode*,struct extent_map*,scalar_t__,scalar_t__) ;
 int FUNC_8 (struct extent_map*,struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_9 (int *,scalar_t__,scalar_t__,int,int,int ,int *,int ) ;
 int FUNC_10 (struct extent_map*) ;
 scalar_t__ FUNC_11 (struct inode*) ;
 int FUNC_12 (struct inode*,scalar_t__) ;
 scalar_t__ FUNC_13 (scalar_t__,scalar_t__) ;
 int FUNC_14 (struct buffer_head*) ;
 int FUNC_15 (struct buffer_head*) ;
 scalar_t__ FUNC_16 (int ,int *) ;
 int FUNC_17 (int *,scalar_t__,scalar_t__) ;

__attribute__((used)) static int FUNC_18(struct inode *VAR_12, sector_t VAR_13,
       struct buffer_head *VAR_14, int VAR_15)
{
 struct extent_map *VAR_16;
 struct btrfs_root *VAR_17 = FUNC_0(VAR_12)->root;
 u64 VAR_18 = VAR_13 << VAR_12->i_blkbits;
 u64 VAR_19 = VAR_14->b_size;
 struct btrfs_trans_handle *VAR_20;

 VAR_16 = FUNC_5(VAR_12, ((void*)0), 0, VAR_18, VAR_19, 0);
 if (FUNC_1(VAR_16))
  return FUNC_2(VAR_16);
 if (FUNC_16(VAR_6, &VAR_16->flags) ||
     VAR_16->block_start == VAR_10) {
  FUNC_10(VAR_16);
  return -VAR_3;
 }


 if (!VAR_15 && (VAR_16->block_start == VAR_9 ||
   FUNC_16(VAR_7, &VAR_16->flags))) {
  FUNC_10(VAR_16);

  FUNC_17(&FUNC_0(VAR_12)->io_tree, VAR_18,
         VAR_18 + VAR_17->sectorsize - 1);
  return 0;
 }
 if (!VAR_15) {
  VAR_19 = VAR_16->len - (VAR_18 - VAR_16->start);
  goto map;
 }

 if (FUNC_16(VAR_7, &VAR_16->flags) ||
     ((FUNC_0(VAR_12)->flags & VAR_0) &&
      VAR_16->block_start != VAR_9)) {
  int VAR_21;
  int VAR_22;
  u64 VAR_23;

  if (FUNC_16(VAR_7, &VAR_16->flags))
   VAR_21 = VAR_2;
  else
   VAR_21 = VAR_1;
  VAR_19 = FUNC_13(VAR_19, VAR_16->len - (VAR_18 - VAR_16->start));
  VAR_23 = VAR_16->block_start + (VAR_18 - VAR_16->start);






  VAR_20 = FUNC_6(VAR_17);
  if (FUNC_1(VAR_20))
   goto must_cow;

  if (FUNC_8(VAR_20, VAR_12, VAR_18, VAR_19) == 1) {
   VAR_22 = FUNC_3(VAR_12, VAR_18,
        VAR_23, VAR_19, VAR_19, VAR_21);
   FUNC_4(VAR_20, VAR_17);
   if (VAR_22) {
    FUNC_10(VAR_16);
    return VAR_22;
   }
   goto unlock;
  }
  FUNC_4(VAR_20, VAR_17);
 }
must_cow:




 VAR_19 = VAR_14->b_size;
 VAR_16 = FUNC_7(VAR_12, VAR_16, VAR_18, VAR_19);
 if (FUNC_1(VAR_16))
  return FUNC_2(VAR_16);
 VAR_19 = FUNC_13(VAR_19, VAR_16->len - (VAR_18 - VAR_16->start));
unlock:
 FUNC_9(&FUNC_0(VAR_12)->io_tree, VAR_18, VAR_18 + VAR_19 - 1,
     VAR_8 | VAR_4 | VAR_5, 1,
     0, ((void*)0), VAR_11);
map:
 VAR_14->b_blocknr = (VAR_16->block_start + (VAR_18 - VAR_16->start)) >>
  VAR_12->i_blkbits;
 VAR_14->b_size = VAR_19;
 VAR_14->b_bdev = VAR_16->bdev;
 FUNC_14(VAR_14);
 if (VAR_15) {
  if (!FUNC_16(VAR_7, &VAR_16->flags))
   FUNC_15(VAR_14);





  if (VAR_18 + VAR_19 > FUNC_11(VAR_12))
   FUNC_12(VAR_12, VAR_18 + VAR_19);
 }

 FUNC_10(VAR_16);

 return 0;
}
