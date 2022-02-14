
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u64 ;
struct btrfs_root {struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {TYPE_1__* fs_devices; } ;
struct btrfs_device {int dummy; } ;
struct TYPE_2__ {int device_list_mutex; } ;


 int VAR_0 ;
 struct btrfs_device* FUNC_0 (struct btrfs_root*,int ,int *,int *) ;
 int FUNC_1 (struct btrfs_root*,struct btrfs_device*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct btrfs_root *VAR_1, u64 VAR_2)
{
 struct btrfs_fs_info *VAR_3 = VAR_1->fs_info;
 struct btrfs_device *VAR_4;
 int VAR_5;





 FUNC_2(&VAR_3->fs_devices->device_list_mutex);
 VAR_4 = FUNC_0(VAR_1, VAR_2, ((void*)0), ((void*)0));
 if (!VAR_4) {
  FUNC_3(&VAR_3->fs_devices->device_list_mutex);
  return -VAR_0;
 }
 VAR_5 = FUNC_1(VAR_1, VAR_4);
 FUNC_3(&VAR_3->fs_devices->device_list_mutex);

 return VAR_5;
}
