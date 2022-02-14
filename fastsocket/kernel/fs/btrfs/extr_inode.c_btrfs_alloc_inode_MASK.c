
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct super_block {int dummy; } ;
struct inode {int i_data; } ;
struct TYPE_2__ {int track_uptodate; } ;
struct btrfs_inode {int rb_node; int ordered_operations; int delalloc_inodes; int ordered_tree; int delalloc_mutex; int log_mutex; TYPE_1__ io_failure_tree; TYPE_1__ io_tree; int extent_tree; struct inode vfs_inode; int * delayed_node; int force_compress; scalar_t__ runtime_flags; scalar_t__ reserved_extents; scalar_t__ outstanding_extents; int lock; scalar_t__ last_unlink_trans; scalar_t__ index_cnt; scalar_t__ csum_bytes; scalar_t__ flags; scalar_t__ disk_i_size; scalar_t__ delalloc_bytes; scalar_t__ logged_trans; scalar_t__ last_sub_trans; scalar_t__ last_trans; scalar_t__ generation; int * space_info; int * root; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;
 int FUNC_4 (int *) ;
 struct btrfs_inode* FUNC_5 (int ,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

struct inode *FUNC_8(struct super_block *VAR_3)
{
 struct btrfs_inode *VAR_4;
 struct inode *VAR_5;

 VAR_4 = FUNC_5(VAR_2, VAR_1);
 if (!VAR_4)
  return ((void*)0);

 VAR_4->root = ((void*)0);
 VAR_4->space_info = ((void*)0);
 VAR_4->generation = 0;
 VAR_4->last_trans = 0;
 VAR_4->last_sub_trans = 0;
 VAR_4->logged_trans = 0;
 VAR_4->delalloc_bytes = 0;
 VAR_4->disk_i_size = 0;
 VAR_4->flags = 0;
 VAR_4->csum_bytes = 0;
 VAR_4->index_cnt = (u64)-1;
 VAR_4->last_unlink_trans = 0;

 FUNC_7(&VAR_4->lock);
 VAR_4->outstanding_extents = 0;
 VAR_4->reserved_extents = 0;

 VAR_4->runtime_flags = 0;
 VAR_4->force_compress = VAR_0;

 VAR_4->delayed_node = ((void*)0);

 VAR_5 = &VAR_4->vfs_inode;
 FUNC_4(&VAR_4->extent_tree);
 FUNC_3(&VAR_4->io_tree, &VAR_5->i_data);
 FUNC_3(&VAR_4->io_failure_tree, &VAR_5->i_data);
 VAR_4->io_tree.track_uptodate = 1;
 VAR_4->io_failure_tree.track_uptodate = 1;
 FUNC_6(&VAR_4->log_mutex);
 FUNC_6(&VAR_4->delalloc_mutex);
 FUNC_2(&VAR_4->ordered_tree);
 FUNC_0(&VAR_4->delalloc_inodes);
 FUNC_0(&VAR_4->ordered_operations);
 FUNC_1(&VAR_4->rb_node);

 return VAR_5;
}
