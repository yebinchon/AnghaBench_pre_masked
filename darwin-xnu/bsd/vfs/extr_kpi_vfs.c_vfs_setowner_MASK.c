
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uid_t ;
typedef TYPE_1__* mount_t ;
typedef int gid_t ;
struct TYPE_3__ {int mnt_fsgroup; int mnt_fsowner; } ;



void FUNC_0(mount_t VAR_0, uid_t VAR_1, gid_t VAR_2)
{
 VAR_0->mnt_fsowner = VAR_1;
 VAR_0->mnt_fsgroup = VAR_2;
}
