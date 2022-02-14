
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct _throttle_io_info_t {int throttle_last_write_timestamp; } ;
typedef TYPE_1__* mount_t ;
struct TYPE_3__ {size_t mnt_devbsdunit; int mnt_last_write_completed_timestamp; struct _throttle_io_info_t* mnt_throttle_info; } ;


 int VAR_0 ;
 struct _throttle_io_info_t* VAR_1 ;
 int FUNC_0 (int *) ;

void
FUNC_1(mount_t VAR_2)
{
     struct _throttle_io_info_t *VAR_3;

 if (VAR_2 == ((void*)0))
  VAR_3 = &VAR_1[VAR_0 - 1];
 else if (VAR_2->mnt_throttle_info == ((void*)0))
  VAR_3 = &VAR_1[VAR_2->mnt_devbsdunit];
 else
  VAR_3 = VAR_2->mnt_throttle_info;

 FUNC_0(&VAR_3->throttle_last_write_timestamp);
 if (VAR_2 != ((void*)0))
  VAR_2->mnt_last_write_completed_timestamp = VAR_3->throttle_last_write_timestamp;
}
