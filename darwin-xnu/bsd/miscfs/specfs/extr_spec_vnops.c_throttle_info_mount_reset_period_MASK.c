
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct _throttle_io_info_t {int dummy; } ;
typedef TYPE_1__* mount_t ;
struct TYPE_3__ {size_t mnt_devbsdunit; struct _throttle_io_info_t* mnt_throttle_info; } ;


 int VAR_0 ;
 struct _throttle_io_info_t* VAR_1 ;
 int FUNC_0 (struct _throttle_io_info_t*,int) ;

void
FUNC_1(mount_t VAR_2, int VAR_3)
{
 struct _throttle_io_info_t *VAR_4;

 if (VAR_2 == ((void*)0))
  VAR_4 = &VAR_1[VAR_0 - 1];
 else if (VAR_2->mnt_throttle_info == ((void*)0))
  VAR_4 = &VAR_1[VAR_2->mnt_devbsdunit];
 else
  VAR_4 = VAR_2->mnt_throttle_info;

 FUNC_0(VAR_4, VAR_3);
}
