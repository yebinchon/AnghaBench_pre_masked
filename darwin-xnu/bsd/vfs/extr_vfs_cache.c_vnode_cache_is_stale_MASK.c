
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef TYPE_2__* vnode_t ;
struct timeval {scalar_t__ tv_sec; } ;
typedef int boolean_t ;
struct TYPE_5__ {scalar_t__ v_cred_timestamp; TYPE_1__* v_mount; } ;
struct TYPE_4__ {scalar_t__ mnt_authcache_ttl; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct timeval*) ;

boolean_t FUNC_1(vnode_t VAR_2)
{
 struct timeval VAR_3;
 boolean_t VAR_4;

 FUNC_0(&VAR_3);

 if ((VAR_3.tv_sec - VAR_2->v_cred_timestamp) > VAR_2->v_mount->mnt_authcache_ttl)
         VAR_4 = VAR_1;
 else
         VAR_4 = VAR_0;

 return VAR_4;
}
