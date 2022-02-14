
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef void* uint64_t ;
typedef int * posix_spawnattr_t ;
typedef TYPE_1__* _posix_spawnattr_t ;
struct TYPE_2__ {void* psa_cpumonitor_interval; void* psa_cpumonitor_percent; } ;


 int VAR_0 ;

int
FUNC_0(posix_spawnattr_t * __restrict VAR_1,
  uint64_t VAR_2, uint64_t VAR_3)
{
 _posix_spawnattr_t VAR_4;

 if (VAR_1 == ((void*)0) || *VAR_1 == ((void*)0))
  return (VAR_0);

 VAR_4 = *(_posix_spawnattr_t *)VAR_1;

 VAR_4->psa_cpumonitor_percent = VAR_2;
 VAR_4->psa_cpumonitor_interval = VAR_3;

 return (0);
}
