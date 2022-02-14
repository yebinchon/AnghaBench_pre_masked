
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_root {struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int scrub_lock; int scrubs_running; int scrubs_paused; int scrub_pause_wait; int scrub_pause_req; } ;


 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int ,int) ;

void FUNC_5(struct btrfs_root *VAR_0)
{
 struct btrfs_fs_info *VAR_1 = VAR_0->fs_info;

 FUNC_2(&VAR_1->scrub_lock);
 FUNC_0(&VAR_1->scrub_pause_req);
 while (FUNC_1(&VAR_1->scrubs_paused) !=
        FUNC_1(&VAR_1->scrubs_running)) {
  FUNC_3(&VAR_1->scrub_lock);
  FUNC_4(VAR_1->scrub_pause_wait,
      FUNC_1(&VAR_1->scrubs_paused) ==
      FUNC_1(&VAR_1->scrubs_running));
  FUNC_2(&VAR_1->scrub_lock);
 }
 FUNC_3(&VAR_1->scrub_lock);
}
