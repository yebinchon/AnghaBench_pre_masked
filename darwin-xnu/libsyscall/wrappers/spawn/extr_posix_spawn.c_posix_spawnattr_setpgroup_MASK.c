
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * posix_spawnattr_t ;
typedef int pid_t ;
typedef TYPE_1__* _posix_spawnattr_t ;
struct TYPE_2__ {int psa_pgroup; } ;


 int VAR_0 ;

int
FUNC_0(posix_spawnattr_t * VAR_1, pid_t VAR_2)
{
 _posix_spawnattr_t VAR_3;

 if (VAR_1 == ((void*)0) || *VAR_1 == ((void*)0))
  return VAR_0;

 VAR_3 = *(_posix_spawnattr_t *)VAR_1;
 VAR_3->psa_pgroup = VAR_2;

 return (0);
}
