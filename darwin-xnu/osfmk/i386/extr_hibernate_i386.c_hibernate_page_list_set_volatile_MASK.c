
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef int hibernate_page_list_t ;
struct TYPE_3__ {scalar_t__ efiRuntimeServicesPageCount; scalar_t__ efiRuntimeServicesPageStart; } ;
typedef TYPE_1__ boot_args ;
struct TYPE_4__ {scalar_t__ bootArgs; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int *,int *,scalar_t__,scalar_t__,int ) ;
 int VAR_1 ;

void
FUNC_1( hibernate_page_list_t * VAR_2,
      hibernate_page_list_t * VAR_3,
      uint32_t * VAR_4)
{
    boot_args * VAR_5 = (boot_args *) VAR_0.bootArgs;

    if (VAR_5->efiRuntimeServicesPageStart)
    {
 FUNC_0(VAR_2, VAR_3,
      VAR_5->efiRuntimeServicesPageStart, VAR_5->efiRuntimeServicesPageCount,
      VAR_1);
 *VAR_4 -= VAR_5->efiRuntimeServicesPageCount;
    }
}
