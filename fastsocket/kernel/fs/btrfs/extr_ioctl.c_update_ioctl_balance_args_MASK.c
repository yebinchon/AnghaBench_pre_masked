
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_ioctl_balance_args {int stat; int sys; int meta; int data; int state; int flags; } ;
struct btrfs_fs_info {int balance_lock; int balance_cancel_req; int balance_pause_req; int balance_running; struct btrfs_balance_control* balance_ctl; } ;
struct btrfs_balance_control {int stat; int sys; int meta; int data; int flags; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *) ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

void FUNC_4(struct btrfs_fs_info *VAR_3, int VAR_4,
          struct btrfs_ioctl_balance_args *VAR_5)
{
 struct btrfs_balance_control *VAR_6 = VAR_3->balance_ctl;

 VAR_5->flags = VAR_6->flags;

 if (FUNC_0(&VAR_3->balance_running))
  VAR_5->state |= VAR_2;
 if (FUNC_0(&VAR_3->balance_pause_req))
  VAR_5->state |= VAR_1;
 if (FUNC_0(&VAR_3->balance_cancel_req))
  VAR_5->state |= VAR_0;

 FUNC_1(&VAR_5->data, &VAR_6->data, sizeof(VAR_5->data));
 FUNC_1(&VAR_5->meta, &VAR_6->meta, sizeof(VAR_5->meta));
 FUNC_1(&VAR_5->sys, &VAR_6->sys, sizeof(VAR_5->sys));

 if (VAR_4) {
  FUNC_2(&VAR_3->balance_lock);
  FUNC_1(&VAR_5->stat, &VAR_6->stat, sizeof(VAR_5->stat));
  FUNC_3(&VAR_3->balance_lock);
 } else {
  FUNC_1(&VAR_5->stat, &VAR_6->stat, sizeof(VAR_5->stat));
 }
}
