
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct scrub_dev {int cancel_req; } ;
struct btrfs_root {struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int scrub_lock; int scrub_pause_wait; } ;
struct btrfs_device {struct scrub_dev* scrub_device; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int ,int ) ;

int FUNC_4(struct btrfs_root *VAR_1, struct btrfs_device *VAR_2)
{
 struct btrfs_fs_info *VAR_3 = VAR_1->fs_info;
 struct scrub_dev *VAR_4;

 FUNC_1(&VAR_3->scrub_lock);
 VAR_4 = VAR_2->scrub_device;
 if (!VAR_4) {
  FUNC_2(&VAR_3->scrub_lock);
  return -VAR_0;
 }
 FUNC_0(&VAR_4->cancel_req);
 while (VAR_2->scrub_device) {
  FUNC_2(&VAR_3->scrub_lock);
  FUNC_3(VAR_3->scrub_pause_wait,
      VAR_2->scrub_device == ((void*)0));
  FUNC_1(&VAR_3->scrub_lock);
 }
 FUNC_2(&VAR_3->scrub_lock);

 return 0;
}
