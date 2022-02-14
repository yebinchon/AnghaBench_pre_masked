
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_info {int balance_mutex; int balance_pause_req; int balance_running; int balance_wait_q; int balance_ctl; } ;


 int FUNC_0 (scalar_t__) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int ,int) ;

int FUNC_7(struct btrfs_fs_info *VAR_1)
{
 int VAR_2 = 0;

 FUNC_4(&VAR_1->balance_mutex);
 if (!VAR_1->balance_ctl) {
  FUNC_5(&VAR_1->balance_mutex);
  return -VAR_0;
 }

 if (FUNC_3(&VAR_1->balance_running)) {
  FUNC_2(&VAR_1->balance_pause_req);
  FUNC_5(&VAR_1->balance_mutex);

  FUNC_6(VAR_1->balance_wait_q,
      FUNC_3(&VAR_1->balance_running) == 0);

  FUNC_4(&VAR_1->balance_mutex);

  FUNC_0(FUNC_3(&VAR_1->balance_running));
  FUNC_1(&VAR_1->balance_pause_req);
 } else {
  VAR_2 = -VAR_0;
 }

 FUNC_5(&VAR_1->balance_mutex);
 return VAR_2;
}
