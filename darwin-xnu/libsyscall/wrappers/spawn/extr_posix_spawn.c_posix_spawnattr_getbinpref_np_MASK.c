
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int * posix_spawnattr_t ;
typedef int cpu_type_t ;
typedef TYPE_1__* _posix_spawnattr_t ;
struct TYPE_2__ {int * psa_binprefs; } ;


 int VAR_0 ;

int
FUNC_0(const posix_spawnattr_t * __restrict VAR_1,
  size_t VAR_2, cpu_type_t *VAR_3, size_t * __restrict VAR_4)
{
 _posix_spawnattr_t VAR_5;
 int VAR_6 = 0;

 if (VAR_1 == ((void*)0) || *VAR_1 == ((void*)0))
  return VAR_0;

 VAR_5 = *(_posix_spawnattr_t *)VAR_1;
 for (VAR_6 = 0; VAR_6 < VAR_2 && VAR_6 < 4; VAR_6++) {
  VAR_3[VAR_6] = VAR_5->psa_binprefs[VAR_6];
 }

 if (VAR_4)
  *VAR_4 = VAR_6;
 return 0;
}
