
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_info {int balance_mutex; int balance_cancel_req; int balance_running; scalar_t__ balance_ctl; int volume_mutex; int balance_wait_q; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (struct btrfs_fs_info*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int ,int) ;

int FUNC_8(struct btrfs_fs_info *VAR_1)
{
 FUNC_5(&VAR_1->balance_mutex);
 if (!VAR_1->balance_ctl) {
  FUNC_6(&VAR_1->balance_mutex);
  return -VAR_0;
 }

 FUNC_3(&VAR_1->balance_cancel_req);




 if (FUNC_4(&VAR_1->balance_running)) {
  FUNC_6(&VAR_1->balance_mutex);
  FUNC_7(VAR_1->balance_wait_q,
      FUNC_4(&VAR_1->balance_running) == 0);
  FUNC_5(&VAR_1->balance_mutex);
 } else {

  FUNC_6(&VAR_1->balance_mutex);
  FUNC_5(&VAR_1->volume_mutex);
  FUNC_5(&VAR_1->balance_mutex);

  if (VAR_1->balance_ctl)
   FUNC_1(VAR_1);

  FUNC_6(&VAR_1->volume_mutex);
 }

 FUNC_0(VAR_1->balance_ctl || FUNC_4(&VAR_1->balance_running));
 FUNC_2(&VAR_1->balance_cancel_req);
 FUNC_6(&VAR_1->balance_mutex);
 return 0;
}
