
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct btrfs_fs_info {int cleaner_mutex; int transaction_kthread_mutex; } ;


 struct btrfs_fs_info* FUNC_0 (struct super_block*) ;
 int FUNC_1 (int *) ;

__attribute__((used)) static int FUNC_2(struct super_block *VAR_0)
{
 struct btrfs_fs_info *VAR_1 = FUNC_0(VAR_0);
 FUNC_1(&VAR_1->transaction_kthread_mutex);
 FUNC_1(&VAR_1->cleaner_mutex);
 return 0;
}
