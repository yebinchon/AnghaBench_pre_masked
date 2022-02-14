
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int kern_return_t ;
struct TYPE_6__ {int performanceDataSize; int performanceDataStart; int efiRuntimeServicesVirtualPageStart; int efiRuntimeServicesPageCount; int efiRuntimeServicesPageStart; } ;
typedef TYPE_1__ boot_args ;
struct TYPE_9__ {scalar_t__ bootArgs; } ;
struct TYPE_8__ {int cpu_hibernate; } ;
struct TYPE_7__ {int performanceDataSize; int performanceDataStart; int runtimeVirtualPages; int runtimePageCount; int runtimePages; scalar_t__ processorFlags; } ;
typedef TYPE_2__ IOHibernateImageHeader ;


 int VAR_0 ;
 TYPE_5__ VAR_1 ;
 TYPE_4__* FUNC_0 (int ) ;

kern_return_t
FUNC_1(IOHibernateImageHeader * VAR_2)
{
    boot_args * VAR_3 = (boot_args *) VAR_1.bootArgs;

    FUNC_0(0)->cpu_hibernate = 1;
    VAR_2->processorFlags = 0;

    VAR_2->runtimePages = VAR_3->efiRuntimeServicesPageStart;
    VAR_2->runtimePageCount = VAR_3->efiRuntimeServicesPageCount;
    VAR_2->runtimeVirtualPages = VAR_3->efiRuntimeServicesVirtualPageStart;
    VAR_2->performanceDataStart = VAR_3->performanceDataStart;
    VAR_2->performanceDataSize = VAR_3->performanceDataSize;

    return (VAR_0);
}
