
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef scalar_t__ u64 ;
typedef scalar_t__ u32 ;
struct btrfs_super_block {int * sys_chunk_array; } ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct btrfs_key {scalar_t__ type; scalar_t__ objectid; scalar_t__ offset; } ;
struct btrfs_disk_key {int dummy; } ;
struct btrfs_chunk {int dummy; } ;
struct TYPE_2__ {struct btrfs_super_block* super_copy; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct btrfs_key*,struct btrfs_disk_key*) ;
 int FUNC_2 (struct btrfs_super_block*,scalar_t__) ;
 scalar_t__ FUNC_3 (struct btrfs_chunk*) ;
 scalar_t__ FUNC_4 (struct btrfs_super_block*) ;
 int FUNC_5 (int *,int *,scalar_t__) ;

__attribute__((used)) static int FUNC_6(struct btrfs_root *VAR_2, u64 VAR_3, u64
   VAR_4)
{
 struct btrfs_super_block *VAR_5 = VAR_2->fs_info->super_copy;
 struct btrfs_disk_key *VAR_6;
 struct btrfs_chunk *VAR_7;
 u8 *VAR_8;
 int VAR_9 = 0;
 u32 VAR_10;
 u32 VAR_11;
 u32 VAR_12 = 0;
 u32 VAR_13;
 struct btrfs_key VAR_14;

 VAR_11 = FUNC_4(VAR_5);

 VAR_8 = VAR_5->sys_chunk_array;
 VAR_13 = 0;

 while (VAR_13 < VAR_11) {
  VAR_6 = (struct btrfs_disk_key *)VAR_8;
  FUNC_1(&VAR_14, VAR_6);

  VAR_12 = sizeof(*VAR_6);

  if (VAR_14.type == VAR_0) {
   VAR_7 = (struct btrfs_chunk *)(VAR_8 + VAR_12);
   VAR_10 = FUNC_3(VAR_7);
   VAR_12 += FUNC_0(VAR_10);
  } else {
   VAR_9 = -VAR_1;
   break;
  }
  if (VAR_14.objectid == VAR_3 &&
      VAR_14.offset == VAR_4) {
   FUNC_5(VAR_8, VAR_8 + VAR_12, VAR_11 - (VAR_13 + VAR_12));
   VAR_11 -= VAR_12;
   FUNC_2(VAR_5, VAR_11);
  } else {
   VAR_8 += VAR_12;
   VAR_13 += VAR_12;
  }
 }
 return VAR_9;
}
