
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u64 ;
struct scrub_dev {int stat; } ;
struct btrfs_scrub_progress {int dummy; } ;
struct btrfs_root {TYPE_2__* fs_info; } ;
struct btrfs_device {struct scrub_dev* scrub_device; } ;
struct TYPE_4__ {TYPE_1__* fs_devices; } ;
struct TYPE_3__ {int device_list_mutex; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct btrfs_device* FUNC_0 (struct btrfs_root*,int ,int *,int *) ;
 int FUNC_1 (struct btrfs_scrub_progress*,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int FUNC_4(struct btrfs_root *VAR_2, u64 VAR_3,
    struct btrfs_scrub_progress *VAR_4)
{
 struct btrfs_device *VAR_5;
 struct scrub_dev *VAR_6 = ((void*)0);

 FUNC_2(&VAR_2->fs_info->fs_devices->device_list_mutex);
 VAR_5 = FUNC_0(VAR_2, VAR_3, ((void*)0), ((void*)0));
 if (VAR_5)
  VAR_6 = VAR_5->scrub_device;
 if (VAR_6)
  FUNC_1(VAR_4, &VAR_6->stat, sizeof(*VAR_4));
 FUNC_3(&VAR_2->fs_info->fs_devices->device_list_mutex);

 return VAR_5 ? (VAR_6 ? 0 : -VAR_1) : -VAR_0;
}
