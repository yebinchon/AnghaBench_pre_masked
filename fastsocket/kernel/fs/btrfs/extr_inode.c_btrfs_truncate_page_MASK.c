
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
typedef int u32 ;
struct page {struct address_space* mapping; } ;
struct inode {int dummy; } ;
struct extent_state {int dummy; } ;
struct extent_io_tree {int dummy; } ;
struct btrfs_root {int sectorsize; } ;
struct btrfs_ordered_extent {int dummy; } ;
struct address_space {struct inode* host; } ;
typedef int pgoff_t ;
typedef int loff_t ;
typedef int gfp_t ;
struct TYPE_2__ {struct extent_io_tree io_tree; struct btrfs_root* root; } ;


 TYPE_1__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct page*) ;
 int FUNC_3 (struct address_space*) ;
 int FUNC_4 (struct inode*,int) ;
 int FUNC_5 (struct inode*,int) ;
 struct btrfs_ordered_extent* FUNC_6 (struct inode*,scalar_t__) ;
 int FUNC_7 (struct btrfs_ordered_extent*) ;
 int FUNC_8 (int *,struct page*) ;
 int FUNC_9 (struct inode*,scalar_t__,scalar_t__,struct extent_state**) ;
 int FUNC_10 (struct inode*,struct btrfs_ordered_extent*,int) ;
 int FUNC_11 (struct extent_io_tree*,scalar_t__,scalar_t__,int,int ,int ,struct extent_state**,int ) ;
 struct page* FUNC_12 (struct address_space*,int,int ) ;
 int FUNC_13 (struct page*) ;
 char* FUNC_14 (struct page*) ;
 int FUNC_15 (struct page*) ;
 int FUNC_16 (struct extent_io_tree*,scalar_t__,scalar_t__,int ,struct extent_state**) ;
 int FUNC_17 (struct page*) ;
 int FUNC_18 (char*,int ,int) ;
 int FUNC_19 (struct page*) ;
 scalar_t__ FUNC_20 (struct page*) ;
 int FUNC_21 (struct page*) ;
 int FUNC_22 (struct page*) ;
 int FUNC_23 (struct extent_io_tree*,scalar_t__,scalar_t__,struct extent_state**,int ) ;
 int FUNC_24 (struct page*) ;
 int FUNC_25 (struct page*) ;

__attribute__((used)) static int FUNC_26(struct address_space *VAR_8, loff_t VAR_9)
{
 struct inode *VAR_10 = VAR_8->host;
 struct btrfs_root *VAR_11 = FUNC_0(VAR_10)->root;
 struct extent_io_tree *VAR_12 = &FUNC_0(VAR_10)->io_tree;
 struct btrfs_ordered_extent *VAR_13;
 struct extent_state *VAR_14 = ((void*)0);
 char *VAR_15;
 u32 VAR_16 = VAR_11->sectorsize;
 pgoff_t VAR_17 = VAR_9 >> VAR_6;
 unsigned VAR_18 = VAR_9 & (VAR_7-1);
 struct page *VAR_19;
 gfp_t VAR_20 = FUNC_3(VAR_8);
 int VAR_21 = 0;
 u64 VAR_22;
 u64 VAR_23;

 if ((VAR_18 & (VAR_16 - 1)) == 0)
  goto out;
 VAR_21 = FUNC_5(VAR_10, VAR_7);
 if (VAR_21)
  goto out;

 VAR_21 = -VAR_1;
again:
 VAR_19 = FUNC_12(VAR_8, VAR_17, VAR_20);
 if (!VAR_19) {
  FUNC_4(VAR_10, VAR_7);
  goto out;
 }

 VAR_22 = FUNC_20(VAR_19);
 VAR_23 = VAR_22 + VAR_7 - 1;

 if (!FUNC_2(VAR_19)) {
  VAR_21 = FUNC_8(((void*)0), VAR_19);
  FUNC_17(VAR_19);
  if (VAR_19->mapping != VAR_8) {
   FUNC_24(VAR_19);
   FUNC_19(VAR_19);
   goto again;
  }
  if (!FUNC_2(VAR_19)) {
   VAR_21 = -VAR_0;
   goto out_unlock;
  }
 }
 FUNC_25(VAR_19);

 FUNC_16(VAR_12, VAR_22, VAR_23, 0, &VAR_14);
 FUNC_22(VAR_19);

 VAR_13 = FUNC_6(VAR_10, VAR_22);
 if (VAR_13) {
  FUNC_23(VAR_12, VAR_22, VAR_23,
         &VAR_14, VAR_5);
  FUNC_24(VAR_19);
  FUNC_19(VAR_19);
  FUNC_10(VAR_10, VAR_13, 1);
  FUNC_7(VAR_13);
  goto again;
 }

 FUNC_11(&FUNC_0(VAR_10)->io_tree, VAR_22, VAR_23,
     VAR_3 | VAR_2 | VAR_4,
     0, 0, &VAR_14, VAR_5);

 VAR_21 = FUNC_9(VAR_10, VAR_22, VAR_23,
     &VAR_14);
 if (VAR_21) {
  FUNC_23(VAR_12, VAR_22, VAR_23,
         &VAR_14, VAR_5);
  goto out_unlock;
 }

 VAR_21 = 0;
 if (VAR_18 != VAR_7) {
  VAR_15 = FUNC_14(VAR_19);
  FUNC_18(VAR_15 + VAR_18, 0, VAR_7 - VAR_18);
  FUNC_13(VAR_19);
  FUNC_15(VAR_19);
 }
 FUNC_1(VAR_19);
 FUNC_21(VAR_19);
 FUNC_23(VAR_12, VAR_22, VAR_23, &VAR_14,
        VAR_5);

out_unlock:
 if (VAR_21)
  FUNC_4(VAR_10, VAR_7);
 FUNC_24(VAR_19);
 FUNC_19(VAR_19);
out:
 return VAR_21;
}
