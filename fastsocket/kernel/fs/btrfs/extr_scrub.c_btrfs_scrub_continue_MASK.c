
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_root {struct btrfs_fs_info* fs_info; } ;
struct btrfs_fs_info {int scrub_pause_wait; int scrub_pause_req; } ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

void FUNC_2(struct btrfs_root *VAR_0)
{
 struct btrfs_fs_info *VAR_1 = VAR_0->fs_info;

 FUNC_0(&VAR_1->scrub_pause_req);
 FUNC_1(&VAR_1->scrub_pause_wait);
}
