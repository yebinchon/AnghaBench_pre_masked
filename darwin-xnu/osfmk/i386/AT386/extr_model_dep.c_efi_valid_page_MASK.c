
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ ppnum_t ;
struct TYPE_3__ {scalar_t__ efiRuntimeServicesPageStart; scalar_t__ efiRuntimeServicesPageCount; } ;
typedef TYPE_1__ boot_args ;
typedef int boolean_t ;
struct TYPE_4__ {scalar_t__ bootArgs; } ;


 TYPE_2__ VAR_0 ;

boolean_t
FUNC_0(ppnum_t VAR_1)
{
    boot_args *VAR_2 = (boot_args *)VAR_0.bootArgs;
    ppnum_t VAR_3 = VAR_2->efiRuntimeServicesPageStart;
    ppnum_t VAR_4 = VAR_3 + VAR_2->efiRuntimeServicesPageCount;

    return VAR_3 <= VAR_1 && VAR_1 < VAR_4;
}
