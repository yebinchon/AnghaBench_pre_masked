
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef void* u64 ;
typedef void* u32 ;
struct TYPE_5__ {int s_umount; int s_instances; int s_list; scalar_t__ s_dev; int * s_root; } ;
struct TYPE_6__ {void* objectid; } ;
struct btrfs_root {TYPE_2__ anon_super; TYPE_3__ root_key; scalar_t__ defrag_running; int kobj_unregister; int defrag_trans_start; TYPE_3__ root_kobj; TYPE_3__ defrag_progress; TYPE_3__ root_item; int dirty_log_pages; scalar_t__ last_log_commit; scalar_t__ log_transid; scalar_t__ log_batch; int orphan_inodes; int log_writers; int * log_commit; int * log_commit_wait; int log_writer_wait; int log_mutex; int objectid_mutex; int accounting_lock; int inode_lock; int orphan_lock; int root_list; int dirty_list; int * orphan_block_rsv; int * block_rsv; int delayed_nodes_tree; int inode_tree; int * name; scalar_t__ highest_objectid; scalar_t__ last_trans; void* objectid; scalar_t__ orphan_cleanup_state; scalar_t__ orphan_item_inserted; scalar_t__ in_radix; scalar_t__ track_dirty; scalar_t__ ref_cows; void* stripesize; void* leafsize; void* nodesize; void* sectorsize; int * commit_root; int * node; } ;
struct btrfs_fs_info {int generation; TYPE_1__* btree_inode; } ;
struct TYPE_4__ {int i_mapping; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (TYPE_3__*,int ,int) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;

__attribute__((used)) static void FUNC_10(u32 VAR_2, u32 VAR_3, u32 VAR_4,
    u32 VAR_5, struct btrfs_root *VAR_6,
    struct btrfs_fs_info *VAR_7,
    u64 VAR_8)
{
 VAR_6->node = ((void*)0);
 VAR_6->commit_root = ((void*)0);
 VAR_6->sectorsize = VAR_4;
 VAR_6->nodesize = VAR_2;
 VAR_6->leafsize = VAR_3;
 VAR_6->stripesize = VAR_5;
 VAR_6->ref_cows = 0;
 VAR_6->track_dirty = 0;
 VAR_6->in_radix = 0;
 VAR_6->orphan_item_inserted = 0;
 VAR_6->orphan_cleanup_state = 0;

 VAR_6->objectid = VAR_8;
 VAR_6->last_trans = 0;
 VAR_6->highest_objectid = 0;
 VAR_6->name = ((void*)0);
 VAR_6->inode_tree = VAR_1;
 FUNC_1(&VAR_6->delayed_nodes_tree, VAR_0);
 VAR_6->block_rsv = ((void*)0);
 VAR_6->orphan_block_rsv = ((void*)0);

 FUNC_0(&VAR_6->dirty_list);
 FUNC_0(&VAR_6->root_list);
 FUNC_9(&VAR_6->orphan_lock);
 FUNC_9(&VAR_6->inode_lock);
 FUNC_9(&VAR_6->accounting_lock);
 FUNC_8(&VAR_6->objectid_mutex);
 FUNC_8(&VAR_6->log_mutex);
 FUNC_6(&VAR_6->log_writer_wait);
 FUNC_6(&VAR_6->log_commit_wait[0]);
 FUNC_6(&VAR_6->log_commit_wait[1]);
 FUNC_2(&VAR_6->log_commit[0], 0);
 FUNC_2(&VAR_6->log_commit[1], 0);
 FUNC_2(&VAR_6->log_writers, 0);
 FUNC_2(&VAR_6->orphan_inodes, 0);
 VAR_6->log_batch = 0;
 VAR_6->log_transid = 0;
 VAR_6->last_log_commit = 0;
 FUNC_3(&VAR_6->dirty_log_pages,
        VAR_7->btree_inode->i_mapping);

 FUNC_7(&VAR_6->root_key, 0, sizeof(VAR_6->root_key));
 FUNC_7(&VAR_6->root_item, 0, sizeof(VAR_6->root_item));
 FUNC_7(&VAR_6->defrag_progress, 0, sizeof(VAR_6->defrag_progress));
 FUNC_7(&VAR_6->root_kobj, 0, sizeof(VAR_6->root_kobj));
 VAR_6->defrag_trans_start = VAR_7->generation;
 FUNC_4(&VAR_6->kobj_unregister);
 VAR_6->defrag_running = 0;
 VAR_6->root_key.objectid = VAR_8;
 VAR_6->anon_super.s_root = ((void*)0);
 VAR_6->anon_super.s_dev = 0;
 FUNC_0(&VAR_6->anon_super.s_list);
 FUNC_0(&VAR_6->anon_super.s_instances);
 FUNC_5(&VAR_6->anon_super.s_umount);
}
