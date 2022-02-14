
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
typedef int u32 ;
struct inode {int dummy; } ;
struct extent_buffer {int dummy; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct TYPE_4__ {int io_tree; } ;
struct TYPE_3__ {struct inode* btree_inode; } ;


 TYPE_2__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 struct extent_buffer* FUNC_1 (struct btrfs_root*,int ,int ) ;
 int FUNC_2 (struct extent_buffer*) ;
 int FUNC_3 (int *,struct extent_buffer*,int ,int ,int ,int ) ;

int FUNC_4(struct btrfs_root *VAR_2, u64 VAR_3, u32 VAR_4,
    u64 VAR_5)
{
 struct extent_buffer *VAR_6 = ((void*)0);
 struct inode *VAR_7 = VAR_2->fs_info->btree_inode;
 int VAR_8 = 0;

 VAR_6 = FUNC_1(VAR_2, VAR_3, VAR_4);
 if (!VAR_6)
  return 0;
 FUNC_3(&FUNC_0(VAR_7)->io_tree,
     VAR_6, 0, VAR_0, VAR_1, 0);
 FUNC_2(VAR_6);
 return VAR_8;
}
