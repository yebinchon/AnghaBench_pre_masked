
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
typedef int u64 ;
struct btrfs_root {TYPE_1__* fs_info; } ;
struct btrfs_fs_devices {int missing_devices; int num_devices; int devices; } ;
struct TYPE_4__ {int func; } ;
struct btrfs_device {int missing; int uuid; int dev_alloc_list; int io_lock; struct btrfs_fs_devices* fs_devices; TYPE_2__ work; int devid; int dev_root; int dev_list; } ;
struct TYPE_3__ {int dev_root; struct btrfs_fs_devices* fs_devices; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 struct btrfs_device* FUNC_1 (int,int ) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int *,int ) ;
 int VAR_2 ;
 int FUNC_4 (int *) ;

__attribute__((used)) static struct btrfs_device *FUNC_5(struct btrfs_root *VAR_3,
         u64 VAR_4, u8 *VAR_5)
{
 struct btrfs_device *VAR_6;
 struct btrfs_fs_devices *VAR_7 = VAR_3->fs_info->fs_devices;

 VAR_6 = FUNC_1(sizeof(*VAR_6), VAR_1);
 if (!VAR_6)
  return ((void*)0);
 FUNC_2(&VAR_6->dev_list,
   &VAR_7->devices);
 VAR_6->dev_root = VAR_3->fs_info->dev_root;
 VAR_6->devid = VAR_4;
 VAR_6->work.func = VAR_2;
 VAR_6->fs_devices = VAR_7;
 VAR_6->missing = 1;
 VAR_7->num_devices++;
 VAR_7->missing_devices++;
 FUNC_4(&VAR_6->io_lock);
 FUNC_0(&VAR_6->dev_alloc_list);
 FUNC_3(VAR_6->uuid, VAR_5, VAR_0);
 return VAR_6;
}
