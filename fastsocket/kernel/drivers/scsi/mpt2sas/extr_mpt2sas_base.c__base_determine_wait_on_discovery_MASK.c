
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {int CurrentBootDeviceForm; int ReqBootDeviceForm; int ReqAltBootDeviceForm; } ;
struct TYPE_3__ {int BiosVersion; } ;
struct MPT2SAS_ADAPTER {TYPE_2__ bios_pg2; TYPE_1__ bios_pg3; scalar_t__ ir_firmware; } ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static int
FUNC_0(struct MPT2SAS_ADAPTER *VAR_2)
{






 if (VAR_2->ir_firmware)
  return 1;


 if (!VAR_2->bios_pg3.BiosVersion)
  return 0;
 if ((VAR_2->bios_pg2.CurrentBootDeviceForm &
     VAR_0) ==
     VAR_1 &&

    (VAR_2->bios_pg2.ReqBootDeviceForm &
     VAR_0) ==
     VAR_1 &&

    (VAR_2->bios_pg2.ReqAltBootDeviceForm &
     VAR_0) ==
     VAR_1)
  return 0;

 return 1;
}
