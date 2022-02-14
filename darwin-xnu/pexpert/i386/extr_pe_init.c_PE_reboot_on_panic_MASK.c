
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ boot_args ;
typedef int boolean_t ;
struct TYPE_4__ {scalar_t__ bootArgs; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

boolean_t
FUNC_0(void)
{
 boot_args *VAR_4 = (boot_args *)VAR_1.bootArgs;

 if (VAR_4->flags & VAR_3)
  return VAR_2;
 else
  return VAR_0;
}
