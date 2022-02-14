
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
typedef int * posix_spawnattr_t ;
typedef TYPE_1__* _posix_spawnattr_t ;
struct TYPE_2__ {scalar_t__ psa_qos_clamp; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;

int FUNC_0(const posix_spawnattr_t * __restrict VAR_2, uint64_t VAR_3)
{
 _posix_spawnattr_t VAR_4;

 if (VAR_2 == ((void*)0) || *VAR_2 == ((void*)0)) {
  return VAR_0;
 }

 if (VAR_3 >= VAR_1)
  return VAR_0;

 VAR_4 = *(_posix_spawnattr_t *)VAR_2;
 VAR_4->psa_qos_clamp = VAR_3;

 return 0;
}
