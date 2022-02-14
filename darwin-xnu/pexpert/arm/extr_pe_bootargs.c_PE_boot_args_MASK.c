
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ CommandLine; } ;
typedef TYPE_1__ boot_args ;
struct TYPE_4__ {scalar_t__ bootArgs; } ;


 TYPE_2__ VAR_0 ;

char *
FUNC_0(
 void)
{
 return (char *)((boot_args *)VAR_0.bootArgs)->CommandLine;
}
