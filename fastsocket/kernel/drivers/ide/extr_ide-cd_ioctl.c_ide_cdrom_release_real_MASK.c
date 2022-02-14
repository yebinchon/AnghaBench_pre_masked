
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct cdrom_device_info {int use_count; TYPE_1__* handle; } ;
struct TYPE_2__ {int atapi_flags; } ;
typedef TYPE_1__ ide_drive_t ;


 int VAR_0 ;

void FUNC_0(struct cdrom_device_info *VAR_1)
{
 ide_drive_t *VAR_2 = VAR_1->handle;

 if (!VAR_1->use_count)
  VAR_2->atapi_flags &= ~VAR_0;
}
