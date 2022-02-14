
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct timeval {int tv_sec; scalar_t__ tv_usec; } ;
typedef TYPE_2__* mount_t ;
struct TYPE_4__ {int tv_sec; scalar_t__ tv_usec; } ;
struct TYPE_5__ {TYPE_1__ mnt_last_write_completed_timestamp; scalar_t__ mnt_pending_write_size; } ;


 int FUNC_0 (struct timeval*) ;

uint64_t FUNC_1(mount_t VAR_0)
{
 if (VAR_0->mnt_pending_write_size)
  return 0;

 struct timeval VAR_1;

 FUNC_0(&VAR_1);

 return ((VAR_1.tv_sec
    - VAR_0->mnt_last_write_completed_timestamp.tv_sec) * 1000000
   + VAR_1.tv_usec - VAR_0->mnt_last_write_completed_timestamp.tv_usec);
}
