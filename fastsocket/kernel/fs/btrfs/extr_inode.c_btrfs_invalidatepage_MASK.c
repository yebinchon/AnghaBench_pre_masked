
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct page {TYPE_1__* mapping; } ;
struct inode {int dummy; } ;
struct extent_state {int dummy; } ;
struct extent_io_tree {int dummy; } ;
struct btrfs_ordered_extent {int dummy; } ;
struct TYPE_4__ {struct extent_io_tree io_tree; } ;
struct TYPE_3__ {struct inode* host; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct page*) ;
 int FUNC_2 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ FUNC_3 (struct page*) ;
 scalar_t__ FUNC_4 (struct page*) ;
 int FUNC_5 (struct page*,int ) ;
 scalar_t__ FUNC_6 (struct inode*,struct btrfs_ordered_extent**,scalar_t__,scalar_t__,int) ;
 int FUNC_7 (struct btrfs_ordered_extent*) ;
 struct btrfs_ordered_extent* FUNC_8 (struct inode*,scalar_t__) ;
 int FUNC_9 (struct btrfs_ordered_extent*) ;
 int FUNC_10 (struct page*,int ) ;
 int FUNC_11 (struct extent_io_tree*,scalar_t__,scalar_t__,int,int,int,struct extent_state**,int ) ;
 int FUNC_12 (struct extent_io_tree*,scalar_t__,scalar_t__,int ,struct extent_state**) ;
 int FUNC_13 (struct page*) ;
 scalar_t__ FUNC_14 (struct page*) ;
 int FUNC_15 (struct page*,int ) ;
 int FUNC_16 (struct page*) ;

__attribute__((used)) static void FUNC_17(struct page *VAR_6, unsigned long VAR_7)
{
 struct inode *VAR_8 = VAR_6->mapping->host;
 struct extent_io_tree *VAR_9;
 struct btrfs_ordered_extent *VAR_10;
 struct extent_state *VAR_11 = ((void*)0);
 u64 VAR_12 = FUNC_14(VAR_6);
 u64 VAR_13 = VAR_12 + VAR_5 - 1;
 FUNC_16(VAR_6);

 VAR_9 = &FUNC_0(VAR_8)->io_tree;
 if (VAR_7) {
  FUNC_10(VAR_6, VAR_4);
  return;
 }
 FUNC_12(VAR_9, VAR_12, VAR_13, 0, &VAR_11);
 VAR_10 = FUNC_8(VAR_8,
        FUNC_14(VAR_6));
 if (VAR_10) {




  FUNC_11(VAR_9, VAR_12, VAR_13,
     VAR_1 | VAR_0 |
     VAR_3 | VAR_2, 1, 0,
     &VAR_11, VAR_4);




  if (FUNC_4(VAR_6) &&
      FUNC_6(VAR_8, &VAR_10, VAR_12,
         VAR_5, 1)) {
   FUNC_7(VAR_10);
  }
  FUNC_9(VAR_10);
  VAR_11 = ((void*)0);
  FUNC_12(VAR_9, VAR_12, VAR_13, 0, &VAR_11);
 }
 FUNC_11(VAR_9, VAR_12, VAR_13,
   VAR_3 | VAR_1 | VAR_0 |
   VAR_2, 1, 1, &VAR_11, VAR_4);
 FUNC_5(VAR_6, VAR_4);

 FUNC_1(VAR_6);
 if (FUNC_3(VAR_6)) {
  FUNC_2(VAR_6);
  FUNC_15(VAR_6, 0);
  FUNC_13(VAR_6);
 }
}
