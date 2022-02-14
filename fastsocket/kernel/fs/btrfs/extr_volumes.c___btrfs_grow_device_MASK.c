
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct btrfs_trans_handle {int dummy; } ;
struct btrfs_super_block {int dummy; } ;
struct btrfs_device {scalar_t__ total_bytes; TYPE_2__* dev_root; scalar_t__ disk_total_bytes; TYPE_1__* fs_devices; int writeable; } ;
struct TYPE_6__ {struct btrfs_super_block* super_copy; } ;
struct TYPE_5__ {TYPE_3__* fs_info; } ;
struct TYPE_4__ {int total_rw_bytes; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (struct btrfs_super_block*,scalar_t__) ;
 scalar_t__ FUNC_2 (struct btrfs_super_block*) ;
 int FUNC_3 (struct btrfs_trans_handle*,struct btrfs_device*) ;

__attribute__((used)) static int FUNC_4(struct btrfs_trans_handle *VAR_2,
        struct btrfs_device *VAR_3, u64 VAR_4)
{
 struct btrfs_super_block *VAR_5 =
  VAR_3->dev_root->fs_info->super_copy;
 u64 VAR_6 = FUNC_2(VAR_5);
 u64 VAR_7 = VAR_4 - VAR_3->total_bytes;

 if (!VAR_3->writeable)
  return -VAR_0;
 if (VAR_4 <= VAR_3->total_bytes)
  return -VAR_1;

 FUNC_1(VAR_5, VAR_6 + VAR_7);
 VAR_3->fs_devices->total_rw_bytes += VAR_7;

 VAR_3->total_bytes = VAR_4;
 VAR_3->disk_total_bytes = VAR_4;
 FUNC_0(VAR_3->dev_root->fs_info);

 return FUNC_3(VAR_2, VAR_3);
}
