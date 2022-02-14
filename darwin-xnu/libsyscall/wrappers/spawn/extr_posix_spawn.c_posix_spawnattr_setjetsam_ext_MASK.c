
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * posix_spawnattr_t ;
typedef TYPE_1__* _posix_spawnattr_t ;
struct TYPE_2__ {short psa_jetsam_flags; int psa_priority; int psa_memlimit_active; int psa_memlimit_inactive; } ;


 int VAR_0 ;
 short VAR_1 ;

int
FUNC_0(posix_spawnattr_t * __restrict VAR_2,
 short VAR_3, int VAR_4, int VAR_5, int VAR_6)
{
 _posix_spawnattr_t VAR_7;

 if (VAR_2 == ((void*)0) || *VAR_2 == ((void*)0))
  return VAR_0;

 VAR_7 = *(_posix_spawnattr_t *)VAR_2;

 VAR_7->psa_jetsam_flags = VAR_3;
 VAR_7->psa_jetsam_flags |= VAR_1;
 VAR_7->psa_priority = VAR_4;
 VAR_7->psa_memlimit_active = VAR_5;
 VAR_7->psa_memlimit_inactive = VAR_6;

 return (0);
}
