
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_devices {struct btrfs_fs_devices* seed; int opened; } ;


 int FUNC_0 (struct btrfs_fs_devices*) ;
 int FUNC_1 (struct btrfs_fs_devices*) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_0 ;

int FUNC_4(struct btrfs_fs_devices *VAR_1)
{
 struct btrfs_fs_devices *VAR_2 = ((void*)0);
 int VAR_3;

 FUNC_2(&VAR_0);
 VAR_3 = FUNC_0(VAR_1);
 if (!VAR_1->opened) {
  VAR_2 = VAR_1->seed;
  VAR_1->seed = ((void*)0);
 }
 FUNC_3(&VAR_0);

 while (VAR_2) {
  VAR_1 = VAR_2;
  VAR_2 = VAR_1->seed;
  FUNC_0(VAR_1);
  FUNC_1(VAR_1);
 }
 return VAR_3;
}
