
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* u64 ;
struct super_block {unsigned int s_flags; } ;
struct btrfs_root {int dummy; } ;
struct btrfs_fs_info {unsigned long mount_opt; unsigned long compress_type; int thread_pool_size; unsigned int metadata_ratio; void* alloc_start; void* max_inline; int super_copy; TYPE_1__* fs_devices; struct btrfs_root* tree_root; } ;
struct TYPE_2__ {scalar_t__ rw_devices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct btrfs_fs_info*) ;
 int FUNC_1 (struct btrfs_root*) ;
 int FUNC_2 (struct btrfs_root*,char*) ;
 int FUNC_3 (struct btrfs_root*) ;
 int FUNC_4 (struct btrfs_fs_info*,int,int) ;
 int FUNC_5 (struct btrfs_fs_info*) ;
 struct btrfs_fs_info* FUNC_6 (struct super_block*) ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int FUNC_8(struct super_block *VAR_3, int *VAR_4, char *VAR_5)
{
 struct btrfs_fs_info *VAR_6 = FUNC_6(VAR_3);
 struct btrfs_root *VAR_7 = VAR_6->tree_root;
 unsigned VAR_8 = VAR_3->s_flags;
 unsigned long VAR_9 = VAR_6->mount_opt;
 unsigned long VAR_10 = VAR_6->compress_type;
 u64 VAR_11 = VAR_6->max_inline;
 u64 VAR_12 = VAR_6->alloc_start;
 int VAR_13 = VAR_6->thread_pool_size;
 unsigned int VAR_14 = VAR_6->metadata_ratio;
 int VAR_15;

 VAR_15 = FUNC_2(VAR_7, VAR_5);
 if (VAR_15) {
  VAR_15 = -VAR_1;
  goto restore;
 }

 FUNC_4(VAR_6,
  VAR_6->thread_pool_size, VAR_13);

 if ((*VAR_4 & VAR_2) == (VAR_3->s_flags & VAR_2))
  return 0;

 if (*VAR_4 & VAR_2) {
  VAR_3->s_flags |= VAR_2;

  VAR_15 = FUNC_1(VAR_7);
  if (VAR_15)
   goto restore;
 } else {
  if (VAR_6->fs_devices->rw_devices == 0) {
   VAR_15 = -VAR_0;
   goto restore;
  }

  if (FUNC_7(VAR_6->super_copy) != 0) {
   VAR_15 = -VAR_1;
   goto restore;
  }

  VAR_15 = FUNC_0(VAR_6);
  if (VAR_15)
   goto restore;


  VAR_15 = FUNC_3(VAR_7);
  if (VAR_15)
   goto restore;

  VAR_15 = FUNC_5(VAR_6);
  if (VAR_15)
   goto restore;

  VAR_3->s_flags &= ~VAR_2;
 }

 return 0;

restore:

 if (VAR_3->s_flags & VAR_2)
  VAR_8 |= VAR_2;
 VAR_3->s_flags = VAR_8;
 VAR_6->mount_opt = VAR_9;
 VAR_6->compress_type = VAR_10;
 VAR_6->max_inline = VAR_11;
 VAR_6->alloc_start = VAR_12;
 FUNC_4(VAR_6,
  VAR_13, VAR_6->thread_pool_size);
 VAR_6->metadata_ratio = VAR_14;
 return VAR_15;
}
