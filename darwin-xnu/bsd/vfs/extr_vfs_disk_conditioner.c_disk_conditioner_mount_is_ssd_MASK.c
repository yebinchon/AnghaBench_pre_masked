
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int is_ssd; int enabled; } ;
struct _disk_conditioner_info_t {TYPE_1__ dcinfo; } ;
typedef TYPE_2__* mount_t ;
typedef int boolean_t ;
struct TYPE_5__ {int mnt_kern_flag; struct _disk_conditioner_info_t* mnt_disk_conditioner_info; } ;


 int VAR_0 ;

boolean_t
FUNC_0(mount_t VAR_1)
{
 struct _disk_conditioner_info_t *VAR_2 = VAR_1->mnt_disk_conditioner_info;

 if (!VAR_2 || !VAR_2->dcinfo.enabled) {
  return !!(VAR_1->mnt_kern_flag & VAR_0);
 }

 return VAR_2->dcinfo.is_ssd;
}
