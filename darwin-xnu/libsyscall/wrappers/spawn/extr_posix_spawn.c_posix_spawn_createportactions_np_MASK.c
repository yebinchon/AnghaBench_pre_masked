
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int * posix_spawnattr_t ;
typedef TYPE_1__* _posix_spawnattr_t ;
typedef TYPE_2__* _posix_spawn_port_actions_t ;
struct TYPE_4__ {int pspa_alloc; scalar_t__ pspa_count; } ;
struct TYPE_3__ {TYPE_2__* psa_ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int ) ;

__attribute__((used)) static int
FUNC_2(posix_spawnattr_t *VAR_2)
{
 _posix_spawnattr_t VAR_3;
 _posix_spawn_port_actions_t VAR_4;

 if (VAR_2 == ((void*)0) || *VAR_2 == ((void*)0))
  return VAR_0;

 VAR_3 = *(_posix_spawnattr_t *)VAR_2;
 VAR_4 = (_posix_spawn_port_actions_t)FUNC_1(FUNC_0(2));
 if (VAR_4 == ((void*)0))
  return VAR_1;

 VAR_4->pspa_alloc = 2;
 VAR_4->pspa_count = 0;

 VAR_3->psa_ports = VAR_4;
 return 0;
}
