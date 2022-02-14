
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct _disk_conditioner_info_t {int dcinfo; } ;
typedef TYPE_1__* mount_t ;
typedef int disk_conditioner_info ;
struct TYPE_3__ {struct _disk_conditioner_info_t* mnt_disk_conditioner_info; } ;


 int VAR_0 ;
 int FUNC_0 (int *,int *,int) ;

int
FUNC_1(mount_t VAR_1, disk_conditioner_info *VAR_2)
{
 struct _disk_conditioner_info_t *VAR_3;

 if (!VAR_1) {
  return VAR_0;
 }

 VAR_3 = VAR_1->mnt_disk_conditioner_info;

 if (VAR_3) {
  FUNC_0(VAR_2, &(VAR_3->dcinfo), sizeof(disk_conditioner_info));
 }

 return 0;
}
