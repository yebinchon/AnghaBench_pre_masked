
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct super_block {int dummy; } ;
struct btrfs_fs_info {scalar_t__ fs_devices; } ;


 struct btrfs_fs_info* FUNC_0 (struct super_block*) ;

__attribute__((used)) static int FUNC_1(struct super_block *VAR_0, void *VAR_1)
{
 struct btrfs_fs_info *VAR_2 = VAR_1;
 struct btrfs_fs_info *VAR_3 = FUNC_0(VAR_0);

 return VAR_3->fs_devices == VAR_2->fs_devices;
}
