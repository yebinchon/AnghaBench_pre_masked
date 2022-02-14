
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint64_t ;
struct _posix_spawn_coalition_info {TYPE_1__* psci_info; } ;
typedef int * posix_spawnattr_t ;
typedef TYPE_2__* _posix_spawnattr_t ;
struct TYPE_4__ {struct _posix_spawn_coalition_info* psa_coalition_info; } ;
struct TYPE_3__ {int psci_role; int psci_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (struct _posix_spawn_coalition_info*,int ,int) ;

int FUNC_2(const posix_spawnattr_t * __restrict VAR_3,
        uint64_t VAR_4, int VAR_5, int VAR_6)
{
 _posix_spawnattr_t VAR_7;
 struct _posix_spawn_coalition_info *VAR_8;

 if (VAR_3 == ((void*)0) || *VAR_3 == ((void*)0)) {
  return VAR_1;
 }
 if (VAR_5 < 0 || VAR_5 > VAR_0)
  return VAR_1;

 VAR_7 = *(_posix_spawnattr_t *)VAR_3;

 VAR_8 = VAR_7->psa_coalition_info;
 if (!VAR_8) {
  VAR_8 = (struct _posix_spawn_coalition_info *)FUNC_0(sizeof(*VAR_8));
  if (!VAR_8)
   return VAR_2;
  FUNC_1(VAR_8, 0, sizeof(*VAR_8));
  VAR_7->psa_coalition_info = VAR_8;
 }

 VAR_8->psci_info[VAR_5].psci_id = VAR_4;
 VAR_8->psci_info[VAR_5].psci_role = VAR_6;

 return 0;
}
