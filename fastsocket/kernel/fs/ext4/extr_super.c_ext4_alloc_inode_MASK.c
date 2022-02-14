
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct super_block {int dummy; } ;
struct TYPE_2__ {scalar_t__ writeback_index; } ;
struct inode {int i_version; TYPE_1__ i_data; } ;
struct ext4_inode_info {struct inode vfs_inode; int i_aiodio_unwritten; scalar_t__ i_datasync_tid; scalar_t__ i_sync_tid; int * cur_aio_dio; int i_completed_io_lock; int i_aio_dio_complete_list; scalar_t__ i_reserved_quota; int i_block_reservation_lock; scalar_t__ i_delalloc_reserved_flag; scalar_t__ i_da_metadata_calc_len; scalar_t__ i_allocated_meta_blocks; scalar_t__ i_reserved_meta_blocks; scalar_t__ i_reserved_data_blocks; int jinode; int i_prealloc_lock; int i_prealloc_list; int i_cached_extent; } ;
struct ext4_ext_cache {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int ) ;
 int VAR_1 ;
 int FUNC_2 (int *,struct inode*) ;
 struct ext4_inode_info* FUNC_3 (int ,int ) ;
 int FUNC_4 (int *,int ,int) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static struct inode *FUNC_6(struct super_block *VAR_2)
{
 struct ext4_inode_info *VAR_3;

 VAR_3 = FUNC_3(VAR_1, VAR_0);
 if (!VAR_3)
  return ((void*)0);

 VAR_3->vfs_inode.i_version = 1;
 VAR_3->vfs_inode.i_data.writeback_index = 0;
 FUNC_4(&VAR_3->i_cached_extent, 0, sizeof(struct ext4_ext_cache));
 FUNC_0(&VAR_3->i_prealloc_list);
 FUNC_5(&VAR_3->i_prealloc_lock);





 FUNC_2(&VAR_3->jinode, &VAR_3->vfs_inode);
 VAR_3->i_reserved_data_blocks = 0;
 VAR_3->i_reserved_meta_blocks = 0;
 VAR_3->i_allocated_meta_blocks = 0;
 VAR_3->i_da_metadata_calc_len = 0;
 VAR_3->i_delalloc_reserved_flag = 0;
 FUNC_5(&(VAR_3->i_block_reservation_lock));



 FUNC_0(&VAR_3->i_aio_dio_complete_list);
 FUNC_5(&VAR_3->i_completed_io_lock);
 VAR_3->cur_aio_dio = ((void*)0);
 VAR_3->i_sync_tid = 0;
 VAR_3->i_datasync_tid = 0;
 FUNC_1(&VAR_3->i_aiodio_unwritten, 0);

 return &VAR_3->vfs_inode;
}
