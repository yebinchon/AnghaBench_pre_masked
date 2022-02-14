
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int thread_state_flavor_t ;
typedef int posix_spawnattr_t ;
typedef int mach_port_t ;
typedef int exception_mask_t ;
typedef int exception_behavior_t ;
struct TYPE_3__ {int flavor; int behavior; int new_port; int mask; int port_type; } ;
typedef TYPE_1__ _ps_port_action_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;

int
FUNC_1(
  posix_spawnattr_t *VAR_1,
  exception_mask_t VAR_2,
  mach_port_t VAR_3,
  exception_behavior_t VAR_4,
  thread_state_flavor_t VAR_5)
{
 _ps_port_action_t VAR_6 = {
  .port_type = VAR_0,
  .mask = VAR_2,
  .new_port = VAR_3,
  .behavior = VAR_4,
  .flavor = VAR_5,
 };
 return FUNC_0(VAR_1, &VAR_6);
}
