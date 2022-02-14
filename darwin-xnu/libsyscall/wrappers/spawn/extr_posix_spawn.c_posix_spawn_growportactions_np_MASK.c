
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int * posix_spawnattr_t ;
typedef TYPE_1__* _posix_spawnattr_t ;
typedef TYPE_2__* _posix_spawn_port_actions_t ;
struct TYPE_6__ {int pspa_alloc; } ;
struct TYPE_5__ {TYPE_2__* psa_ports; } ;


 int VAR_0 ;
 int VAR_1 ;
 size_t FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int,int,int*) ;
 TYPE_2__* FUNC_2 (TYPE_2__*,size_t) ;

__attribute__((used)) static int
FUNC_3(posix_spawnattr_t *VAR_2)
{
 _posix_spawnattr_t VAR_3;
 _posix_spawn_port_actions_t VAR_4;

 if (VAR_2 == ((void*)0) || *VAR_2 == ((void*)0))
  return VAR_0;

 VAR_3 = *(_posix_spawnattr_t *)VAR_2;
 VAR_4 = VAR_3->psa_ports;
 if (VAR_4 == ((void*)0))
  return VAR_0;


 int VAR_5 = 0;
 if (FUNC_1(VAR_4->pspa_alloc, 2, &VAR_5))
  return VAR_1;
 size_t VAR_6 = FUNC_0(VAR_5);
 if (VAR_6 == 0)
  return VAR_1;

 VAR_4 = FUNC_2(VAR_4, VAR_6);
 if (VAR_4 == ((void*)0))
  return VAR_1;

 VAR_4->pspa_alloc = VAR_5;
 VAR_3->psa_ports = VAR_4;
 return 0;
}
