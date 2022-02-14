
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct inode {int dummy; } ;
struct extent_io_tree {int dummy; } ;
struct extent_buffer {int bflags; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct TYPE_4__ {struct extent_io_tree io_tree; } ;
struct TYPE_3__ {struct inode* btree_inode; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct extent_buffer* FUNC_1 (struct btrfs_root*,int ,int ) ;
 scalar_t__ FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (struct extent_buffer*) ;
 int FUNC_4 (struct extent_io_tree*,struct extent_buffer*,int ,int ,int ,int) ;
 int FUNC_5 (int ,int *) ;
 scalar_t__ FUNC_6 (int ,int *) ;

int FUNC_7(struct btrfs_root *VAR_5, u64 VAR_6, u32 VAR_7,
    int VAR_8, struct extent_buffer **VAR_9)
{
 struct extent_buffer *VAR_10 = ((void*)0);
 struct inode *VAR_11 = VAR_5->fs_info->btree_inode;
 struct extent_io_tree *VAR_12 = &FUNC_0(VAR_11)->io_tree;
 int VAR_13;

 VAR_10 = FUNC_1(VAR_5, VAR_6, VAR_7);
 if (!VAR_10)
  return 0;

 FUNC_5(VAR_2, &VAR_10->bflags);

 VAR_13 = FUNC_4(VAR_12, VAR_10, 0, VAR_3,
           VAR_4, VAR_8);
 if (VAR_13) {
  FUNC_3(VAR_10);
  return VAR_13;
 }

 if (FUNC_6(VAR_1, &VAR_10->bflags)) {
  FUNC_3(VAR_10);
  return -VAR_0;
 } else if (FUNC_2(VAR_10)) {
  *VAR_9 = VAR_10;
 } else {
  FUNC_3(VAR_10);
 }
 return 0;
}
