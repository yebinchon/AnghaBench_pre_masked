
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdrom_device_info {TYPE_1__* handle; } ;
struct TYPE_2__ {int device; } ;
typedef TYPE_1__ Scsi_CD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;

int FUNC_1(struct cdrom_device_info *VAR_2, int VAR_3)
{
 Scsi_CD *VAR_4 = VAR_2->handle;

 return FUNC_0(VAR_4->device, VAR_3 ?
         VAR_1 : VAR_0);
}
