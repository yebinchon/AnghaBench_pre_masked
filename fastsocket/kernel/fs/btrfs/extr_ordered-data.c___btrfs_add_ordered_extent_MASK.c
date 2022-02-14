
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u64 ;
struct rb_node {int dummy; } ;
struct inode {int dummy; } ;
struct btrfs_ordered_inode_tree {int lock; int tree; } ;
struct btrfs_ordered_extent {int compress_type; int root_extent_list; int rb_node; int list; int wait; int refs; int flags; int inode; void* bytes_left; void* disk_len; void* len; void* start; void* file_offset; } ;
struct TYPE_6__ {TYPE_2__* root; struct btrfs_ordered_inode_tree ordered_tree; } ;
struct TYPE_5__ {TYPE_1__* fs_info; } ;
struct TYPE_4__ {int ordered_extent_lock; int ordered_extents; } ;


 TYPE_3__* FUNC_0 (struct inode*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int) ;
 int FUNC_3 (struct inode*) ;
 int FUNC_4 (int *) ;
 struct btrfs_ordered_extent* FUNC_5 (int,int ) ;
 int FUNC_6 (int *,int *) ;
 int FUNC_7 (struct inode*,int ,void*) ;
 int FUNC_8 (int,int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (int *) ;
 int FUNC_11 (int *) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (struct inode*,struct btrfs_ordered_extent*) ;
 struct rb_node* FUNC_14 (int *,void*,int *) ;

__attribute__((used)) static int FUNC_15(struct inode *VAR_6, u64 VAR_7,
          u64 VAR_8, u64 VAR_9, u64 VAR_10,
          int VAR_11, int VAR_12, int VAR_13)
{
 struct btrfs_ordered_inode_tree *VAR_14;
 struct rb_node *VAR_15;
 struct btrfs_ordered_extent *VAR_16;

 VAR_14 = &FUNC_0(VAR_6)->ordered_tree;
 VAR_16 = FUNC_5(sizeof(*VAR_16), VAR_5);
 if (!VAR_16)
  return -VAR_4;

 VAR_16->file_offset = VAR_7;
 VAR_16->start = VAR_8;
 VAR_16->len = VAR_9;
 VAR_16->disk_len = VAR_10;
 VAR_16->bytes_left = VAR_9;
 VAR_16->inode = FUNC_3(VAR_6);
 VAR_16->compress_type = VAR_13;
 if (VAR_11 != VAR_2 && VAR_11 != VAR_0)
  FUNC_8(VAR_11, &VAR_16->flags);

 if (VAR_12)
  FUNC_8(VAR_1, &VAR_16->flags);


 FUNC_2(&VAR_16->refs, 1);
 FUNC_4(&VAR_16->wait);
 FUNC_1(&VAR_16->list);
 FUNC_1(&VAR_16->root_extent_list);

 FUNC_13(VAR_6, VAR_16);

 FUNC_10(&VAR_14->lock);
 VAR_15 = FUNC_14(&VAR_14->tree, VAR_7,
      &VAR_16->rb_node);
 if (VAR_15)
  FUNC_7(VAR_6, -VAR_3, VAR_7);
 FUNC_12(&VAR_14->lock);

 FUNC_9(&FUNC_0(VAR_6)->root->fs_info->ordered_extent_lock);
 FUNC_6(&VAR_16->root_extent_list,
        &FUNC_0(VAR_6)->root->fs_info->ordered_extents);
 FUNC_11(&FUNC_0(VAR_6)->root->fs_info->ordered_extent_lock);

 return 0;
}
