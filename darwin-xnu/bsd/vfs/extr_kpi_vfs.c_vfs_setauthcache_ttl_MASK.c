
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef TYPE_1__* mount_t ;
struct TYPE_5__ {int mnt_authcache_ttl; int mnt_kern_flag; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;

void
FUNC_2(mount_t VAR_1, int VAR_2)
{
 FUNC_0(VAR_1);
 VAR_1->mnt_kern_flag |= VAR_0;
 VAR_1->mnt_authcache_ttl = VAR_2;
 FUNC_1(VAR_1);
}
