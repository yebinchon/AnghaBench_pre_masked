
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ enabled; } ;
struct _disk_conditioner_info_t {int mnt_fields; TYPE_1__ dcinfo; } ;
typedef TYPE_2__* mount_t ;
struct TYPE_6__ {struct _disk_conditioner_info_t* mnt_disk_conditioner_info; } ;


 int FUNC_0 (TYPE_2__*,int *) ;
 int FUNC_1 (struct _disk_conditioner_info_t*,int) ;

void
FUNC_2(mount_t VAR_0)
{
 struct _disk_conditioner_info_t *VAR_1 = VAR_0->mnt_disk_conditioner_info;

 if (!VAR_1) {
  return;
 }

 if (VAR_1->dcinfo.enabled) {
  FUNC_0(VAR_0, &(VAR_1->mnt_fields));
 }
 VAR_0->mnt_disk_conditioner_info = ((void*)0);
 FUNC_1(VAR_1, sizeof(struct _disk_conditioner_info_t));
}
