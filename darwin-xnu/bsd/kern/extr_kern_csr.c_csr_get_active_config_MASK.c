
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int csr_config_t ;
struct TYPE_3__ {int flags; int csrActiveConfig; } ;
typedef TYPE_1__ boot_args ;
struct TYPE_4__ {scalar_t__ bootArgs; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;

int
FUNC_0(csr_config_t *VAR_3)
{
 boot_args *VAR_4 = (boot_args *)VAR_1.bootArgs;
 if (VAR_4->flags & VAR_2) {
  *VAR_3 = VAR_4->csrActiveConfig & VAR_0;
 } else {
  *VAR_3 = 0;
 }

 return 0;
}
