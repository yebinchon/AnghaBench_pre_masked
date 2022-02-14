
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* mount_t ;
struct TYPE_3__ {void* mnt_throttle_info; } ;


 int FUNC_0 (void*) ;
 int FUNC_1 (void*) ;

void
FUNC_2(mount_t VAR_0, void *VAR_1)
{
 if ((VAR_1 == ((void*)0)) || (VAR_0 == ((void*)0)))
  return;
 FUNC_0(VAR_1);




 if (VAR_0->mnt_throttle_info)
  FUNC_1(VAR_0->mnt_throttle_info);
 VAR_0->mnt_throttle_info = VAR_1;
}
