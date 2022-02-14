
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
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,TYPE_1__*) ;

int
FUNC_1(posix_spawnattr_t * __restrict VAR_3,
                 int VAR_4, mach_port_t VAR_5[])
{
 int VAR_6 = 0, VAR_7;

 if (VAR_4 < 0 || VAR_4 > VAR_1) {
  return VAR_0;
 }

 for (VAR_7 = 0; VAR_7 < VAR_4; VAR_7++) {
  _ps_port_action_t VAR_8 = {
   .port_type = VAR_2,
   .new_port = VAR_5[VAR_7],
  };
  int VAR_9 = FUNC_0(VAR_3, &VAR_8);
  if (VAR_9) {
   break;
  }
 }
 return VAR_6;
}
