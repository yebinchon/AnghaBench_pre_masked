
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int * posix_spawnattr_t ;
typedef int _ps_port_action_t ;
typedef TYPE_1__* _posix_spawnattr_t ;
typedef TYPE_2__* _posix_spawn_port_actions_t ;
struct TYPE_4__ {size_t pspa_alloc; size_t pspa_count; int * pspa_actions; } ;
struct TYPE_3__ {TYPE_2__* psa_ports; } ;


 int VAR_0 ;
 int FUNC_0 (int **) ;
 int FUNC_1 (int **) ;

__attribute__((used)) static int
FUNC_2(posix_spawnattr_t *VAR_1, _ps_port_action_t *VAR_2)
{
 _posix_spawnattr_t VAR_3;
 _posix_spawn_port_actions_t VAR_4;

 if (VAR_1 == ((void*)0) || *VAR_1 == ((void*)0) || VAR_2 == ((void*)0)) {
  return VAR_0;
 }

 VAR_3 = *(_posix_spawnattr_t *)VAR_1;
 VAR_4 = VAR_3->psa_ports;


 if (VAR_4 == ((void*)0)) {
  int VAR_5 = FUNC_0(VAR_1);
  if (VAR_5) {
   return VAR_5;
  }
  VAR_4 = VAR_3->psa_ports;
 }


 if (VAR_4->pspa_alloc == VAR_4->pspa_count) {
  int VAR_6 = FUNC_1(VAR_1);
  if (VAR_6) {
   return VAR_6;
  }
  VAR_4 = VAR_3->psa_ports;
 }


 VAR_4->pspa_actions[VAR_4->pspa_count] = *VAR_2;
 VAR_4->pspa_count++;

 return 0;
}
