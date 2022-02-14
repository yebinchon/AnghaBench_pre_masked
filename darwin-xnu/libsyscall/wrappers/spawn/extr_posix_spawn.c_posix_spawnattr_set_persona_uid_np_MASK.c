
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uid_t ;
struct _posix_spawn_persona_info {int pspi_flags; int pspi_uid; } ;
typedef int * posix_spawnattr_t ;
typedef TYPE_1__* _posix_spawnattr_t ;
struct TYPE_2__ {struct _posix_spawn_persona_info* psa_persona_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

int
FUNC_0(const posix_spawnattr_t * __restrict VAR_4, uid_t VAR_5)
{
 _posix_spawnattr_t VAR_6;
 struct _posix_spawn_persona_info *VAR_7;

 if (VAR_4 == ((void*)0) || *VAR_4 == ((void*)0))
  return VAR_0;

 VAR_6 = *(_posix_spawnattr_t *)VAR_4;
 VAR_7 = VAR_6->psa_persona_info;
 if (!VAR_7)
  return VAR_0;

 if (!(VAR_7->pspi_flags & (VAR_1 | VAR_2)))
  return VAR_0;

 VAR_7->pspi_uid = VAR_5;

 VAR_7->pspi_flags |= VAR_3;

 return 0;
}
