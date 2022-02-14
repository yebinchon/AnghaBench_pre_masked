
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct btrfs_fs_devices {scalar_t__ opened; } ;
typedef int fmode_t ;


 int FUNC_0 (struct btrfs_fs_devices*,int ,void*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int VAR_0 ;

int FUNC_3(struct btrfs_fs_devices *VAR_1,
         fmode_t VAR_2, void *VAR_3)
{
 int VAR_4;

 FUNC_1(&VAR_0);
 if (VAR_1->opened) {
  VAR_1->opened++;
  VAR_4 = 0;
 } else {
  VAR_4 = FUNC_0(VAR_1, VAR_2, VAR_3);
 }
 FUNC_2(&VAR_0);
 return VAR_4;
}
