
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
 struct extent_buffer* FUNC_1 (int *,int ,int ) ;

struct extent_buffer *FUNC_2(struct btrfs_root *VAR_0,
       u64 VAR_1, u32 VAR_2)
{
 struct inode *VAR_3 = VAR_0->fs_info->btree_inode;
 struct extent_buffer *VAR_4;

 VAR_4 = FUNC_1(&FUNC_0(VAR_3)->io_tree,
     VAR_1, VAR_2);
 return VAR_4;
}
