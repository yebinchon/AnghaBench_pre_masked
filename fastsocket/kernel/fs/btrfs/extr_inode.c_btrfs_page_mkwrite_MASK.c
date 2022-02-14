
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef unsigned long u64 ;
struct vm_fault {struct page* page; } ;
struct vm_area_struct {int vm_file; } ;
struct page {scalar_t__ mapping; } ;
struct inode {scalar_t__ i_mapping; int i_sb; } ;
struct extent_state {int dummy; } ;
struct extent_io_tree {int dummy; } ;
struct btrfs_root {int log_transid; TYPE_1__* fs_info; } ;
struct btrfs_ordered_extent {int dummy; } ;
typedef unsigned long loff_t ;
struct TYPE_6__ {struct btrfs_root* root; int last_sub_trans; int last_trans; struct extent_io_tree io_tree; } ;
struct TYPE_5__ {struct inode* d_inode; } ;
struct TYPE_4__ {int generation; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 int FUNC_1 (struct page*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 int FUNC_2 (struct page*) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (struct inode*,unsigned long) ;
 int FUNC_4 (struct inode*,unsigned long) ;
 struct btrfs_ordered_extent* FUNC_5 (struct inode*,unsigned long) ;
 int FUNC_6 (struct btrfs_ordered_extent*) ;
 int FUNC_7 (struct inode*,unsigned long,unsigned long,struct extent_state**) ;
 int FUNC_8 (struct inode*,struct btrfs_ordered_extent*,int) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (struct extent_io_tree*,unsigned long,unsigned long,int,int ,int ,struct extent_state**,int ) ;
 TYPE_2__* FUNC_11 (int ) ;
 int FUNC_12 (struct page*) ;
 unsigned long FUNC_13 (struct inode*) ;
 char* FUNC_14 (struct page*) ;
 int FUNC_15 (struct page*) ;
 int FUNC_16 (struct extent_io_tree*,unsigned long,unsigned long,int ,struct extent_state**) ;
 int FUNC_17 (struct page*) ;
 int FUNC_18 (char*,int ,unsigned long) ;
 unsigned long FUNC_19 (struct page*) ;
 int FUNC_20 (int ) ;
 int FUNC_21 (int ) ;
 int FUNC_22 (struct page*) ;
 int FUNC_23 (struct page*) ;
 int FUNC_24 (struct extent_io_tree*,unsigned long,unsigned long,struct extent_state**,int ) ;
 int FUNC_25 (struct page*) ;
 int FUNC_26 (struct page*) ;

int FUNC_27(struct vm_area_struct *VAR_11, struct vm_fault *VAR_12)
{
 struct page *VAR_13 = VAR_12->page;
 struct inode *VAR_14 = FUNC_11(VAR_11->vm_file)->d_inode;
 struct btrfs_root *VAR_15 = FUNC_0(VAR_14)->root;
 struct extent_io_tree *VAR_16 = &FUNC_0(VAR_14)->io_tree;
 struct btrfs_ordered_extent *VAR_17;
 struct extent_state *VAR_18 = ((void*)0);
 char *VAR_19;
 unsigned long VAR_20;
 loff_t VAR_21;
 int VAR_22;
 int VAR_23 = 0;
 u64 VAR_24;
 u64 VAR_25;

 FUNC_21(VAR_14->i_sb);
 VAR_22 = FUNC_4(VAR_14, VAR_6);
 if (!VAR_22) {
  VAR_22 = FUNC_9(VAR_11->vm_file);
  VAR_23 = 1;
 }
 if (VAR_22) {
  if (VAR_22 == -VAR_0)
   VAR_22 = VAR_9;
  else
   VAR_22 = VAR_10;
  if (VAR_23)
   goto out;
  goto out_noreserve;
 }

 VAR_22 = VAR_8;
again:
 FUNC_17(VAR_13);
 VAR_21 = FUNC_13(VAR_14);
 VAR_24 = FUNC_19(VAR_13);
 VAR_25 = VAR_24 + VAR_6 - 1;

 if ((VAR_13->mapping != VAR_14->i_mapping) ||
     (VAR_24 >= VAR_21)) {

  goto out_unlock;
 }
 FUNC_26(VAR_13);

 FUNC_16(VAR_16, VAR_24, VAR_25, 0, &VAR_18);
 FUNC_23(VAR_13);





 VAR_17 = FUNC_5(VAR_14, VAR_24);
 if (VAR_17) {
  FUNC_24(VAR_16, VAR_24, VAR_25,
         &VAR_18, VAR_4);
  FUNC_25(VAR_13);
  FUNC_8(VAR_14, VAR_17, 1);
  FUNC_6(VAR_17);
  goto again;
 }
 FUNC_10(&FUNC_0(VAR_14)->io_tree, VAR_24, VAR_25,
     VAR_2 | VAR_1 | VAR_3,
     0, 0, &VAR_18, VAR_4);

 VAR_22 = FUNC_7(VAR_14, VAR_24, VAR_25,
     &VAR_18);
 if (VAR_22) {
  FUNC_24(VAR_16, VAR_24, VAR_25,
         &VAR_18, VAR_4);
  VAR_22 = VAR_10;
  goto out_unlock;
 }
 VAR_22 = 0;


 if (VAR_24 + VAR_6 > VAR_21)
  VAR_20 = VAR_21 & ~VAR_5;
 else
  VAR_20 = VAR_6;

 if (VAR_20 != VAR_6) {
  VAR_19 = FUNC_14(VAR_13);
  FUNC_18(VAR_19 + VAR_20, 0, VAR_6 - VAR_20);
  FUNC_12(VAR_13);
  FUNC_15(VAR_13);
 }
 FUNC_1(VAR_13);
 FUNC_22(VAR_13);
 FUNC_2(VAR_13);

 FUNC_0(VAR_14)->last_trans = VAR_15->fs_info->generation;
 FUNC_0(VAR_14)->last_sub_trans = FUNC_0(VAR_14)->root->log_transid;

 FUNC_24(VAR_16, VAR_24, VAR_25, &VAR_18, VAR_4);

out_unlock:
 if (!VAR_22) {
  FUNC_20(VAR_14->i_sb);
  return VAR_7;
 }
 FUNC_25(VAR_13);
out:
 FUNC_3(VAR_14, VAR_6);
out_noreserve:
 FUNC_20(VAR_14->i_sb);
 return VAR_22;
}
