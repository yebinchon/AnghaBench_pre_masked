
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int posix_spawnattr_t ;
typedef int mach_port_t ;
struct TYPE_3__ {int which; int new_port; int port_type; } ;
typedef TYPE_1__ _ps_port_action_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;

int
FUNC_1(
  posix_spawnattr_t *VAR_1,
  mach_port_t VAR_2,
  int VAR_3)
{
 _ps_port_action_t VAR_4 = {
  .port_type = VAR_0,
  .new_port = VAR_2,
  .which = VAR_3,
 };
 return FUNC_0(VAR_1, &VAR_4);
}
