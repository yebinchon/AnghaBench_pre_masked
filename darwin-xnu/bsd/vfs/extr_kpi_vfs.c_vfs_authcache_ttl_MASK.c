
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef TYPE_1__* mount_t ;
struct TYPE_3__ {int mnt_kern_flag; int mnt_authcache_ttl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

int
FUNC_0(mount_t VAR_3)
{
        if ( (VAR_3->mnt_kern_flag & (VAR_2 | VAR_1)) )
         return (VAR_3->mnt_authcache_ttl);
 else
         return (VAR_0);
}
