
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u32 ;
struct btrfs_super_block {int * sys_chunk_array; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct btrfs_key {int dummy; } ;
struct btrfs_disk_key {int dummy; } ;
typedef struct btrfs_disk_key btrfs_chunk ;
typedef int disk_key ;
struct TYPE_2__ {struct btrfs_super_block* super_copy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct btrfs_disk_key*,struct btrfs_key*) ;
 int FUNC_1 (struct btrfs_super_block*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct btrfs_super_block*) ;
 int FUNC_3 (int *,struct btrfs_disk_key*,int) ;

__attribute__((used)) static int FUNC_4(struct btrfs_root *VAR_2,
      struct btrfs_key *VAR_3,
      struct btrfs_chunk *VAR_4, int VAR_5)
{
 struct btrfs_super_block *VAR_6 = VAR_2->fs_info->super_copy;
 struct btrfs_disk_key VAR_7;
 u32 VAR_8;
 u8 *VAR_9;

 VAR_8 = FUNC_2(VAR_6);
 if (VAR_8 + VAR_5 > VAR_0)
  return -VAR_1;

 VAR_9 = VAR_6->sys_chunk_array + VAR_8;
 FUNC_0(&VAR_7, VAR_3);
 FUNC_3(VAR_9, &VAR_7, sizeof(VAR_7));
 VAR_9 += sizeof(VAR_7);
 FUNC_3(VAR_9, VAR_4, VAR_5);
 VAR_5 += sizeof(VAR_7);
 FUNC_1(VAR_6, VAR_8 + VAR_5);
 return 0;
}
