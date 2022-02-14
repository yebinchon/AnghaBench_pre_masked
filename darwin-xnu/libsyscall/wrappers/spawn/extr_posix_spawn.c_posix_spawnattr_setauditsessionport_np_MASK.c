
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int posix_spawnattr_t ;
typedef int mach_port_t ;
struct TYPE_3__ {int new_port; int port_type; } ;
typedef TYPE_1__ _ps_port_action_t ;


 int VAR_0 ;
 int FUNC_0 (int *,TYPE_1__*) ;

int
FUNC_1(
  posix_spawnattr_t *VAR_1,
  mach_port_t VAR_2)
{
 _ps_port_action_t VAR_3 = {
  .port_type = VAR_0,
  .new_port = VAR_2,
 };
 return FUNC_0(VAR_1, &VAR_3);
}
