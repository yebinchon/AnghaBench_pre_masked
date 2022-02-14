
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct inode {int dummy; } ;
struct extent_state {int dummy; } ;
struct extent_map {int flags; } ;
struct extent_io_tree {int dummy; } ;
struct btrfs_trans_handle {int flags; } ;
struct btrfs_root {scalar_t__ sectorsize; } ;
struct btrfs_ordered_extent {int dummy; } ;
typedef scalar_t__ loff_t ;
struct TYPE_2__ {struct extent_io_tree io_tree; struct btrfs_root* root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_1 (struct extent_map*) ;
 int FUNC_2 (struct extent_map*) ;
 int FUNC_3 (struct extent_map*,struct btrfs_root*,int) ;
 int FUNC_4 (struct inode*,scalar_t__,int ,int ) ;
 int FUNC_5 (struct extent_map*,struct inode*,scalar_t__,scalar_t__,scalar_t__*,int) ;
 int FUNC_6 (struct extent_map*,struct btrfs_root*) ;
 struct extent_map* FUNC_7 (struct inode*,int *,int ,scalar_t__,int ,int ) ;
 int FUNC_8 (struct inode*) ;
 int FUNC_9 (struct extent_map*,struct btrfs_root*,int ,scalar_t__,int ,int ,scalar_t__,int ,scalar_t__,int ,int ,int ) ;
 struct btrfs_ordered_extent* FUNC_10 (struct inode*,scalar_t__) ;
 int FUNC_11 (struct btrfs_ordered_extent*) ;
 struct extent_map* FUNC_12 (struct btrfs_root*,int) ;
 int FUNC_13 (struct extent_map*,struct btrfs_root*,struct inode*) ;
 int FUNC_14 (struct inode*,scalar_t__,scalar_t__) ;
 int FUNC_15 (struct extent_map*) ;
 int FUNC_16 (struct extent_map*) ;
 int FUNC_17 (struct extent_io_tree*,scalar_t__,scalar_t__,int ,struct extent_state**) ;
 scalar_t__ FUNC_18 (int ,scalar_t__) ;
 int FUNC_19 (int ,int *) ;
 int FUNC_20 (struct extent_io_tree*,scalar_t__,scalar_t__,struct extent_state**,int ) ;

int FUNC_21(struct inode *VAR_2, loff_t VAR_3, loff_t VAR_4)
{
 struct btrfs_trans_handle *VAR_5;
 struct btrfs_root *VAR_6 = FUNC_0(VAR_2)->root;
 struct extent_io_tree *VAR_7 = &FUNC_0(VAR_2)->io_tree;
 struct extent_map *VAR_8 = ((void*)0);
 struct extent_state *VAR_9 = ((void*)0);
 u64 VAR_10 = VAR_6->sectorsize - 1;
 u64 VAR_11 = (VAR_3 + VAR_10) & ~VAR_10;
 u64 VAR_12 = (VAR_4 + VAR_10) & ~VAR_10;
 u64 VAR_13;
 u64 VAR_14;
 u64 VAR_15;
 int VAR_16 = 0;

 if (VAR_4 <= VAR_11)
  return 0;

 while (1) {
  struct btrfs_ordered_extent *VAR_17;
  FUNC_14(VAR_2, VAR_11,
      VAR_12 - VAR_11);
  FUNC_17(VAR_7, VAR_11, VAR_12 - 1, 0,
     &VAR_9);
  VAR_17 = FUNC_10(VAR_2, VAR_11);
  if (!VAR_17)
   break;
  FUNC_20(VAR_7, VAR_11, VAR_12 - 1,
         &VAR_9, VAR_1);
  FUNC_11(VAR_17);
 }

 VAR_14 = VAR_11;
 while (1) {
  VAR_8 = FUNC_7(VAR_2, ((void*)0), 0, VAR_14,
    VAR_12 - VAR_14, 0);
  if (FUNC_1(VAR_8)) {
   VAR_16 = FUNC_2(VAR_8);
   break;
  }
  VAR_13 = FUNC_18(FUNC_15(VAR_8), VAR_12);
  VAR_13 = (VAR_13 + VAR_10) & ~VAR_10;
  if (!FUNC_19(VAR_0, &VAR_8->flags)) {
   u64 VAR_18 = 0;
   VAR_15 = VAR_13 - VAR_14;

   VAR_5 = FUNC_12(VAR_6, 3);
   if (FUNC_1(VAR_5)) {
    VAR_16 = FUNC_2(VAR_5);
    break;
   }

   VAR_16 = FUNC_5(VAR_5, VAR_2, VAR_14,
       VAR_14 + VAR_15,
       &VAR_18, 1);
   if (VAR_16) {
    FUNC_3(VAR_5, VAR_6, VAR_16);
    FUNC_6(VAR_5, VAR_6);
    break;
   }

   VAR_16 = FUNC_9(VAR_5, VAR_6,
     FUNC_8(VAR_2), VAR_14, 0,
     0, VAR_15, 0, VAR_15,
     0, 0, 0);
   if (VAR_16) {
    FUNC_3(VAR_5, VAR_6, VAR_16);
    FUNC_6(VAR_5, VAR_6);
    break;
   }

   FUNC_4(VAR_2, VAR_11,
     VAR_13 - 1, 0);

   FUNC_13(VAR_5, VAR_6, VAR_2);
   FUNC_6(VAR_5, VAR_6);
  }
  FUNC_16(VAR_8);
  VAR_8 = ((void*)0);
  VAR_14 = VAR_13;
  if (VAR_14 >= VAR_12)
   break;
 }

 FUNC_16(VAR_8);
 FUNC_20(VAR_7, VAR_11, VAR_12 - 1, &VAR_9,
        VAR_1);
 return VAR_16;
}
