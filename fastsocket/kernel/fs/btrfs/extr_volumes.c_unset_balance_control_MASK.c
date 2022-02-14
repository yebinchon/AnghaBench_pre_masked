
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_info {int balance_lock; struct btrfs_balance_control* balance_ctl; } ;
struct btrfs_balance_control {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct btrfs_balance_control*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static void FUNC_4(struct btrfs_fs_info *VAR_0)
{
 struct btrfs_balance_control *VAR_1 = VAR_0->balance_ctl;

 FUNC_0(!VAR_0->balance_ctl);

 FUNC_2(&VAR_0->balance_lock);
 VAR_0->balance_ctl = ((void*)0);
 FUNC_3(&VAR_0->balance_lock);

 FUNC_1(VAR_1);
}
