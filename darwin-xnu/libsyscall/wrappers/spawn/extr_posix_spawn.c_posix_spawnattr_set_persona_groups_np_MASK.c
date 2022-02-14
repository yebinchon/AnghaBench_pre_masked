
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uid_t ;
struct _posix_spawn_persona_info {int pspi_flags; int pspi_ngroups; int pspi_gmuid; int * pspi_groups; } ;
typedef int * posix_spawnattr_t ;
typedef int gid_t ;
typedef TYPE_1__* _posix_spawnattr_t ;
struct TYPE_2__ {struct _posix_spawn_persona_info* psa_persona_info; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;

int
FUNC_0(const posix_spawnattr_t * __restrict VAR_5, int VAR_6, gid_t *VAR_7, uid_t VAR_8)
{
 _posix_spawnattr_t VAR_9;
 struct _posix_spawn_persona_info *VAR_10;

 if (VAR_5 == ((void*)0) || *VAR_5 == ((void*)0))
  return VAR_0;

 if (VAR_7 == ((void*)0))
  return VAR_0;

 if (VAR_6 > VAR_1 || VAR_6 < 0)
  return VAR_0;

 VAR_9 = *(_posix_spawnattr_t *)VAR_5;
 VAR_10 = VAR_9->psa_persona_info;
 if (!VAR_10)
  return VAR_0;

 if (!(VAR_10->pspi_flags & (VAR_2 | VAR_3)))
  return VAR_0;

 VAR_10->pspi_ngroups = VAR_6;
 for (int VAR_11 = 0; VAR_11 < VAR_6; VAR_11++)
  VAR_10->pspi_groups[VAR_11] = VAR_7[VAR_11];

 VAR_10->pspi_gmuid = VAR_8;

 VAR_10->pspi_flags |= VAR_4;

 return 0;
}
