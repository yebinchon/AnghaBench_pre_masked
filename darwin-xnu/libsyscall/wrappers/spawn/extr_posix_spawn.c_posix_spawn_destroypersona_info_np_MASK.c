
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct _posix_spawn_persona_info {int dummy; } ;
typedef int * posix_spawnattr_t ;
typedef TYPE_1__* _posix_spawnattr_t ;
struct TYPE_2__ {struct _posix_spawn_persona_info* psa_persona_info; } ;


 int VAR_0 ;
 int FUNC_0 (struct _posix_spawn_persona_info*) ;

__attribute__((used)) static int
FUNC_1(posix_spawnattr_t *VAR_1)
{
 _posix_spawnattr_t VAR_2;
 struct _posix_spawn_persona_info *VAR_3;

 if (VAR_1 == ((void*)0) || *VAR_1 == ((void*)0))
  return VAR_0;

 VAR_2 = *(_posix_spawnattr_t *)VAR_1;
 VAR_3 = VAR_2->psa_persona_info;
 if (VAR_3 == ((void*)0))
  return VAR_0;

 VAR_2->psa_persona_info = ((void*)0);
 FUNC_0(VAR_3);
 return 0;
}
