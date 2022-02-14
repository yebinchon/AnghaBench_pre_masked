
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ lba; } ;
struct cdrom_multisession {int xa_flag; TYPE_1__ addr; } ;
struct cdrom_device_info {TYPE_2__* handle; } ;
struct TYPE_4__ {scalar_t__ ms_offset; scalar_t__ xa_flag; } ;
typedef TYPE_2__ Scsi_CD ;



int FUNC_0(struct cdrom_device_info *VAR_0,
   struct cdrom_multisession *VAR_1)
{
 Scsi_CD *VAR_2 = VAR_0->handle;

 VAR_1->addr.lba = VAR_2->ms_offset;
 VAR_1->xa_flag = VAR_2->xa_flag || VAR_2->ms_offset > 0;

 return 0;
}
